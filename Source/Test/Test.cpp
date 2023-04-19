#include "Test.h"

#include "Multithread/FTestTask.h"

#define LOCTEXT_NAMESPACE "FTestModule"

void FTestModule::StartupModule()
{
	FCoreDelegates::OnPostEngineInit.AddLambda([this]()
	{
		auto TestAsyncTask = new FAsyncTask<FTestTask>();
		TestAsyncTask->StartBackgroundTask();
	});
}

void FTestModule::ShutdownModule()
{
    
}

#undef LOCTEXT_NAMESPACE
    
IMPLEMENT_MODULE(FTestModule, Test)