#include "../entete.hpp"
Electromenager::Electromenager(string nom, string marque, float prixUnitaire, float puissance):Article(nom, marque, prixUnitaire){
    this->puissance = puissance;
}

// Constructeur de copie
Electromenager::Electromenager(const Electromenager & e): Article::Article(e){
    this->puissance = e.puissance;
}

//Destructeur
Electromenager::~Electromenager(){
    
}
// Accesseurs

float Electromenager::getPuissance(){
    return this->puissance;
}

void Electromenager::setPuissance(float new_puissance){
    this->puissance = new_puissance;
}

//Operateur d'affectation

void Electromenager::operator=(const Electromenager& e){
    Article::operator=(e);
    this->puissance = e.puissance;
}