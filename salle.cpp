#include "salle.h"
Salle::Salle(std::string nom) : nom_(nom) {}

std::string Salle::getnom() const
{
	return nom_;
}

std::ostream& operator<<(std::ostream& os, const Salle& sa)
{
	os << sa.getnom();
	return os;
}