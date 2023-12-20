#include "../entete.hpp"

Lait::Lait(string nom, string marque, float prixU, Date date_exp, bool naturel):Alimentaire(nom, marque, prixU,date_exp){
    this->naturel = naturel;
    
}

Lait::Lait():Alimentaire(){
    this->nombre = 0;
    this->naturel=false;
}

Lait::~Lait(){};
Lait::Lait(const Lait &lait):Alimentaire(lait){
    this->naturel = lait.naturel;
}

bool Lait::getNaturel(){
    return this->naturel;
}

void Lait::setNaturel(bool new_naturel){
    this->naturel = new_naturel;
}

int Lait::getNombre(){
    return this->nombre;
}

void Lait::setNombre(int new_nb){
    this->nombre  =new_nb;
}

Lait& Lait::operator=(const Lait &lait){
    Alimentaire::operator=(lait);
    this->naturel = lait.naturel;

    return *this;
}

void Lait::afficher(){
    cout<<"======================"<<endl<<"Nom : " <<this->getNom()<<endl<<"Marque : "<<this->getMarque()<<endl<<"PrixU : "<<this->getPrixUnitaire()<<endl<<"EXP DATE : "<<this->date_expiration<<endl<<"Naturel : ";
    if(this->naturel)
        cout<<"Oui"<<endl;
    else{
        cout<<"Non"<<endl;
    }

}