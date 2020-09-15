//Auteur: Aymen El-faid
//FR : But: Programme qui sépare chaque chiffre d'un nombre de cinque chiffres et les imprime a l'écran verticalement
//Date: 9 Septembre 2020


#include <iostream>

int main()
{
	int nombre; //On déclare la variable dans laquelle on stockera la reponse de l'utilisateur
	int nb1, nb2, nb3, nb4, nb5; //On déclare les 5 variables dans lesquelles on stockera chacun des chiffres séparés du nombre

	std::cout << "Veuillez entrer un nombre a 5 chiffres: ";
	std::cin >> nombre;

	if (100000 > nombre && nombre>9999) //On verifie bien que le nombre soumis est compris entre 9999 et 100000 c'est a dire un nombre a 5 chiffres
	{
		nb5 = (nombre / 1)%10;
		nb4 = (nombre / 10)%10;
		nb3 = (nombre / 100)%10;
		nb2 = (nombre / 1000)%10;
		nb1 = (nombre / 10000)%10;
		
	
		
		


		std::cout << nb1 << std::endl << nb2 << std::endl << nb3 << std::endl << nb4 << std::endl << nb5<<std::endl; //On imprime chaque chiffre a l'écran suivi d'un endl.
		system("pause");//Je mets un system("pause") seulement car mon visual studio ferme la fenêtre immediatement apres l'impression de la réponse et ne me laisse pas le temps de lire ma reponse
	}
	else
	{

		std::cout << "Ce nombre ne contient pas 5 chiffres!\n"; //On informe l'utilisateur que le nombre soumis ne contient pas 5 chiffres
		system("pause");
		return 0;
	}


}
/*
TESTS:
56: "Ce nombre ne contient pas 5 chiffres!"
123456: "Ce nombre ne contient pas 5 chiffres!
0: "Ce nombre ne contient pas 5 chiffres!


12345:
1
2
3
4
5


54321:
5
4
3
2
1
*/
