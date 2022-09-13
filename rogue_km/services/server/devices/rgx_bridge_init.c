/*************************************************************************/ /*!
@File
@Title          PVR device dependent bridge Init/Deinit Module (kernel side)
@Copyright      Copyright (c) Imagination Technologies Ltd. All Rights Reserved
@Description    Implements device dependent PVR Bridge init/deinit code
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

#include "img_types.h"
#include "img_defs.h"
#include "rgx_bridge_init.h"
#include "rgxdevice.h"

PVRSRV_ERROR InitRGXTQ2Bridge(void);
PVRSRV_ERROR DeinitRGXTQ2Bridge(void);
PVRSRV_ERROR InitRGXCMPBridge(void);
PVRSRV_ERROR DeinitRGXCMPBridge(void);
#if defined(SUPPORT_RGXRAY_BRIDGE)
PVRSRV_ERROR InitRGXRAYBridge(void);
PVRSRV_ERROR DeinitRGXRAYBridge(void);
#endif

PVRSRV_ERROR DeviceDepBridgeInit(PVRSRV_RGXDEV_INFO *psDevInfo)
{
	PVRSRV_ERROR eError;

	if (RGX_IS_FEATURE_SUPPORTED(psDevInfo, COMPUTE))
	{
		eError = InitRGXCMPBridge();
		PVR_LOG_RETURN_IF_ERROR(eError, "InitRGXCMPBridge");
	}

	if (RGX_IS_FEATURE_SUPPORTED(psDevInfo, FASTRENDER_DM))
	{
		eError = InitRGXTQ2Bridge();
		PVR_LOG_RETURN_IF_ERROR(eError, "InitRGXTQ2Bridge");
	}

#if defined(SUPPORT_RGXRAY_BRIDGE)
	if (RGX_IS_FEATURE_VALUE_SUPPORTED(psDevInfo, RAY_TRACING_ARCH) &&
		RGX_GET_FEATURE_VALUE(psDevInfo, RAY_TRACING_ARCH) > 0)
	{
		eError = InitRGXRAYBridge();
		PVR_LOG_RETURN_IF_ERROR(eError, "InitRGXRAYBridge");
	}
#endif

	return PVRSRV_OK;
}

PVRSRV_ERROR DeviceDepBridgeDeInit(PVRSRV_RGXDEV_INFO *psDevInfo)
{
	PVRSRV_ERROR eError;

	if (RGX_IS_FEATURE_SUPPORTED(psDevInfo, COMPUTE))
	{
		eError = DeinitRGXCMPBridge();
		PVR_LOG_RETURN_IF_ERROR(eError, "DeinitRGXCMPBridge");
	}

	if (RGX_IS_FEATURE_SUPPORTED(psDevInfo, FASTRENDER_DM))
	{
		eError = DeinitRGXTQ2Bridge();
		PVR_LOG_RETURN_IF_ERROR(eError, "DeinitRGXTQ2Bridge");
	}

#if defined(SUPPORT_RGXRAY_BRIDGE)
	if (RGX_IS_FEATURE_VALUE_SUPPORTED(psDevInfo, RAY_TRACING_ARCH) &&
		RGX_GET_FEATURE_VALUE(psDevInfo, RAY_TRACING_ARCH) > 0)
	{
		eError = DeinitRGXRAYBridge();
		PVR_LOG_RETURN_IF_ERROR(eError, "DeinitRGXRAYBridge");
	}
#endif

	return PVRSRV_OK;
}
