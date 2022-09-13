/*************************************************************************/ /*!
@Copyright      Copyright (c) Imagination Technologies Ltd. All Rights Reserved
@License        Dual MIT/GPLv2

The contents of this file are subject to the MIT license as set out below.

Permission is hereby granted, free of charge, to any person obtaining a copy
of this software and associated documentation files (the "Software"), to deal
in the Software without restriction, including without limitation the rights
to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
copies of the Software, and to permit persons to whom the Software is
furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in
all copies or substantial portions of the Software.

Alternatively, the contents of this file may be used under the terms of
the GNU General Public License Version 2 ("GPL") in which case the provisions
of GPL are applicable instead of those above.

If you wish to allow use of your version of this file only under the terms of
GPL, and not to allow others to use your version of this file under the terms
of the MIT license, indicate your decision by deleting the provisions above
and replace them with the notice and other provisions required by GPL as set
out in the file called "GPL-COPYING" included in this distribution. If you do
not delete the provisions above, a recipient may use your version of this file
under the terms of either the MIT license or GPL.

This License is also included in this distribution in the file called
"MIT-COPYING".

EXCEPT AS OTHERWISE STATED IN A NEGOTIATED AGREEMENT: (A) THE SOFTWARE IS
PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR IMPLIED, INCLUDING
BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY, FITNESS FOR A PARTICULAR
PURPOSE AND NONINFRINGEMENT; AND (B) IN NO EVENT SHALL THE AUTHORS OR
COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER
IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN
CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.
*/ /**************************************************************************/

/* Autogenerated - don't edit. Generated from top_regs.def. Regconv 0.2_r110 */

#ifndef _PLATO_TOP_REGS_H_
#define _PLATO_TOP_REGS_H_

/*
	Register CR_SPI_CLK_CTRL
*/
#define PLATO_TOP_CR_SPI_CLK_CTRL                         0x0000
#define PLATO_CR_SPIV1_DIV_0_MASK                         0x00007000U
#define PLATO_CR_SPIV1_DIV_0_SHIFT                        12
#define PLATO_CR_SPIV1_DIV_0_SIGNED                       0

#define PLATO_CR_SPIV0_DIV_0_MASK                         0x00000300U
#define PLATO_CR_SPIV0_DIV_0_SHIFT                        8
#define PLATO_CR_SPIV0_DIV_0_SIGNED                       0

#define PLATO_CR_SPIG_GATE_EN_MASK                        0x00000010U
#define PLATO_CR_SPIG_GATE_EN_SHIFT                       4
#define PLATO_CR_SPIG_GATE_EN_SIGNED                      0

#define PLATO_CR_CS_SPI_0_SW_MASK                         0x00000001U
#define PLATO_CR_CS_SPI_0_SW_SHIFT                        0
#define PLATO_CR_CS_SPI_0_SW_SIGNED                       0

/*
	Register CR_PDP_CLK_CTRL
*/
#define PLATO_TOP_CR_PDP_CLK_CTRL                         0x0004
#define PLATO_CR_PDPV1_DIV_0_MASK                         0x00003000U
#define PLATO_CR_PDPV1_DIV_0_SHIFT                        12
#define PLATO_CR_PDPV1_DIV_0_SIGNED                       0

#define PLATO_CR_PDPV0_DIV_0_MASK                         0x00000300U
#define PLATO_CR_PDPV0_DIV_0_SHIFT                        8
#define PLATO_CR_PDPV0_DIV_0_SIGNED                       0

#define PLATO_CR_PDPG_GATE_EN_MASK                        0x00000010U
#define PLATO_CR_PDPG_GATE_EN_SHIFT                       4
#define PLATO_CR_PDPG_GATE_EN_SIGNED                      0

#define PLATO_CR_CS_PDP_0_SW_MASK                         0x00000001U
#define PLATO_CR_CS_PDP_0_SW_SHIFT                        0
#define PLATO_CR_CS_PDP_0_SW_SIGNED                       0

/*
	Register CR_HDMI_CEC_CLK_CTRL
*/
#define PLATO_TOP_CR_HDMI_CEC_CLK_CTRL                    0x0008
#define PLATO_CR_HDMICECV2_DIV_0_MASK                     0x03FF0000U
#define PLATO_CR_HDMICECV2_DIV_0_SHIFT                    16
#define PLATO_CR_HDMICECV2_DIV_0_SIGNED                   0

#define PLATO_CR_HDMICECV1_DIV_0_MASK                     0x00001F00U
#define PLATO_CR_HDMICECV1_DIV_0_SHIFT                    8
#define PLATO_CR_HDMICECV1_DIV_0_SIGNED                   0

#define PLATO_CR_HDMICECV0_DIV_0_MASK                     0x00000003U
#define PLATO_CR_HDMICECV0_DIV_0_SHIFT                    0
#define PLATO_CR_HDMICECV0_DIV_0_SIGNED                   0

