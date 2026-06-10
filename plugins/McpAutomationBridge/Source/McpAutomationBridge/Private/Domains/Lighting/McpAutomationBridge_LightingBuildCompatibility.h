#pragma once

#include "EditorBuildUtils.h"
#include "Engine/EngineTypes.h"

class UWorld;

namespace McpLightingHandlers
{
#if WITH_EDITOR
bool RunLegacyLightingBuild(
    UWorld& World,
    ELightingBuildQuality Quality);
#endif
}
