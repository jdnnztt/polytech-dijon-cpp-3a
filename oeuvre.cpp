#include "oeuvre.h"
Oeuvre::Oeuvre(std::string nom, std::string type) : nom_(nom), type_(type) , artiste_ = {}

std::string Oeuvre::getnom() const
{
	return nom_;
}

std::string Oeuvre::gettype() const
{
	return type_;
}

std::ostream& operator<<(std::ostream& os, const Oeuvre& oe)
{
	os << oe.getnom() << " est une oeuvre de type " << oe.gettype() <<"." ;
	return os;
}

std::ostream& operator<<(std::ostream& os, std::vector <Oeuvre>& oe)
{
	for (const auto i : oe)
	{
		os << i;
	}
	return os;
}

void Oeuvre::setartiste(Artiste artiste)
{
	artiste_ = artiste;
}