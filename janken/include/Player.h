#ifndef PLAYER_H
#define PLAYER_H
#include <string>
using namespace std;

enum Choice {
    PIERRE = 1,
    PAPIER = 2,
    CISEAUX = 3
};


class Player
{
    public:
        //Constructeurs


        Player(const string& p_name, Choice c);

        //Destructeurs

        ~Player();

        //Accesseurs

        string getName() const;
        Choice getChoix() const;

        //Mutateurs

        void setName(const string& newName);
        void setChoix(Choice newChoix);

        // Autres méthodes

        string afficher() const;
        Choice demanderChoix() ;

    protected:

    private:
        string name;
        Choice choix;
};

#endif // PLAYER_H
