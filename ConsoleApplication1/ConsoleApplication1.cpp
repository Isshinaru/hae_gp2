// ConsoleApplication1.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.
//
#include "pch.h"
#include <iostream>
#include <string>
#include "Header.hpp"
#include "Vect2T.hpp"
#include "Arr.hpp"
using namespace std;
void SubFctio() {
	Arr<int>*foo = new Arr<int>(4);
	cout << foo->Get(1) << endl;
	foo->Set(2, 1000);
	cout << foo->Get(2) << endl;
}
int main()
{
	/*Vect2 v1(1, 2);
	Vect2 v2(20, 30);
	Vect2 v3 = v1.Add(v2);
	Vect2 v4 = v1.Sub(v2);
	Vect2 v5 = v1.Mul(v2);
	Vect2 v6 = v1.Div(v2);
	int tableau[] = { 0,1,2,3 };
	int szTab = sizeof(tableau) * sizeof(int);
	for (int i = 0; i < szTab; i++) {
		tableau[i] = i + 1;
	}*/
	//v1.incr(v1);
	//cout << to_string(v1.x);
	SubFctio();
}

// Exécuter le programme : Ctrl+F5 ou menu Déboguer > Exécuter sans débogage
// Déboguer le programme : F5 ou menu Déboguer > Démarrer le débogage

// Conseils pour bien démarrer : 
//   1. Utilisez la fenêtre Explorateur de solutions pour ajouter des fichiers et les gérer.
//   2. Utilisez la fenêtre Team Explorer pour vous connecter au contrôle de code source.
//   3. Utilisez la fenêtre Sortie pour voir la sortie de la génération et d'autres messages.
//   4. Utilisez la fenêtre Liste d'erreurs pour voir les erreurs.
//   5. Accédez à Projet > Ajouter un nouvel élément pour créer des fichiers de code, ou à Projet > Ajouter un élément existant pour ajouter des fichiers de code existants au projet.
//   6. Pour rouvrir ce projet plus tard, accédez à Fichier > Ouvrir > Projet et sélectionnez le fichier .sln.
