/*
    @file imc.h
    @version 0.1
    @author Seivin Juh
    @last update 29/04/17

*/

/*

    @imc calculator

*/

#ifndef IMC_H_INCLUDED
#define IMC_H_INCLUDED

#include <iostream>
#include <cmath>

using namespace std;

double imc_calculator(double weight_kg, double height_m) // CALCULATEUR DE L'IMC (APRES CALCUL DE LA TAILLE EN M AU CARRE)
{
    double imc;
    imc = weight_kg/height_m;
    return imc;
}

#endif // IMC_H_INCLUDED
