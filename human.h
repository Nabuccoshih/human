#ifndef HUMAN_H
#define HUMAN_H

#include <string>

class Human
{
  private: /* Variables membres */
    std::string m_prenom;
    std::string m_nom;
    char m_sexe;
    const char genre(); /* sexe */
    int vieEnCours(); /* Horloge biologique */

  public:
    Human(); /* Construteur par défaut*/
    Human(std::string prenom, std::string nom); /* Construteur avec paramètres */
    Human(const Human &clone); /* Constructeur de copie */
    ~Human(); /* Destructeur */

    void whois(); /* présentation de l'humain */
    void setPrenom(const std::string prenom); /* Modification du prénom */
    void setNom(const std::string prenom); /* Modification du nom */

    char getGenre();
    int getDob();
    int getAge();
};

#endif

/* ---------------------------------- */
