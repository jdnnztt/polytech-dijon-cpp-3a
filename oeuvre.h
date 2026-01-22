#ifndef OEUVRE_H
#define OEUVRE_H
#include "Artiste.h"
class Oeuvre
{
public: 
	Oeuvre(std::string nom, std::string type);
	std::string getnom() const;
	std::string gettype() const;
	friend std::ostream& operator<<(std::ostream& os, const Oeuvre& oe);
	friend std::ostream& operator<<(std::ostream& os, std::vector <Oeuvre>& oe);
	void setartiste(Artiste artiste);
private:
	Artiste artiste_;
	std::string nom_;
	std::string type_;
};
#endif

