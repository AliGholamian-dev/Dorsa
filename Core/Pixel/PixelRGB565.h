#pragma once

#include "Common/Packed.h"
#include "Common/BasicDataTypes.h"
#include "Common/NameManglingGuard.h"

Common_NameManglingGuard_Begin

Packed_Struct_Start
typedef struct Packed_Struct_Attribute PixelRGB565
{
    UInt16 rgb;
} PixelRGB565;
Packed_Struct_End

Common_NameManglingGuard_End
