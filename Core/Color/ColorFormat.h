#pragma once

#include "Common/BasicDataTypes.h"
#include "Common/NameManglingGuard.h"

Common_NameManglingGuard_Begin

/// TODO: Expand this like QColor
typedef enum ColorFormat : UInt8
{
    ColorFormat_RGBA8888,
} ColorFormat;

Common_NameManglingGuard_End
