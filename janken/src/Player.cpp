#include "../include/Player.h"
#include <iostream>

using namespace std;

//Constructeurs


Player::Player(const std::string& p_name, Choice c){

    name = p_name;
    choix = c;

}

        //Accesseurs

        std::string Player::getName() const{

            return name;
        }

        Choice Player::getChoix() const{

            return choix;

        }

        //Mutateurs

        void Player::setName(const std::string& newName){

            name = newName;

        }

        void Player::setChoix(Choice newChoix) {

            choix = newChoix;

        }

        // Autres méthodes

    std::string Player::afficher() const{

            std::string choixStr;
            switch(choix){
                case PIERRE :
                    choixStr = "PIERRE";
                    break;
                case PAPIER :
                    choixStr = "PAPIER";
                    break;

                case CISEAUX :
                    choixStr = "CISEAUX";
                    break;
                default:
                    choixStr = "INCONNU";
                    break;



            }

            return "Le joueur " + name + " a opté pour l'action " + choixStr + "." ;

        }


//Fonction pour demander le choix du joueur

 Choice Player::demanderChoix(){
    int choix_joueur;
    cout << "Choisissez votre action :\n";
    cout << "1 - PIERRE\n2 - PAPIER\n3 - CISEAUX\nVotre choix : ";
    cin >> choix_joueur;

    while (choix_joueur < 1 || choix_joueur > 3) {
        cout << "Choix invalide. Réessayez : ";
        cin >> choix_joueur;
    }

    return static_cast<Choice>(choix_joueur);
}




Player::~Player()
{
    cout<<"Le joueur " << name << " est détruit"  <<endl;
}

