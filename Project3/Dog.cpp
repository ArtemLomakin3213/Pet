#include "Dog.h"

Dog::Dog(std::string nickname, std::string breed, std::string color)
{
	this->view = "Dog";
	this->nickname = nickname;
	this->breed = breed;
	this->color = color;
}
