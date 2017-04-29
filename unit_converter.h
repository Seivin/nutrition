/*
    @file unit_converter.h
    @version 0.1
    @author Seivin Juh
    @last update 29/04/17

*/

/*

    @functions included:

        @m/cm*
        @kg/lbs*
        @m/ft*
        @macro/kcal

            * = reverse function included

*/

#ifndef UNIT_CONVERTER_H_INCLUDED
#define UNIT_CONVERTER_H_INCLUDED

#include <iostream>

using namespace std;

double convert_cm_to_m(double height_cm) // CONVERTISSEUR CM EN M
{
    double height_m;
    height_m = height_cm/100;
    return height_m;
}

double convert_m_to_cm(double height_m) // CONVERTISSEUR M EN CM
{
    double height_cm;
    height_cm = height_m*100;
    return height_cm;
}

double convert_kg_to_lbs(double weight_kg) // CONVERTISSEUR KG TO LBS
{
    double weight_lbs;
    weight_lbs = weight_kg / 0.45359237;
    return weight_lbs;
}

double convert_lbs_to_kg(double weight_lbs) // CONVERTISSEUR LBS TO KG
{
    double weight_kg;
    weight_kg = weight_lbs * 0.45359237;
    return weight_kg;
}

double convert_m_to_ft(double height_m) // CONVERTISSEUR M TO FT
{
    double height_ft;
    height_ft = height_m / 0.3048;
    return height_ft;
}

double convert_ft_to_m(double height_ft) // CONVERTISSEUR FT TO M
{
    double height_m;
    height_m = height_ft * 0.3048;
    return height_m;
}

int convert_macro_to_kcal(int carb, int prot, int fat) // CONVERTISSEUR MACRO TO KCAL
{
    int kcal;
    kcal = (carb*4) + (prot*4) + (fat*9);
    return kcal;
}

#endif // UNIT_CONVERTER_H_INCLUDED
