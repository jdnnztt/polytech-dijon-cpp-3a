#include "Artiste.h"
int main()
{
	Artiste fontaine("jean de la fontaine", "poeme");
	std::cout << fontaine.getnom() << " est un artiste et sa specialite est : " << fontaine.getspecialite() << std::endl;
	return 0;
}