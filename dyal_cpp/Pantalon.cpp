#include "../entete.hpp"
Pantalon::Pantalon(){
    this->longueur = 0;
    this->nombre = 0;
}
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

int Pantalon::getNombre(){
    return this->nombre;
}

void Pantalon::setNombre(int new_nb){
    this->nombre  =new_nb;
}

Pantalon& Pantalon::operator=(const Pantalon& p){
    Vestimentaire::operator=(p);
    this->longueur = p.longueur;
    return *this;
}

void Pantalon::afficher(){
    cout<<"======================"<<endl<<"Nom : " <<this->getNom()<<endl<<"Marque : "<<this->getMarque()<<endl<<"PrixU : "<<this->getPrixUnitaire()<<endl;
    cout<<endl<<"Quantite :";
    cout<<this->nombre<<endl;
    cout<<"LONGUEUR:" <<this->get_longueur()<<endl;

}

void Pantalon::remplir(){
    Vestimentaire::remplir();
    cout<<endl<<"Longueur: ";
    cin>>this->longueur;
    cout<<endl<<"Quantité: ";
    cin>>this->nombre;
}

Pantalon::~Pantalon(){

}