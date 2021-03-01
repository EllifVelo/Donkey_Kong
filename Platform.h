#pragma once
#include <vector>
#include <fstream>
#include "framework.h"
#include <cmath>
#include <fstream>
#include "InitPlatf.h"
#define N 4

#define PI 3.14

using namespace std;

class Platform
{
	POINT pt[N];
	InitPlatf initPlatf[5];
public:
	Platform(); // конструктор класса по умолчанию
	~Platform(); // диструктор класса (всег

	POINT drawSelf(HDC hdc, int right, int bottom);
	void RigidPlatforms(HDC hdc, int right, int bottom);
	
};
