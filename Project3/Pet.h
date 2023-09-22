#pragma once
#include <iostream>
#include <sstream>
class Pet
{
protected:
	std::string view;
	std::string nickname;
	std::string breed;
	std::string color;
public:
	
	std::string display();

};

