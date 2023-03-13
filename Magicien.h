#ifndef MAGICIEN_H
#define MAGICIEN_H

#include <string>
#include "Baton.h"

class Magicien
{
public:
    // Constructeur
    Magicien(std::string nom);

    // Destructeur
    ~Magicien();

    // Accesseurs
    std::string getNom();
    Baton* getBaton();

    // Mutateurs
    void setNom(std::string nom);
    void setBaton(Baton* baton);

    // Méthodes
    void afficherDetails();
    void attaquer(Magicien* ennemi);
    void defendre(int puissance);

private:
    std::string m_nom;
    Baton* m_baton;
};

#endif // MAGICIEN_H
