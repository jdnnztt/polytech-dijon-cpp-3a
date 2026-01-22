#include "oeuvre.h"
Oeuvre::Oeuvre(std::string nom, std::string type) : nom_(nom), type_(type) {}

std::string Oeuvre::getnom() const
{
	return nom_;
}

std::string Oeuvre::gettype() const
{
	return type_;
}
