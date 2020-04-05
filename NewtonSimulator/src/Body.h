/*
 * Body.h
 *
 *  Created on: Mar 24, 2020
 *      Author: andre
 */

#include <vector>
#include <list>
#include <iostream>
#ifndef BODY_H_
#define BODY_H_


class Body {
private:
	float mass;
	std::vector<float> pos = std::vector<float>(3);
	std::vector<float> vel = std::vector<float>(3);

public:
	long long int getID();
	void setposition(float x, float y, float z);
	void setvelocities(float vx, float vy, float vz);
	void setmass(float mass);
	void printmass();
	void printpositions();
	void printvelocities();
	std::vector<float> getposition();
	std::vector<float> getvelocities();
	float getmass();
	Body();
	Body(float mass, float x, float y, float z);
	virtual ~Body();
};

#endif /* BODY_H_ */
