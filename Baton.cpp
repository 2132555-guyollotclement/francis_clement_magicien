#include "Baton.h"
#include "Utilitaire.h"

Baton::Baton()
{
    int randAtt = Utilitaire::genererNombreAleatoire();
    int randDef = Utilitaire::genererNombreAleatoire();

    if (randAtt == 0)
    {
        m_sortAttaque = new Sort("Incinérateur", 10, true);
    }
    else
    {
        m_sortAttaque = new Sort("Foudre", 15, true);
    }

    if (randDef == 0)
    {
        m_sortDefense = new Sort("Guérison", -10, false);
    }
    else
    {
        m_sortDefense = new Sort("Protection", -5, false);
    }

    m_nomSort = m_sortAttaque->getNom() + " de " + m_sortDefense->getNom();
}

Baton::~Baton()
{
    delete m_sortAttaque;
    delete m_sortDefense;
}

Sort* Baton::getSortAttaque()
{
    return m_sortAttaque;
}

Sort* Baton::getSortDefense()
{
    return m_sortDefense;
}

std::string Baton::getNomSort()
{
    return m_nomSort;
}
