//Auteur: Aymen El-faid 
//But: Détermine si un nombre donne est pair ou impair
//Date: 9 Septembre 2020



#include <iostream>
// KM : Pourquoi string comme librairie ??
#include <string>

int main()
{
	int nombre;
	std::cout << "Veuillez entrer un nombre: ";
	std::cin >> nombre;
	// KM : Manque de commentaires
	if (nombre % 2 == 1)
	{
		std::cout << nombre << " est un nombre impair" << std::endl;
	}
	else
	{
		std::cout << nombre << " est un nombre pair" << std::endl;
	}
	system("pause");
	return 0;
}
/*TESTS
// KM : Il manquerait des nombres négatifs et 0
56: "Ce nombre est pair"
12: "Ce nombre est pair"
5: "Ce nombre est impair"
125414: "Ce nombre est impair"
*/
std::string lul;
