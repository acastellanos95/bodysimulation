//============================================================================
// Name        : NewtonSimulator.cpp
// Author      : andre
// Version     :
// Copyright   : 
// Description : single threaded body simulation
//============================================================================

#include <iostream>
#include "body.h"

int main() {
	body Venus(0.815f,0.1f,0.2f,0.3f);
	body VirtualBody;
	std::cout << Venus.getID() << std::endl;
	Venus.printmass();
	Venus.printpositions();
	Venus.printvelocities();
	return 0;
}
