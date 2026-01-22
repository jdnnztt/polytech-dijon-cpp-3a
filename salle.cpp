#include "salle.h"
Salle::Salle(std::string nom) : nom_(nom) {}

std::string Salle::getnom() const
{
	return nom_;
}