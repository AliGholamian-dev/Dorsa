#include "Core/Pixel/PixelFormat.h"
#include "Common/NameManglingGuard.h"

Common_NameManglingGuard_Begin

UInt8 PixelFormat_GetBytesPerPixel(const PixelFormat pixelFormat)
{
    UInt8 bytesPerPixel = 0;
    switch (pixelFormat)
    {
        case PixelFormat_RGB565:
        {
            bytesPerPixel = 2;
        } break;
        default:
        {
            bytesPerPixel = 0;
        } break;
    }
    return bytesPerPixel;
}

Common_NameManglingGuard_End
