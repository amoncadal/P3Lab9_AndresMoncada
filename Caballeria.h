#ifndef CABALLERIA_H
#define CABALLERIA_H

#include "Tropa.h"

class Caballeria:public Tropa{
    public:
        Caballeria();

        double ataque();

        ~Caballeria();
};
#endif