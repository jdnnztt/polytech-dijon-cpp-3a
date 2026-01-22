#ifndef SALLE_H
#define SALLE_H
#include <iostream>
class Salle
{
public:
	Salle(std::string nom);
	std::string getnom() const;
	friend std::ostream& operator<<(std::ostream& os, const Salle& sa);
private:
	std::string nom_;
};
#endif

