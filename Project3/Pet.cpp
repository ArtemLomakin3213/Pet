#include "Pet.h"

std::string Pet::display()
{
	std::ostringstream otr;
	otr << "Nick: " << nickname << "\n"
		<< "Vive: " << view << "\n"
		<< "Breed: " << breed << "\n"
		<< "Color: " << color << "\n";
	return otr.str();
}
