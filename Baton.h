#ifndef BATON_H
#define BATON_H

#include <string>
#include "Sort.h"
#include "Utilitaire.h"

class Baton {
public:
    Baton();
    ~Baton();

    std::string getNomSort();

    std::string AfficherNomBaton();

    Sort* getSortAttaque() { return m_sortAttaque; }
    Sort* getSortDefense() { return m_sortDefense; }

private:
    Sort* m_sortAttaque;
    Sort* m_sortDefense;
    std::string m_nomSort;
};

#endif // BATON_H
