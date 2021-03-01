#pragma once
#include <vector>
#include <fstream>
#include "framework.h"
#include <cmath>
#include <fstream>
#include "Platform.h"
#define N 4
using namespace std;
class Mario
{
	POINT pt[N];
	int stepX = 0; //скорость шага по Т
	int stepY = 0; // скорость шага по Ф
	int posX=10; // текуща§ позици§ центра 
	int posY=910; // Уекуща§ позици§ центра 
	int setStep = 10;
	float xScaleStart = -1;
	float yScaleStart = -1;
	int posFall = posY + 40;
public:
	Mario(int x, int y); // конструктор класса по умолчанию
	~Mario(); // диструктор класса (всег
	void stepSelf();
	void SetStep(int newStep, bool vert);
	void Falling();
	void SetSpeed(int);
	POINT drawSelf(HDC hdc, int right, int bottom);
};

