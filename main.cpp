#include <iostream>
#include "human.h"

void new_human();

int main()
{
    std::cout << "+ + + + + + + + + + + +  H E L L O  H U M A N  L I F E  + + + + + + + + + + + + " << std::endl;

    int rq;

    do
        {
            std::cout << std::endl;
            std::cout << "- - - - - - - M E N U - - - - - - -" << std::endl;
            std::cout << std::endl;
            std::cout << "Tapez  1  pour Créer un individu" << std::endl;
            std::cout << "Tapez  2  pour Connaître son age" << std::endl;
            std::cout << "Tapez  3  pour Une présentation" << std::endl;
            std::cout << "Tapez  0  pour Quitter" << std::endl;
            std::cout << " - - - - - - - - - - - - - - - - - -" << std::endl;
            std::cout << "Choix : ";
            std::cin >> rq;

            switch(rq)
            {
                case 1 :
                new_human();
                break;
                case 2 :
                std::cout << "Action 02" << std::endl;
                break;
                case 3 :
                std::cout << "Action 03" << std::endl;
                break;
                case 0 :
                break;
                default:
                std::cout << "\t\t /!\\ Choix invalide /!\\" << std::endl;
                break;
            }
        } while (rq != 0);

    std::cout << "+ + + + + + + + + + + +  G O O D B Y E  H U M A N  L I F E  + + + + + + + + + + + + " << std::endl;

    return 0;
    
}

void new_human()
{
    Human h1{"Hélène", "DUTHEIL"};
    Human h2{};
    std::cout << h2.getGenre() << std::endl;
}

/* ---------------------------------- */