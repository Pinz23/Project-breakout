#pragma once

#include "types.h"

namespace Random{
	void InitRandomEngine();
	void ShutdownRandomEngine();
	i32 GetRandomInteger(i32 from, i32 to);
	float GetRandomFloat(float from, float to);
}