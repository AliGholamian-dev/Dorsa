#pragma once

#include "Common/Packed.h"
#include "Common/BasicDataTypes.h"
#include "Common/NameManglingGuard.h"

Common_NameManglingGuard_Begin

Packed_Struct_Start
typedef struct Packed_Struct_Attribute ColorRGBA8888
{
    UInt8 red;
    UInt8 green;
    UInt8 blue;
    UInt8 alpha;
} ColorRGBA8888;
Packed_Struct_End

Common_NameManglingGuard_End
