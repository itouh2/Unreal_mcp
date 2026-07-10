#pragma once

#include "Core/Compatibility/McpVersionCompatibility.h"
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h" // [CCB-PATCH] UE 5.7: TSubclassOf テンプレート
#include "Dom/JsonObject.h"

#if MCP_HAS_MOVIE_RENDER_PIPELINE

class UMoviePipelineExecutorBase;

namespace McpSequenceMovieRender {
struct FRenderWaitState;

TSubclassOf<UMoviePipelineExecutorBase> ResolveExecutorClass(
    const TSharedPtr<FJsonObject> &Payload, FString &OutMessage,
    FString &OutCode);
void AttachOutputCapture(UMoviePipelineExecutorBase *Executor,
                         TSharedRef<FRenderWaitState> State);
}

#endif
