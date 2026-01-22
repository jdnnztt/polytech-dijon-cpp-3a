#ifndef MUSEE_H
#define MUSEE_H
#include "Artiste.h"
#include "oeuvre.h"
#include "salle.h"
#include "exposition.h"
class Musee
{
public:
	Musee(std::string nom);
	std::string getnom() const;
	void newexpo(Expo expo);
	void newsalle(Salle salle);
	void newartiste(Artiste artiste);
	void newoeuvre(Oeuvre oeuvre);
	Oeuvre findoeuvre(Oeuvre oeuvre);
	void deleteoeuvre(Oeuvre oeuvre);
private:
	std::string nom_;
	std::vector <Artiste> liste_artiste;
	std::vector <Oeuvre> liste_oeuvre;
	std::vector <Salle> liste_salle;
	std::vector <Expo> liste_expo;
};
#endif
