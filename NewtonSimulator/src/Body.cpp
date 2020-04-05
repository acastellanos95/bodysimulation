/*
 * Body.cpp
 *
 *  Created on: Mar 24, 2020
 *      Author: andre
 */

#include "Body.h"

Body::Body() {
	// TODO Auto-generated constructor stub
	mass = 0.0f;
	pos = std::vector<float>{0.0f,0.0f, 0.0f};
	vel = std::vector<float>{0.0f,0.0f, 0.0f};
}

Body::Body(float mass, float x, float y, float z) {
	// TODO Auto-generated constructor stub
	this->mass = mass;
	this->pos = std::vector<float>{x, y, z};
}

void Body::setmass(float mass){
	this->mass = mass;
}
void Body::setposition(float x, float y, float z){
	this->pos = std::vector<float>{x, y, z};
}
void Body::setvelocities(float vx, float vy, float vz){
	this->vel = std::vector<float>{vx, vy, vz};
}
std::vector<float> Body::getposition(){
	return this->pos;
}
std::vector<float> Body::getvelocities(){
	return this->vel;
}
float Body::getmass(){
	return this->mass;
}
void Body::printmass(){
	std::cout << "mass of body: " << this->mass << " M⊕"<< std::endl;
}
void Body::printpositions(){
	std::cout << "x: " << this->pos.at(0) << std::endl;
	std::cout << "y: " << this->pos.at(1) << std::endl;
	std::cout << "z: " << this->pos.at(2) << std::endl;
}
void Body::printvelocities(){
	std::cout << "Vx: " << this->vel.at(0) << std::endl;
	std::cout << "Vy: " << this->vel.at(1) << std::endl;
	std::cout << "Vz: " << this->vel.at(2) << std::endl;
}
Body::~Body() {
	// TODO Auto-generated destructor stub
}
