#include <cstdlib>
#include <ctime>

namespace Utilitaire {

    /*
    * Initialise le générateur de nombres aléatoires(se fait de manière automatique)
    */ 
    void initialiserRandom() {
        std::srand(static_cast<unsigned int>(std::time(nullptr)));
    }

    /* 
    * Génère un nombre aléatoire entre 0 et 1 inclus
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