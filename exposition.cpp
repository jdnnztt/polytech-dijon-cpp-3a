#include "exposition.h"
Expo::Expo(std::string nom, std::string date, std::vector <Oeuvre> liste_oeuvre, Salle salle) : nom_(nom), date_(date), liste_oeuvre_(liste_oeuvre), salle_(salle) {}

std::string Expo::getnom() const
{
	return nom_;
}

std::string Expo::getdate() const
{
	return date_;
}

std::vector <Oeuvre> Expo::getoeuvre() const
{
	return liste_oeuvre_;
}

Salle Expo::getsalle() const
{
	return salle_;
}