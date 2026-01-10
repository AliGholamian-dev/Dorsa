#include "Core/Color/Color.h"
#include "Common/NameManglingGuard.h"

Common_NameManglingGuard_Begin

Color Color_CreateFromRGBA8888(const UInt8 red, const UInt8 green, const UInt8 blue, const UInt8 alpha)
{
    Color color;
    color.red = red;
    color.green = green;
    color.blue = blue;
    color.alpha = alpha;
    return color;
}

ColorRGBA8888 Color_ConvertToRGBA8888(const Color* color)
{
    ColorRGBA8888 colorRGBA8888;
    colorRGBA8888.red = color->red;
    colorRGBA8888.green = color->green;
    colorRGBA8888.blue = color->blue;
    colorRGBA8888.alpha = color->alpha;
    return colorRGBA8888;
}

Common_NameManglingGuard_End
