#include <iostream>
#include "include/Game.h"

using namespace std;

int main()
{
    string nom_joueur1;
    string nom_joueur2;
    bool rejouer;

    cout << "Bienvenue dans le jeu de PIERRE-PAPIER-CISEAUX" << endl;
    do{
        cout << "Entrez votre nom, joueur1 : ";
        cin >> nom_joueur1;

        cout << "Entrez votre nom, joueur2 : ";
        cin >> nom_joueur2;

        // Créer les joueurs avec PIERRE par défaut (valeur temporaire valide)
        Player joueur1(nom_joueur1, PIERRE);
        Player joueur2(nom_joueur2, PIERRE);

        // Demander les choix
        cout << "\n" << nom_joueur1 << " :\n";
        joueur1.setChoix(joueur1.demanderChoix());

        cout << "\n" << nom_joueur2 << " :\n";
        joueur2.setChoix(joueur2.demanderChoix());

        // Créer le jeu
        Game partie(joueur1, joueur2);

        // Afficher le résultat
        cout << "\n=== RESULTAT ===" << endl;
        cout << partie.afficher_resultat() << endl;



        rejouer = partie.demanderRejouer();

        }while (rejouer);


    cout << "\nMerci d'avoir joué ! À bientôt ! 👋" << endl;

    return 0;
}
