#ifndef GAME_H
#define GAME_H
#include "Player.h"
using namespace std;


class Game
{
    public:
        //Constructeurs

        Game(const Player& p1, const Player& p2);

        //Destructeur

        ~Game();

        //Accesseurs
       Player getPlayer1() const;
       Player getPlayer2() const;

       //Mutateurs

       void setPlayer1(const Player& newPlayer1);
       void setPlayer2(const Player& newPlayer2) ;

       // Autres méthodes

       string afficher_resultat() const;
       bool demanderRejouer();

    protected:

    private:
        Player player1;
        Player player2;
};

#endif // GAME_H
