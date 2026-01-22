#include "Artiste.h"
int main()
{
	Artiste fontaine("jean de la fontaine", "poeme");
	fontaine.getspecialite();
	std::cout << fontaine.getspecialite() << std::endl;
	return 0;
}