#include "../entete.hpp"

Tv::Tv(string nom, string marque, float prixU, float puiss, float taille):Electromenager(nom, marque, prixU, puiss){
    this->taille = taille;
}

Tv::Tv(){
    this->taille=0;
    this->nombre=0;
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

int Tv::getNombre(){
    return this->nombre;
}

void Tv::setNombre(int new_nb){
    this->nombre  =new_nb;
}

Tv& Tv::operator=(const Tv &tv){
    Electromenager::operator=(tv);
    this->taille = tv.taille;
    return *this;
}

void Tv::afficher(){
    cout<<"======================"<<endl<<"Nom : " <<this->getNom()<<endl<<"Marque : "<<this->getMarque()<<endl<<"PrixU : "<<this->getPrixUnitaire()<<endl<<"Taille : "<<this->taille<<endl;
}

void Tv::remplir(){
    Electromenager::remplir();
    cout<<endl<<"Taille : ";
    cin>>this->taille;
    cout<<"Quantite : ";
    cin>>this->nombre;
}