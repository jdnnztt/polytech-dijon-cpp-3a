#ifndef SALLE_H
#define SALLE_H
#include <iostream>
class Salle
{
public:
	Salle(std::string nom);
	std::string getnom() const;
private:
	std::string nom_;
};
#endif

