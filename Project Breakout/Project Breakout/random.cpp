#include "random.h"
#include <random>
#include <numeric>

namespace {
	std::mt19937 randomGenerator;
}
namespace Random
{
	void InitRandomEngine()
	{
		std::random_device device;
		randomGenerator.seed(device());
	}
	void ShutdownRandomEngine()
	{

	}
	i32 GetRandomInteger(i32 from = 0, i32 to = std::numeric_limits<i32>::max())
	{
		std::uniform_int<i32> distribution(from, to);
		return distribution(randomGenerator);
	}
	float GetRandomFloat(float from = 0.0f, float to = std::numeric_limits<float>::max())
	{
		std::uniform_real<float> distribution(from, to);
		return distribution(randomGenerator);
	}
}