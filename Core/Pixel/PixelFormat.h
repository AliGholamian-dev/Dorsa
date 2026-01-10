#pragma once

#include "Common/BasicDataTypes.h"
#include "Common/NameManglingGuard.h"

Common_NameManglingGuard_Begin

typedef enum : UInt8
{
    PixelFormat_RGB565,
} PixelFormat;

UInt8 PixelFormat_GetBytesPerPixel(PixelFormat pixelFormat);

Common_NameManglingGuard_End
