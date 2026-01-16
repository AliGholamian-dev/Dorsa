#include "Core/Dorsa.h"
#include "Core/Graphics/Graphics.h"
#include "Core/Platform/Platform.h"
#include "Common/NameManglingGuard.h"

Common_NameManglingGuard_Begin

void Dorsa_Init()
{
    Platform_Init();
    Graphics_Init();
}

void Dorsa_DeInit()
{
    Graphics_DeInit();
    Platform_DeInit();
}

void Dorsa_BeginDrawing()
{
    Graphics_BeginRender();

    /// TODO: reset matrixes and get the next buffer index in the input or calculate it your self (maybe the scond part is begin renders responsibility)
}

void Dorsa_EndDrawing()
{
    Graphics_EndRender();
    Platform_PresentToScreen();
}

void Dorsa_Clear(const Color* clearColor)
{
    Graphics_ClearScreenBuffers(clearColor);
}

Common_NameManglingGuard_End
