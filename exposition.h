#ifndef EXPOSITION_H
#define EXPOSITION_H
#include "salle.h"
#include "oeuvre.h"
class Expo
{
public:
	Expo(std::string nom, std::string date, std::vector <Oeuvre> liste_oeuvre, Salle salle);
	std::string getnom() const;
	std::string getdate() const;
	std::vector <Oeuvre> getoeuvre() const;
	Salle getsalle() const;
private:
	std::string nom_;
	std::string date_;
	std::vector < Oeuvre> liste_oeuvre_;
	Salle salle_;
};
#endif
