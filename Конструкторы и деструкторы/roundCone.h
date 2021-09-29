#pragma once
#ifndef VECTOR_H
#define VECTOR_H

class roundCone {

	double x, y, z;
	double r, h;

public:
	void In();
	void Out();
	double Volume();

	roundCone() {
		x = rand() % 20;
		y = rand() % 20;
		z = rand() % 20;
		r = rand() % 20;
		h = rand() % 20;
	}

	roundCone(double myX, double myY, double myZ, double myR, double myH) :x(myX), y(myY), z(myZ), r(myR), h(myH) {}
	roundCone(const roundCone& rC) :x(rC.x), y(rC.y), z(rC.z), r(rC.r), h(rC.h) {}
	~roundCone() {}
};
#endif