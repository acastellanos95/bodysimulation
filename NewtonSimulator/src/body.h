/*
 * body.h
 *
 *  Created on: Mar 7, 2020
 *      Author: andre
 */

#ifndef BODY_H_
#define BODY_H_

#include<array>
#include<vector>
class body {
private:
	float mass;
	std::vector<float> pos=std::vector<float>(3,0.0f);

public:
	body();
	virtual ~body();
};

#endif /* BODY_H_ */
