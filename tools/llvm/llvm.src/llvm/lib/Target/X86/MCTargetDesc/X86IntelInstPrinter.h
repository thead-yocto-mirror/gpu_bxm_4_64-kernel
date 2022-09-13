//= X86IntelInstPrinter.h - Convert X86 MCInst to assembly syntax -*- C++ -*-=//
//
// Part of the LLVM Project, under the Apache License v2.0 with LLVM Exceptions.
// See https://llvm.org/LICENSE.txt for license information.
// SPDX-License-Identifier: Apache-2.0 WITH LLVM-exception
//
//===----------------------------------------------------------------------===//
//
// This class prints an X86 MCInst to Intel style .s file syntax.
//
//===----------------------------------------------------------------------===//

#ifndef LLVM_LIB_TARGET_X86_MCTARGETDESC_X86INTELINSTPRINTER_H
#define LLVM_LIB_TARGET_X86_MCTARGETDESC_X86INTELINSTPRINTER_H

#include "X86InstPrinterCommon.h"
#include "llvm/Support/raw_ostream.h"

namespace llvm {

class X86IntelInstPrinter final : public X86InstPrinterCommon {
public:
  X86IntelInstPrinter(const MCAsmInfo &MAI, const MCInstrInfo &MII,
                      const MCRegisterInfo &MRI)
    : X86InstPrinterCommon(MAI, MII, MRI) {}

  void printRegName(raw_ostream &OS, unsigned RegNo) const override;
  void printInst(const MCInst *MI, raw_ostream &OS, StringRef Annot,
                 const MCSubtargetInfo &STI) override;
  bool printVecCompareInstr(const MCInst *MI, raw_ostream &OS);

  // Autogenerated by tblgen, returns true if we successfully printed an
  // alias.
  bool printAliasInstr(const MCInst *MI, raw_ostream &OS);
  void printCustomAliasOperand(const MCInst *MI, unsigned OpIdx,
                               unsigned PrintMethodIdx, raw_ostream &O);

  // Autogenerated by tblgen.
  void printInstruction(const MCInst *MI, raw_ostream &O);
  static const char *getRegisterName(unsigned RegNo);

  void printOperand(const MCInst *MI, unsigned OpNo, raw_ostream &O) override;
  void printMemReference(const MCInst *MI, unsigned Op, raw_ostream &O);
  void printMemOffset(const MCInst *MI, unsigned OpNo, raw_ostream &O);
  void printSrcIdx(const MCInst *MI, unsigned OpNo, raw_ostream &O);
  void printDstIdx(const MCInst *MI, unsigned OpNo, raw_ostream &O);
  void printU8Imm(const MCInst *MI, unsigned Op, raw_ostream &O);
  void printSTiRegOperand(const MCInst *MI, unsigned OpNo, raw_ostream &OS);

  void printanymem(const MCInst *MI, unsigned OpNo, raw_ostream &O) {
    printMemReference(MI, OpNo, O);
  }

  void printopaquemem(const MCInst *MI, unsigned OpNo, raw_ostream &O) {
    printMemReference(MI, OpNo, O);
  }

  void printbytemem(const MCInst *MI, unsigned OpNo, raw_ostream &O) {
    O << "byte ptr ";
    printMemReference(MI, OpNo, O);
  }
  void printwordmem(const MCInst *MI, unsigned OpNo, raw_ostream &O) {
    O << "word ptr ";
    printMemReference(MI, OpNo, O);
  }
  void printdwordmem(const MCInst *MI, unsigned OpNo, raw_ostream &O) {
    O << "dword ptr ";
    printMemReference(MI, OpNo, O);
  }
  void printqwordmem(const MCInst *MI, unsigned OpNo, raw_ostream &O) {
    O << "qword ptr ";
    printMemReference(MI, OpNo, O);
  }
  void printxmmwordmem(const MCInst *MI, unsigned OpNo, raw_ostream &O) {
    O << "xmmword ptr ";
    printMemReference(MI, OpNo, O);
  }
  void printymmwordmem(const MCInst *MI, unsigned OpNo, raw_ostream &O) {
    O << "ymmword ptr ";
    printMemReference(MI, OpNo, O);
  }
  void printzmmwordmem(const MCInst *MI, unsigned OpNo, raw_ostream &O) {
    O << "zmmword ptr ";
    printMemReference(MI, OpNo, O);
  }
  void printtbytemem(const MCInst *MI, unsigned OpNo, raw_ostream &O) {
    O << "tbyte ptr ";
    printMemReference(MI, OpNo, O);
  }


  void printSrcIdx8(const MCInst *MI, unsigned OpNo, raw_ostream &O) {
    O << "byte ptr ";
    printSrcIdx(MI, OpNo, O);
  }
  void printSrcIdx16(const MCInst *MI, unsigned OpNo, raw_ostream &O) {
    O << "word ptr ";
    printSrcIdx(MI, OpNo, O);
  }
  void printSrcIdx32(const MCInst *MI, unsigned OpNo, raw_ostream &O) {
    O << "dword ptr ";
    printSrcIdx(MI, OpNo, O);
  }
  void printSrcIdx64(const MCInst *MI, unsigned OpNo, raw_ostream &O) {
    O << "qword ptr ";
    printSrcIdx(MI, OpNo, O);
  }
  void printDstIdx8(const MCInst *MI, unsigned OpNo, raw_ostream &O) {
    O << "byte ptr ";
    printDstIdx(MI, OpNo, O);
  }
  void printDstIdx16(const MCInst *MI, unsigned OpNo, raw_ostream &O) {
    O << "word ptr ";
    printDstIdx(MI, OpNo, O);
  }
  void printDstIdx32(const MCInst *MI, unsigned OpNo, raw_ostream &O) {
    O << "dword ptr ";
    printDstIdx(MI, OpNo, O);
  }
  void printDstIdx64(const MCInst *MI, unsigned OpNo, raw_ostream &O) {
    O << "qword ptr ";
    printDstIdx(MI, OpNo, O);
  }
  void printMemOffs8(const MCInst *MI, unsigned OpNo, raw_ostream &O) {
    O << "byte ptr ";
    printMemOffset(MI, OpNo, O);
  }
  void printMemOffs16(const MCInst *MI, unsigned OpNo, raw_ostream &O) {
    O << "word ptr ";
    printMemOffset(MI, OpNo, O);
  }
  void printMemOffs32(const MCInst *MI, unsigned OpNo, raw_ostream &O) {
    O << "dword ptr ";
    printMemOffset(MI, OpNo, O);
  }
  void printMemOffs64(const MCInst *MI, unsigned OpNo, raw_ostream &O) {
    O << "qword ptr ";
    printMemOffset(MI, OpNo, O);
  }
};

} // end namespace llvm

#endif // LLVM_LIB_TARGET_X86_MCTARGETDESC_X86INTELINSTPRINTER_H
