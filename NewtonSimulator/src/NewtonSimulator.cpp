//============================================================================
// Name        : NewtonSimulator.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <fstream>
#include "Body.h"
#include "Verlet.h"
#include "Units.h"

int main(){
	std::string line;
	std::ifstream myfile("/home/andre/Youtube/bodysimulation/NewtonSimulator/src/input.txt", std::ios::in);
	if(myfile.is_open()){
		while(std::getline(myfile,line)){
			std::cout << line << "\n";
	    }
	    myfile.close();
	}
	return 0;
}
