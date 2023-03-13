#include <iostream>
#include "Magicien.h"
#include "Utilitaire.h"

Magicien::Magicien(std::string nom)
{
    m_nom = nom;
    m_baton = new Baton();
}

Magicien::~Magicien()
{
    delete m_baton;
}

std::string Magicien::getNom()
{
    return m_nom;
}


Baton* Magicien::getBaton()
{
    return m_baton;
}

void Magicien::setNom(std::string nom)
{
    m_nom = nom;
}


void Magicien::setBaton(Baton* baton)
{
    m_baton = baton;
}

void Magicien::afficherDetails()
{
    std::cout << "Nom: " << m_nom << std::endl;
    std::cout << "Baton: " << m_baton->AfficherNomBaton() << std::endl;
}

void Magicien::attaquer(Magicien* ennemi)
{
    // Calcul de la puissance de l'attaque
    int puissance = m_baton->getSortAttaque()->getPuissance();
    std::cout << m_nom << " lance " << m_baton->getSortAttaque()->getNom() << " sur " << ennemi->getNom() << " !" << std::endl;

    // L'ennemi d�fend
    ennemi->defendre(puissance);
}

void Magicien::defendre(int puissance)
{
    // Calcul de la puissance de la d�fense
    int defense = m_baton->getSortDefense()->getPuissance();
    std::cout << m_nom << " se prot�ge avec " << m_baton->getSortDefense()->getNom() << " !" << std::endl;

    // Calcul des d�g�ts subis
    int degats = puissance - defense;

    if (degats < 0)
    {
        std::cout << m_nom << " r�siste � l'attaque !" << std::endl;
    }
    else
    {
        std::cout << m_nom << " subit " << degats << " d�g�ts !" << std::endl;
    }
}
