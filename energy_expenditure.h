/*
    @file energy_expenditure.h
    @version 0.1
    @author Seivin Juh
    @last update 29/04/17

*/

#ifndef ENERGY_EXPENDITURE_H_INCLUDED
#define ENERGY_EXPENDITURE_H_INCLUDED

#include <iostream>
#include <cmath>

using namespace std;

male(int age, double weight_kg, double height_cm) // Formule sur : http://www.scymed.com/en/smnxdg/health101/srcalx/sr35350.htm
{
    double male_energy_expenditure;
    male_energy_expenditure = 66 + (13.7 * weight_kg) + (5 * height_cm) - (6.8 * age);
    return male_energy_expenditure;
}

female(int age, double weight_kg, double height_cm) // Formule sur : http://www.scymed.com/en/smnxdg/health101/srcalx/sr35350.htm
{
    double female_energy_expenditure;
    female_energy_expenditure = 655 + (9.6 * weight_kg) + (1.8 * height_cm) - (4.7 * age);
    return female_energy_expenditure;
}

#endif // ENERGY_EXPENDITURE_H_INCLUDED
