; NOTE: Assertions have been autogenerated by utils/update_llc_test_checks.py
; RUN: llc -mtriple=aarch64 < %s | FileCheck %s

; Check that we optimize out AND instructions and ADD/SUB instructions
; modulo the shift size to take advantage of the implicit mod done on
; the shift amount value by the variable shift/rotate instructions.

define i32 @test1(i32 %x, i64 %y) {
; CHECK-LABEL: test1:
; CHECK:       // %bb.0:
; CHECK-NEXT:    lsr w0, w0, w1
; CHECK-NEXT:    ret
  %sh_prom = trunc i64 %y to i32
  %shr = lshr i32 %x, %sh_prom
  ret i32 %shr
}

define i64 @test2(i32 %x, i64 %y) {
; CHECK-LABEL: test2:
; CHECK:       // %bb.0:
; CHECK-NEXT:    neg w[[REG:[0-9]+]], w0
; CHECK-NEXT:    asr x0, x1, x[[REG]]
; CHECK-NEXT:    ret
  %sub9 = sub nsw i32 64, %x
  %sh_prom12.i = zext i32 %sub9 to i64
  %shr.i = ashr i64 %y, %sh_prom12.i
  ret i64 %shr.i
}

define i64 @test3(i64 %x, i64 %y) {
; CHECK-LABEL: test3:
; CHECK:       // %bb.0:
; CHECK-NEXT:    lsl x0, x1, x0
; CHECK-NEXT:    ret
  %add = add nsw i64 64, %x
  %shl = shl i64 %y, %add
  ret i64 %shl
}

define i64 @test4(i64 %y, i32 %s) {
; CHECK-LABEL: test4:
; CHECK:       // %bb.0: // %entry
; CHECK-NEXT:    // kill: def $w1 killed $w1 def $x1
; CHECK-NEXT:    asr x0, x0, x1
; CHECK-NEXT:    ret
entry:
  %sh_prom = zext i32 %s to i64
  %shr = ashr i64 %y, %sh_prom
  ret i64 %shr
}

define i64 @test5(i64 %y, i32 %s) {
; CHECK-LABEL: test5:
; CHECK:       // %bb.0: // %entry
; CHECK-NEXT:    // kill: def $w1 killed $w1 def $x1
; CHECK-NEXT:    asr x0, x0, x1
; CHECK-NEXT:    ret
entry:
  %sh_prom = sext i32 %s to i64
  %shr = ashr i64 %y, %sh_prom
  ret i64 %shr
}

define i64 @test6(i64 %y, i32 %s) {
; CHECK-LABEL: test6:
; CHECK:       // %bb.0: // %entry
; CHECK-NEXT:    // kill: def $w1 killed $w1 def $x1
; CHECK-NEXT:    lsl x0, x0, x1
; CHECK-NEXT:    ret
entry:
  %sh_prom = sext i32 %s to i64
  %shr = shl i64 %y, %sh_prom
  ret i64 %shr
}