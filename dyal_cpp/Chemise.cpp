#include "../entete.hpp"

Chemise::Chemise(string nom , string marque , float prixUnitaire , string taille, string couleur, bool manche):Vestimentaire::Vestimentaire(nom , marque , prixUnitaire, taille , couleur){
    this->manche = manche;
}

Chemise::Chemise(const Chemise& c):Vestimentaire::Vestimentaire(c){
    this->manche = c.manche;
}

bool Chemise::get_manche(){
    return this->manche;
}

void Chemise::set_manche(float new_manche){
    this->manche = new_manche;
}

Chemise& Chemise::operator=(const Chemise& c){
    Vestimentaire::operator=(c);
    this->manche = c.manche;
    return *this;
}

int Chemise::getNombre(){
    return this->nombre;
}

void Chemise::setNombre(int new_nb){
    this->nombre  =new_nb;
}

void Chemise::afficher(){
    cout<<boolalpha<<"======================"<<endl<<"Nom : " <<this->getNom()<<endl<<"Marque : "<<this->getMarque()<<endl<<"PrixU : "<<this->getPrixUnitaire()<<endl<<"MANCHE:" <<this->get_manche()<<endl;

}

Chemise::~Chemise(){

}