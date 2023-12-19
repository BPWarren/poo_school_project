#include "../entete.hpp"

Refrigirateur::Refrigirateur(string nom, string marque, float prixU, float puiss, float vol):Electromenager(nom, marque, prixU, puiss){
    this->volume = vol;
}

Refrigirateur::Refrigirateur(const Refrigirateur &ref):Electromenager(ref){
    this->volume = ref.volume;
}

Refrigirateur::~Refrigirateur(){};
void Refrigirateur::setVolume(float new_volume){
    this->volume = new_volume;
}

float Refrigirateur::getVolume(){
    return this->volume;
}

int Refrigirateur::getNombre(){
    return this->nombre;
}

void Refrigirateur::setNombre(int new_nb){
    this->nombre  =new_nb;
}

void Refrigirateur::afficher(){
cout<<"======================"<<endl<<"Nom : " <<this->getNom()<<endl<<"Marque : "<<this->getMarque()<<endl<<"PrixU : "<<this->getPrixUnitaire()<<endl<<"Volume : "<<this->volume<<endl;
}

Refrigirateur& Refrigirateur::operator=(const Refrigirateur &ref){
    Electromenager::operator=(ref);
    this->volume = ref.volume;

    return *this;
}