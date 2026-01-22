#include "musee.h"
Musee::Musee(std::string nom) : nom_(nom) {}

std::string Musee::getnom() const
{
	return nom_;
}

void Musee::newexpo(Expo expo)
{
	liste_expo.push_back(expo);
}

void Musee::newsalle(Salle salle)
{
	liste_salle.push_back(salle);
}

void Musee::newartiste(Artiste artiste)
{
	liste_artiste.push_back(artiste);
}

void Musee::newoeuvre(Oeuvre oeuvre)
{
	liste_oeuvre.push_back(oeuvre);
}

//Oeuvre Musee::findoeuvre(Oeuvre oeuvre)
//{
	
//	for (const auto o : liste_oeuvre)
//	{
//		if (o.getnom() == oeuvre.getnom())
//		{
//		;
//		}
//	}
//	return ;
//}

//void deleteoeuvre(Oeuvre oeuvre) {}