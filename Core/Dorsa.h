#pragma once

#include "Common/Packed.h"
#include "Common/NameManglingGuard.h"

Common_NameManglingGuard_Begin

Packed_Struct_Start
typedef struct Packed_Struct_Attribute DorsaInitializationInfo
{
    /// TODO: In future add platform calls (e.g. a function to query for all available devices)
} DorsaInitializationInfo;
Packed_Struct_End

void Dorsa_Init(const DorsaInitializationInfo* dorsaInitializationInfo);
void Dorsa_DeInit();

Common_NameManglingGuard_End
