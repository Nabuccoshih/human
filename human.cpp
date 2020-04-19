#include <iostream>
#include <ctime>
#include <string>
#include "human.h"
#include "tools.h"

char m_sexe = 'n';
int m_age = 0;
const int m_dobSec = tools::secSinceEpoch();
const int m_ageMax = tools::nbAleaInt(108);

/* Méthode privéés */
const char Human::genre()
{
  int nbAlea = tools::nbAleaInt(333);

  if(nbAlea % 2 == 0){
    return m_sexe = 'f';
  } else {
    return m_sexe = 'm';
  }
}

int Human::vieEnCours()
{
  int m_ageMaxSec = ((3600 * 24) * m_ageMax);
  int m_derSecVie = m_dobSec + m_ageMaxSec;
  m_age = (long int)tools::secSinceEpoch - m_dobSec;

  do 
    {
      /**/
    } while ((long int)tools::secSinceEpoch < m_derSecVie);

  return m_age;
}

/* Méthode publiques */
Human::Human() : m_prenom("Prénom"), m_nom("Nom") { genre(); vieEnCours(); }

Human::Human(std::string prenom, std::string nom) : m_prenom(prenom), m_nom(nom) {}

Human::Human(const Human &clone) : m_prenom(clone.m_prenom), m_nom(clone.m_nom) {}

Human::~Human() { std::cout << "L'instance " << this << " est terminée." << std::endl; }

void Human::whois()
{
  std::cout << "Je m'appelle " << m_prenom << " " << m_nom << ", j'ai " << m_age << " ans." << std::endl
          << "(Adresse : " << this << ")" << std::endl
          << "----------------------------------------------------------" << std::endl;
}

void Human::setPrenom(const std::string prenom)
{
  m_prenom = prenom;
}

void Human::setNom(const std::string nom)
{
  m_nom = nom;
}

char Human::getGenre()
{
  return m_sexe; 
}

int Human::getDob()
{
  return m_dobSec; 
}

int Human::getAge()
{
  return m_age; 
}

/* ---------------------------------- */
