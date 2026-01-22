#include "musee.h"
Musee::Musee(std::string nom) : nom_(nom) {}

std::string Musee::getnom() const
{
	return nom_;
}