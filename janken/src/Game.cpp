#include "../include/Game.h"
#include <iostream> // pour cout

using namespace std;

// Constructeur
Game::Game(const Player& p1, const Player& p2) : player1(p1), player2(p2) {}

// Destructeur
Game::~Game() {
    cout << "Le jeu a été détruit" << endl;
}

// Accesseurs
Player Game::getPlayer1() const {
    return player1; //  retourne l'objet Player
}

Player Game::getPlayer2() const {
    return player2;
}

// Mutateurs
void Game::setPlayer1(const Player& newPlayer1) {
    player1 = newPlayer1;
}

void Game::setPlayer2(const Player& newPlayer2) {
    player2 = newPlayer2;
}

// Méthode afficher_resultat
string Game::afficher_resultat() const {
    Choice c1 = player1.getChoix(); //  appel correct
    Choice c2 = player2.getChoix();

    if (c1 == c2) {
        return "Égalité";
    }
    else if ((c1 == PAPIER && c2 == PIERRE) ||
             (c1 == CISEAUX && c2 == PAPIER) ||
             (c1 == PIERRE && c2 == CISEAUX)) {
        return player1.getName() + " a gagné contre " + player2.getName();
    }
    else {
        return player2.getName() + " a gagné contre " + player1.getName();
    }
}


bool Game::demanderRejouer() {
    char reponse;
    do {
        cout << "\n\nVoulez-vous rejouer ? (o/n) : ";
        cin >> reponse;

        if (reponse != 'o' && reponse != 'O' && reponse != 'n' && reponse != 'N') {
            cout << "Réponse invalide ! ";
        }

    } while (reponse != 'o' && reponse != 'O' && reponse != 'n' && reponse != 'N');

    return (reponse == 'o' || reponse == 'O');
}
