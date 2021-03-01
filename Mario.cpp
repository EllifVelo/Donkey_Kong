#include "Mario.h"
Mario::Mario(int x, int y){
	for (size_t i = 0; i < N; i++)
	{
		pt[i] = { 0,0 };
	}
}
Mario::~Mario() {

}
POINT Mario::drawSelf(HDC hdc, int right, int bottom) {
	if (xScaleStart < 0)xScaleStart = right ;
	if (yScaleStart < 0) yScaleStart = bottom;
	float xScale = right / xScaleStart;
	float yScale = bottom / yScaleStart;
	float heatBox = (stepX == setStep) ? 0.5 :
		(stepX == -setStep) ? N / 2 :
		(stepY == -setStep) ? N * 0.75 : N * 0.25;
	TCHAR symbolsY[64];
	int dataSizeY = 0;
	dataSizeY = wsprintf(symbolsY, L"posY = %d", posY);
	TextOut(hdc, 100, 100, symbolsY, dataSizeY); // выводим текст в окно
	TCHAR symbolsX[64];
	int dataSizeX = 0;
	dataSizeX = wsprintf(symbolsX, L"posX = %d", posX);
	TextOut(hdc, 200, 100, symbolsX, dataSizeX);
	TCHAR symbolsR[64];
	int dataSizeR = 0;
	dataSizeR = wsprintf(symbolsR, L"right = %d", int(right / xScale));
	TextOut(hdc, 300, 100, symbolsR, dataSizeR);
	TCHAR symbolsB[64];
	int dataSizeB = 0;
	dataSizeB = wsprintf(symbolsB, L"bottom = %d", int(bottom / yScale));
	TextOut(hdc, 500, 100, symbolsB, dataSizeB);
	/*if (*ptrToSnakeDie) {
		if (posX > right || posX <= 0 || posY > bottom || posY <= 0) stepX = stepY = 0, die = 1;


	}
	else {*/
	if (posX > (right / xScale)-23) {
		stepX = 1;
		posX = (right / xScale) - 23 - 1;
	}
	else if (posX <= 0) { 
		stepX = 0;
		posX = 1;
	}
	if (posY > bottom / yScale) {
		stepY = 0;
		posY = bottom / yScale - 1;
	}

	else if (posY <= 0) { 
		stepY = 0;
		posY = 1;
	}
//}
	stepSelf();
	Falling();
	pt[0] = {long(posX * xScale),long(posY * yScale) };
	pt[1] = {long(posX * xScale),long((posY+40) * yScale) };
	pt[2] = {long((posX+10) * xScale),long(posY * yScale) };
	pt[3] = {long((posX+10) * xScale),long((posY+40) * yScale) };
	Polygon(hdc, pt, N);
	
	return{ posX, posY };
}
void  Mario::stepSelf() {
	posX += stepX;
	posY += stepY;
}

void Mario::SetStep(int newStep, bool vert) {

	if (vert) {
		stepY = -10;// newStep* setStep;
	}

	else {
		stepX = newStep * setStep;	
	}
}
void  Mario::Falling() {
	stepY += 2;
	if (stepY > 10) {
		stepY = 0;
	}
}
void Mario::SetSpeed(int ss) {
	setStep = ss;
}