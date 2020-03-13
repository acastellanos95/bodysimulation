/*
 * body.cpp
 *
 *  Created on: Mar 12, 2020
 *      Author: andre
 */

#include "body.h"

static long long int bodyid=0;

body::body() {
	// TODO Auto-generated constructor stub
	mass = 0.0f;
	pos = std::vector<float>{0.0f,0.0f, 0.0f};
	vel = std::vector<float>{0.0f,0.0f, 0.0f};
	id=++bodyid;
}

body::body(float mass, float x, float y, float z) {
	// TODO Auto-generated constructor stub
	this->mass = mass;
	this->pos = std::vector<float>{x, y, z};
	id=++bodyid;
}

long long int body::getID(){
	return this->id;
}
void body::setmass(float mass){
	this->mass = mass;
}
void body::setposition(float x, float y, float z){
	this->pos = std::vector<float>{x, y, z};
}
void body::setvelocities(float vx, float vy, float vz){
	this->vel = std::vector<float>{vx, vy, vz};
}
std::vector<float> body::getposition(){
	return this->pos;
}
std::vector<float> body::getvelocities(){
	return this->vel;
}
float body::getmass(){
	return this->mass;
}
void body::printmass(){
	std::cout << "mass of body: " << this->mass << " M⊕"<< std::endl;
}
void body::printpositions(){
	std::cout << "x: " << this->pos.at(0) << std::endl;
	std::cout << "y: " << this->pos.at(1) << std::endl;
	std::cout << "z: " << this->pos.at(2) << std::endl;
}
void body::printvelocities(){
	std::cout << "Vx: " << this->vel.at(0) << std::endl;
	std::cout << "Vy: " << this->vel.at(1) << std::endl;
	std::cout << "Vz: " << this->vel.at(2) << std::endl;
}
body::~body() {
	// TODO Auto-generated destructor stub
}
