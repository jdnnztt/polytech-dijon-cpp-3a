#ifndef ARTISTE_H
#define ARTISTE_H
#include <iostream>
#include <vector>
class Artiste
{
public:
	Artiste(std::string nom, std::string specialite);
	std::string getnom() const;
	std::vector <std::string> getspecialite() const;
	void addspecialite(std::string spe);
private:
	std::string nom_;
	std::string specialite_;
	std::vector <std::string> liste_specialite;
};
#endif

