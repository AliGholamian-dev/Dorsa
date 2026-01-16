#pragma once

#include "Core/Color/Color.h"
#include "Common/NameManglingGuard.h"

Common_NameManglingGuard_Begin

/// TODO: This is an abstraction on top of Graphics, such that in each function it may call multiple GL functions like raylib
/// Follow raylibs design to an extent, for example raylib calls two GL functions
/// TODO: Enrich the API such that all function take in specific state and structs

void Dorsa_Init();
void Dorsa_DeInit();

/// TODO: Add device query and selection API

void Dorsa_BeginDrawing();
void Dorsa_EndDrawing();

void Dorsa_Clear(const Color* clearColor);

Common_NameManglingGuard_End
