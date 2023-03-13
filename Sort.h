#pragma once

#include <string>

using namespace std;

class Sort
{
private: 
	string m_nom{};
    bool m_SortAttaque; // sort d'attaque ou de defense
    int m_dommage;
    
public:
    /*
    * Constructeur Sort
    */
    Sort(string nom, int dommage, bool SortAttaque);

    string getNom();

    int getDommage();

    bool estSortAttaque();
};

