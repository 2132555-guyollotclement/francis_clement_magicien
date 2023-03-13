#include <cstdlib>
#include <ctime>

namespace Utilitaire {

    /*
    * Initialise le g�n�rateur de nombres al�atoires(se fait de mani�re automatique)
    */ 
    void initialiserRandom() {
        std::srand(static_cast<unsigned int>(std::time(nullptr)));
    }

    /* 
    * G�n�re un nombre al�atoire entre 0 et 1 inclus
    */
    int genererNombreAleatoire() {
        return rand() % 2;
    }

    /*
    static int genererNombreAleatoire(int min, int max) {
        return std::rand() % (max - min + 1) + min;
    }
    */
};