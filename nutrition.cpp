/*
    @file nutrition.cpp
    @version 0.1
    @author Seivin Juh
    @last update 29/04/17

    BIENVENUE SUR LE PREMIER PROGRAMME C++ DE SEIVIN OUAISSSSSSSSSSSSSSSSSSSSSSSSSS

*/

#include "imc.h"
#include "unit_converter.h"
#include "energy_expenditure.h"

int main()
{
    double weight_kg, goal_weight_kg, height_cm, height_m, square_height_m, imc, energy_expenditure;
    int age, gender;
    cout << "Yop, quel est ton poids actuel?" << endl;
    cin >> weight_kg;
    cout << "Okay cool, et ta taille en cm ?" << endl;
    cin >> height_cm;

    height_m = convert_cm_to_m(height_cm);
    square_height_m = pow(height_m,2);
    imc = imc_calculator(weight_kg,square_height_m);

    cout << "Ok ton IMC est de " << imc << ", a priori tu es ";

if (imc <= 16.5)
  {
    cout << "assez maigre" << endl;
  }
else if (imc <= 18.5)
  {
      cout << "mince" << endl;
  }
else if (imc <= 25.5)
  {
      cout << "dans la moyenne" << endl;
  }
else
  {
      cout << "un peu en surpoids" << endl;
  }

    cout << "Garde en tete que lIMC c'est juste une indication pour savoir a peu pres ou tu te situes, fais pas le mec chaud si tes dans la moyenne ni le mec deprime si tu ne les pas." << endl;
    cout << "Parfait et quel est le poids que tu voudrais faire dans l'ideal ?" << endl;
    cin >> goal_weight_kg;
    cout << "Super donc recapitulons, tu fais " << weight_kg << " kg et tu voudrais faire " << goal_weight_kg << " kg." << endl;

if (weight_kg < goal_weight_kg)
    {
        int weight_difference;
        weight_difference = weight_kg - goal_weight_kg;
        cout << "Donc tu voudrais donc perdre " << weight_difference << " kg.";
    }
else if (weight_kg > goal_weight_kg)
    {
        int weight_difference;
        weight_difference = goal_weight_kg - weight_kg;
        cout << "Donc tu voudrais donc prendre " << weight_difference << " kg.";
    }
else
    {
        cout << "Donc tu ne veux ni prendre, ni perdre c'est cool ca! Donc tu n'as pas besoin de moi, bye :) ";
    }

/* CODE A CONTINUER PLUS TARD ICI
TEST D'UNE AUTRE FONCTIONNALITE (energy_expenditure) : */

    cout << "Ok si tu le veux bien on va calculer ensemble tes depenses caloriques journalieres. Es-tu un mec ? (envoie 1 si oui, sinon 0)" << endl;
    cin >> gender;

if (gender = 1)
    {
        cout << "Bon tu es donc un mec, tu as quel age ?" << endl;
        cin >> age;
        energy_expenditure = male(age, weight_kg, height_cm);
        cout << "Au vu de ton age, poids et taille ton corps brule environ " << energy_expenditure << " kcal par jour." << endl;
    }
if (gender = 0)
    {
        cout << "Bon tu es donc une meuf, tu as quel age ?" << endl;
        cin >> age;
        energy_expenditure = female(age, weight_kg, height_cm);
        cout << "Au vu de ton age, poids et taille ton corps brule environ " << energy_expenditure << " kcal par jour." << endl;
    }

    return 0;
}