/*
	Register CR_HDMI_CLK_CTRL
*/
#define PLATO_TOP_CR_HDMI_CLK_CTRL                        0x000C
#define PLATO_CR_HDMIV1_DIV_0_MASK                        0x0000F000U
#define PLATO_CR_HDMIV1_DIV_0_SHIFT                       12
#define PLATO_CR_HDMIV1_DIV_0_SIGNED                      0

#define PLATO_CR_HDMIV0_DIV_0_MASK                        0x00000300U
#define PLATO_CR_HDMIV0_DIV_0_SHIFT                       8
#define PLATO_CR_HDMIV0_DIV_0_SIGNED                      0

#define PLATO_CR_HDMIG_GATE_EN_MASK                       0x00000010U
#define PLATO_CR_HDMIG_GATE_EN_SHIFT                      4
#define PLATO_CR_HDMIG_GATE_EN_SIGNED                     0

#define PLATO_CR_CS_HDMI_0_SW_MASK                        0x00000001U
#define PLATO_CR_CS_HDMI_0_SW_SHIFT                       0
#define PLATO_CR_CS_HDMI_0_SW_SIGNED                      0

/*
	Register CR_DDR_CLK_CTRL
*/
#define PLATO_TOP_CR_DDR_CLK_CTRL                         0x0010
#define PLATO_CR_DDRBG_GATE_EN_MASK                       0x00000010U
#define PLATO_CR_DDRBG_GATE_EN_SHIFT                      4
#define PLATO_CR_DDRBG_GATE_EN_SIGNED                     0

#define PLATO_CR_DDRAG_GATE_EN_MASK                       0x00000001U
#define PLATO_CR_DDRAG_GATE_EN_SHIFT                      0
#define PLATO_CR_DDRAG_GATE_EN_SIGNED                     0

/*
	Register CR_GPU_CLK_CTRL
*/
#define PLATO_TOP_CR_GPU_CLK_CTRL                         0x0014
#define PLATO_CR_GPUD_DEL_0_MASK                          0x0003FF00U
#define PLATO_CR_GPUD_DEL_0_SHIFT                         8
#define PLATO_CR_GPUD_DEL_0_SIGNED                        0

#define PLATO_CR_GPUV_DIV_0_MASK                          0x00000030U
#define PLATO_CR_GPUV_DIV_0_SHIFT                         4
#define PLATO_CR_GPUV_DIV_0_SIGNED                        0

#define PLATO_CR_GPUG_GATE_EN_MASK                        0x00000001U
#define PLATO_CR_GPUG_GATE_EN_SHIFT                       0
#define PLATO_CR_GPUG_GATE_EN_SIGNED                      0

/*
	Register CR_UART_CLK_CTRL
*/
#define PLATO_TOP_CR_UART_CLK_CTRL                        0x0018
#define PLATO_CR_UARTG_GATE_EN_MASK                       0x00000001U
#define PLATO_CR_UARTG_GATE_EN_SHIFT                      0
#define PLATO_CR_UARTG_GATE_EN_SIGNED                     0

/*
	Register CR_I2C_CLK_CTRL
*/
#define PLATO_TOP_CR_I2C_CLK_CTRL                         0x001C
#define PLATO_CR_I2CG_GATE_EN_MASK                        0x00000001U
#define PLATO_CR_I2CG_GATE_EN_SHIFT                       0
#define PLATO_CR_I2CG_GATE_EN_SIGNED                      0

/*
	Register CR_SENSOR_CLK_CTRL
*/
#define PLATO_TOP_CR_SENSOR_CLK_CTRL                      0x0020
#define PLATO_CR_SNRV_DIV_0_MASK                          0x000000F0U
#define PLATO_CR_SNRV_DIV_0_SHIFT                         4
#define PLATO_CR_SNRV_DIV_0_SIGNED                        0

#define PLATO_CR_SNRG_GATE_EN_MASK                        0x00000001U
#define PLATO_CR_SNRG_GATE_EN_SHIFT                       0
#define PLATO_CR_SNRG_GATE_EN_SIGNED                      0

/*
	Register CR_WDT_CLK_CTRL
*/
#define PLATO_TOP_CR_WDT_CLK_CTRL                         0x0024
#define PLATO_CR_WDTV_DIV_0_MASK                          0x00003FF0U
#define PLATO_CR_WDTV_DIV_0_SHIFT                         4
#define PLATO_CR_WDTV_DIV_0_SIGNED                        0

#define PLATO_CR_WDTG_GATE_EN_MASK                        0x00000001U
#define PLATO_CR_WDTG_GATE_EN_SHIFT                       0
#define PLATO_CR_WDTG_GATE_EN_SIGNED                      0

/*
	Register CR_USB_CLK_ENABLE
*/
#define PLATO_TOP_CR_USB_CLK_ENABLE                       0x0028
#define PLATO_CR_USB_CLK_ENABLE_MASK                      0x00000001U
#define PLATO_CR_USB_CLK_ENABLE_SHIFT                     0
#define PLATO_CR_USB_CLK_ENABLE_SIGNED                    0

/*
	Register CR_RING_OSC_CTRL
*/
#define PLATO_TOP_CR_RING_OSC_CTRL                        0x0030
#define PLATO_CR_OSC_EN_MASK                              0x00000001U
#define PLATO_CR_OSC_EN_SHIFT                             0
#define PLATO_CR_OSC_EN_SIGNED                            0

