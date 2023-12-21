#include "../entete.hpp"

// Constructeurs
Vestimentaire::Vestimentaire(){
    this->taille = "NONE";
    this->couleur = "NONE";
}

Vestimentaire::Vestimentaire(string nom , string marque , float prixUnitaire , string taille, string couleur):Article::Article(nom , marque, prixUnitaire){
    this->taille = taille;
    this->couleur = couleur;
}
Vestimentaire::Vestimentaire(const Vestimentaire& v):Article::Article(v){
    this->taille = v.taille;
    this->couleur = v.couleur;
}

//Destructeur
Vestimentaire::~Vestimentaire(){

}

// Accesseurs
string Vestimentaire::get_taille(){
    return this->taille;
}
string Vestimentaire::get_couleur(){
    return this->couleur;
}
void Vestimentaire::set_taille(string new_taille){
    this->taille = new_taille;
}
void Vestimentaire::set_couleur(string new_couleur){
    this->couleur = new_couleur;
}
// Operateur d'affectation
Vestimentaire& Vestimentaire::operator=(const Vestimentaire& v ){
    Article::operator=(v);
    this->taille = v.taille;
    this->couleur = v.couleur;
    return *this;
}

void Vestimentaire::remplir(){
    Article::remplir();
    cout<<endl<<"Taille : ";
    cin>>this->taille;
    cout<<endl<<"Couleur : ";
    cin>>this->couleur;
}

