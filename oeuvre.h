#ifndef OEUVRE_H
#define OEUVRE_H
#include "Artiste.h"
class Oeuvre
{
public: 
	Oeuvre(std::string nom, std::string type);
	std::string getnom() const;
	std::string gettype() const;
private:
	std::string nom_;
	std::string type_;
};
#endif

