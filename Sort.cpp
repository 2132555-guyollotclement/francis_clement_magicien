#include "Sort.h"

Sort::Sort(string nom, int dommage, bool SortAttaque)
{
    m_nom = nom;
    m_dommage = dommage;
    m_SortAttaque = SortAttaque;
}

string Sort::getNom()
{
    return m_nom;
}

int Sort::getDommage()
{
    return m_dommage;
}

bool Sort::estSortAttaque()
{
    return m_SortAttaque;
}
