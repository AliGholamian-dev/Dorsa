#pragma once

#include "Core/Color/Color.h"
#include "Common/NameManglingGuard.h"

Common_NameManglingGuard_Begin

/// TODO: Enrich the API such that all function take in specific state and structs

void Graphics_Init();
void Graphics_DeInit();

void Graphics_BeginRender();
void Graphics_EndRender();

void Graphics_ClearScreenBuffers(const Color* clearColor);

Common_NameManglingGuard_End
