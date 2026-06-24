// Test.cpp

#include "Test.h"

#define LOCTEXT_NAMESPACE "FTestModule"

void FTestModule::StartupModule()
{
}

void FTestModule::ShutdownModule()
{
}

#undef LOCTEXT_NAMESPACE
// Test 모듈이 로드될 때 사용할 모듈 구현체를 Unreal에 등록합니다.
IMPLEMENT_MODULE(FTestModule, Test)