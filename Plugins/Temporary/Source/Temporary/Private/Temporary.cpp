#include "Temporary.h"

#define LOCTEXT_NAMESPACE "FTemporaryModule"

void FTemporaryModule::StartupModule()
{
}

void FTemporaryModule::ShutdownModule()
{
}

#undef LOCTEXT_NAMESPACE
// Temporary 플러그인 모듈을 Unreal에 등록합니다.
IMPLEMENT_MODULE(FTemporaryModule, Temporary)