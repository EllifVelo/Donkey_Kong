#pragma once

class InitPlatf
{
	int X;
	int Y;
	int A;
	int Z;

public:
	InitPlatf();
	~InitPlatf();
	void set(POINT x, POINT y, POINT a, POINT z);
	bool isOn(int x, int y);
};

