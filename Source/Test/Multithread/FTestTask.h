// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"

/**
 * 
 */
class TEST_API FTestTask
{
public:
	FORCEINLINE TStatId GetStatId() const
	{
		RETURN_QUICK_DECLARE_CYCLE_STAT(FTestTask, STATGROUP_ThreadPoolAsyncTasks);
	}

	void DoWork();

	bool CanAbandon() const
	{
		return true;
	}

	void Abandon()
	{
	}
};
