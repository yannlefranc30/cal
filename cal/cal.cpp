// cal.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.
//

#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int month, year;
    int first_day, ndays;
    cout << "enter the year";
    cin >> year;
    cout << endl;

    cout << "enter month :";
    cin >> month;
    cout << endl;

    cout << "enter the last day of the year(1 for sunday, 2for monday,etc";
    cin >>first_day;

    switch (month) {

    case 2:
        if ((year % 400 == 0) || (year % 4 == 0 && year % 100 != 0)) {
            ndays = 29;

        }
        else

            ndays = 28;
       
        break;


    case 4:
    case 6:
    case 9:
        case 11:
            ndays = 30;
         break;


        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:
             ndays = 31;
             break;



    }


cout <<endl<<"sun\tTue\tmon\twed\tthu\tFri\tSat\n";
for (int i = 1; i < first_day; i++) {

    cout << "\t";
}
for (int j =  1; j <= ndays; j++) {
    if ((j + first_day - 2) % 7 == 0&& j != 1)
    cout << endl;
    cout << j << "\t";
    
}
cout << endl << endl;
return 0;


}

// Exécuter le programme : Ctrl+F5 ou menu Déboguer > Exécuter sans débogage
// Déboguer le programme : F5 ou menu Déboguer > Démarrer le débogage

// Astuces pour bien démarrer : 
//   1. Utilisez la fenêtre Explorateur de solutions pour ajouter des fichiers et les gérer.
//   2. Utilisez la fenêtre Team Explorer pour vous connecter au contrôle de code source.
//   3. Utilisez la fenêtre Sortie pour voir la sortie de la génération et d'autres messages.
//   4. Utilisez la fenêtre Liste d'erreurs pour voir les erreurs.
//   5. Accédez à Projet > Ajouter un nouvel élément pour créer des fichiers de code, ou à Projet > Ajouter un élément existant pour ajouter des fichiers de code existants au projet.
//   6. Pour rouvrir ce projet plus tard, accédez à Fichier > Ouvrir > Projet et sélectionnez le fichier .sln.
