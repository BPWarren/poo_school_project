#include "../entete.hpp"

Tv::Tv(string nom, string marque, float prixU, float puiss, float taille):Electromenager(nom, marque, prixU, puiss){
    this->taille = taille;
}

Tv::Tv(const Tv &tv):Electromenager(tv){
    this->taille = taille;
}

Tv::~Tv(){};
void Tv::setTaille(float new_taille){
    this->taille = new_taille;
}

float Tv::getTaille(){
    return this->taille;
}

Tv& Tv::operator=(const Tv &tv){
}