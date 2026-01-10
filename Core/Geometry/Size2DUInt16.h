#pragma once

#include "Common/Packed.h"
#include "Common/BasicDataTypes.h"
#include "Common/NameManglingGuard.h"

Common_NameManglingGuard_Begin

Packed_Struct_Start
typedef struct Packed_Struct_Attribute Size2DUInt16
{
    UInt16 width;
    UInt16 height;
} Size2DUInt16;
Packed_Struct_End

Common_NameManglingGuard_End