/*
	Register CR_RING_OSC0_VAL
*/
#define PLATO_TOP_CR_RING_OSC0_VAL                        0x0034
#define PLATO_CR_RING_OSC0_VAL_MASK                       0xFFFFFFFFU
#define PLATO_CR_RING_OSC0_VAL_SHIFT                      0
#define PLATO_CR_RING_OSC0_VAL_SIGNED                     0

/*
	Register CR_RING_OSC1_VAL
*/
#define PLATO_TOP_CR_RING_OSC1_VAL                        0x0038
#define PLATO_CR_RING_OSC1_VAL_MASK                       0xFFFFFFFFU
#define PLATO_CR_RING_OSC1_VAL_SHIFT                      0
#define PLATO_CR_RING_OSC1_VAL_SIGNED                     0

/*
	Register CR_RING_OSC2_VAL
*/
#define PLATO_TOP_CR_RING_OSC2_VAL                        0x003C
#define PLATO_CR_RING_OSC2_VAL_MASK                       0xFFFFFFFFU
#define PLATO_CR_RING_OSC2_VAL_SHIFT                      0
#define PLATO_CR_RING_OSC2_VAL_SIGNED                     0

/*
	Register CR_RING_OSC3_VAL
*/
#define PLATO_TOP_CR_RING_OSC3_VAL                        0x0040
#define PLATO_CR_RING_OSC3_VAL_MASK                       0xFFFFFFFFU
#define PLATO_CR_RING_OSC3_VAL_SHIFT                      0
#define PLATO_CR_RING_OSC3_VAL_SIGNED                     0

/*
	Register CR_PCI_CTRL
*/
#define PLATO_TOP_CR_PCI_CTRL                             0x0080
#define PLATO_CR_PCI_I_CLK_IN_NS_MASK                     0xFFFF0000U
#define PLATO_CR_PCI_I_CLK_IN_NS_SHIFT                    16
#define PLATO_CR_PCI_I_CLK_IN_NS_SIGNED                   0

#define PLATO_CR_PCI_AXPCIEATTR_MASK                      0x00000007U
#define PLATO_CR_PCI_AXPCIEATTR_SHIFT                     0
#define PLATO_CR_PCI_AXPCIEATTR_SIGNED                    0

/*
	Register CR_MAIL_BOX
*/
#define PLATO_TOP_CR_MAIL_BOX                             0x0084
#define PLATO_CR_MAIL_BOX_MASK                            0xFFFFFFFFU
#define PLATO_CR_MAIL_BOX_SHIFT                           0
#define PLATO_CR_MAIL_BOX_SIGNED                          0

/*
	Register CR_PCI_INT_MASK
*/
#define PLATO_TOP_CR_PCI_INT_MASK                         0x0088
#define PLATO_CR_PCI_INT_MASK_MASK                        0xFFFFFFFFU
#define PLATO_CR_PCI_INT_MASK_SHIFT                       0
#define PLATO_CR_PCI_INT_MASK_SIGNED                      0

/*
	Register CR_PCI_PHY_STATUS
*/
#define PLATO_TOP_CR_PCI_PHY_STATUS                       0x008C
#define PLATO_CR_PCI_PHY_READY_MASK                       0x00000001U
#define PLATO_CR_PCI_PHY_READY_SHIFT                      0
#define PLATO_CR_PCI_PHY_READY_SIGNED                     0

/*
	Register CR_INT_STATUS
*/
#define PLATO_TOP_CR_INT_STATUS                           0x0090
#define PLATO_CR_INT_STATUS_MASK                          0x00FFFFFFU
#define PLATO_CR_INT_STATUS_SHIFT                         0
#define PLATO_CR_INT_STATUS_SIGNED                        0

/*
	Register CR_PLATO_REV
*/
#define PLATO_TOP_CR_PLATO_REV                            0x009C
#define PLATO_CR_PLATO_MAINT_REV_MASK                     0x000000FFU
#define PLATO_CR_PLATO_MAINT_REV_SHIFT                    0
#define PLATO_CR_PLATO_MAINT_REV_SIGNED                   0

#define PLATO_CR_PLATO_MINOR_REV_MASK                     0x0000FF00U
#define PLATO_CR_PLATO_MINOR_REV_SHIFT                    8
#define PLATO_CR_PLATO_MINOR_REV_SIGNED                   0

#define PLATO_CR_PLATO_MAJOR_REV_MASK                     0x00FF0000U
#define PLATO_CR_PLATO_MAJOR_REV_SHIFT                    16
#define PLATO_CR_PLATO_MAJOR_REV_SIGNED                   0

#define PLATO_CR_PLATO_DESIGNER_MASK                      0xFF000000U
#define PLATO_CR_PLATO_DESIGNER_SHIFT                     24
#define PLATO_CR_PLATO_DESIGNER_SIGNED                    0

#endif /* _PLATO_TOP_REGS_H_ */

/*****************************************************************************
 End of file (plato_top_regs.h)
*****************************************************************************/