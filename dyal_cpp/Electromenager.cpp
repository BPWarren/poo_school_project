#include "../entete.hpp"
Electromenager::Electromenager(string nom, string marque, float prixUnitaire, float puissance):Article(nom, marque, prixUnitaire){
    this->puissance = puissance;
}

