#include "Artiste.h"
Artiste::Artiste(std::string nom, std::string specialite) : nom_(nom), specialite_(specialite)
{
	liste_specialite.push_back(specialite);
}

std::string Artiste::getnom() const
{
	return nom_;
}

std::vector <std::string> Artiste::getspecialite() const
{
	return liste_specialite;
}

void Artiste::addspecialite(std::string spe)
{
	liste_specialite.push_back(spe);
}

std::ostream& operator<<(std::ostream& os, const std::vector <std::string>& v)
{
	for (const auto spe : v)
	{
		os << spe;
	}
	return os;
}