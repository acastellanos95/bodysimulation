/*
 * body.h
 *
 *  Created on: Mar 12, 2020
 *      Author: andre
 */
#include <vector>
#include <iostream>
#ifndef BODY_H_
#define BODY_H_


class body {
private:
	float mass;
	std::vector<float> pos = std::vector<float>(3);
	std::vector<float> vel = std::vector<float>(3);
	long long int id;

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
	body();
	body(float mass, float x, float y, float z);
	virtual ~body();
};

#endif /* BODY_H_ */
