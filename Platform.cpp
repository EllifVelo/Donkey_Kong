#include "Platform.h"
#include <cmath>

Platform::Platform() {

}

Platform::~Platform(){

}
POINT Platform::drawSelf(HDC hdc, int right, int bottom) {
	float xScale = right / 1000.0;
	float yScale = bottom / 1000.0;
	pt[0] = { long(0 * xScale),long(1000 * yScale) };
	pt[1] = { long(0 * xScale),long(950 * yScale) };
	pt[2] = { long(1020 * xScale),long(950 * yScale) };
	pt[3] = { long(1020 * xScale),long(1050 * yScale) };
	initPlatf[0].set(pt[0], pt[1], pt[2], pt[3]);
	Polygon(hdc, pt, N);
	pt[0] = {long(0 * xScale),long(720 * yScale) };
	pt[1] = { long(0 * xScale),long(750 * yScale) };
	pt[2] = { long(850 * xScale),long(850 * yScale) };
	pt[3] = { long(850 * xScale),long(820 * yScale) };
	initPlatf[1].set(pt[0], pt[1], pt[2], pt[3]);
	//initPlatf[0].
	Polygon(hdc, pt, N); 
	pt[0] = { long(1000 * xScale),long(500 * yScale) };//Первая платформа 
	pt[1] = { long(1000 * xScale),long(530 * yScale) };
	pt[2] = { long(150 * xScale),long(630 * yScale) };
	pt[3] = { long(150 * xScale),long(600 * yScale) };
	initPlatf[2].set(pt[0], pt[1], pt[2], pt[3]);
	Polygon(hdc, pt, 4);//отрисовка первой платформы 
	pt[0] = { long(0 * xScale),long(310 * yScale) };//Вторая платформа
	pt[1] = { long(0 * xScale),long(340 * yScale) };
	pt[2] = { long(850 * xScale),long(440 * yScale) };
	pt[3] = { long(850 * xScale),long(410 * yScale) };
	initPlatf[3].set(pt[0], pt[1], pt[2], pt[3]);
	Polygon(hdc, pt, 4);//Отрисовка второй платформы
	pt[0] = { long(1000 * xScale),long(200 * yScale) };//Третья платформа
	pt[1] = { long(1000 * xScale),long(230 * yScale) };
	pt[2] = { long(150 * xScale),long(230 * yScale) };
	pt[3] = { long(150 * xScale),long(200 * yScale) };
	initPlatf[4].set(pt[0], pt[1], pt[2], pt[3]);
	Polygon(hdc, pt, 4);//Отрисовка третьей платформы

	
	return{};
}

void Platform::RigidPlatforms(HDC hdc, int right, int bottom) {
	float xScale = right / 1000.0;
	float yScale = bottom / 1000.0;
	/*if (posY = Rectangle)
	*/
	pt[0] = { long(1000 * xScale),long(500 * yScale) };//Первая платформа 
	pt[1] = { long(1000 * xScale),long(530 * yScale) };
	pt[2] = { long(150 * xScale),long(630 * yScale) };
	pt[3] = { long(150 * xScale),long(600 * yScale) };
}
