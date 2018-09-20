#pragma once

class Vector2
{
public:
	Vector2(float x, float y)
		:
		x(x),
		y(y)
	{}

	float x = 0.0f;
	float y = 0.0f;
};
class Vector3
{
public:
	Vector3(float x, float y, float z)
		:
		x(x),
		y(y),
		z(z)
	{}

	float x = 0.0f;
	float y = 0.0f;
	float z = 0.0f;
};
class Vector4
{
public:
	Vector4(float x, float y, float z, float w)
		:
		x(x),
		y(y),
		z(z),
		w(w)
	{}

	float x = 0.0f;
	float y = 0.0f;
	float z = 0.0f;
	float w = 0.0f;
};