#include "../entete.hpp"

Pantalon::Pantalon(string nom , string marque , float prixUnitaire , string taille, string couleur, float longueur):Vestimentaire::Vestimentaire(nom , marque , prixUnitaire, taille , couleur){
    this->longueur = longueur;
}

Pantalon::Pantalon(const Pantalon& p):Vestimentaire::Vestimentaire(p){
    this->longueur = p.longueur;
}

float Pantalon::get_longueur(){
    return this->longueur;
}

void Pantalon::set_longueur(float new_longueur){
    this->longueur = new_longueur;
}

Pantalon& Pantalon::operator=(const Pantalon& p){
    Vestimentaire::operator=(p);
    this->longueur = p.longueur;
    return *this;
}

void Pantalon::afficher(){
    cout<<"======================"<<endl<<"Nom : " <<this->getNom()<<endl<<"Marque : "<<this->getMarque()<<endl<<"PrixU : "<<this->getPrixUnitaire()<<endl<<"LONGUEUR:" <<this->get_longueur()<<endl;

}

Pantalon::~Pantalon(){

}