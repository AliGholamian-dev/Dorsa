#pragma once

#include "Common/NameManglingGuard.h"

Common_NameManglingGuard_Begin

/// TODO: Enrich the API such that all function take in specific state and structs

void Platform_Init();

void Platform_DeInit();

void Platform_PresentToScreen();

Common_NameManglingGuard_End
