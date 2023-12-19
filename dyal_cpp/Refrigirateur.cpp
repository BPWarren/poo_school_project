#include "../entete.hpp"

Refrigirateur::Refrigirateur(string nom, string marque, float prixU, float puiss, float vol):Electromenager(nom, marque, prixU, puiss){
    this->volume = vol;
}

Refrigirateur::Refrigirateur(const Refrigirateur &ref):Refrigirateur(ref){
    this->volume = ref.volume;
}

Refrigirateur::~Refrigirateur(){};
void Refrigirateur::setVolume(float new_volume){
    this->volume = new_volume;
}

float Refrigirateur::getVolume(){
    return this->volume;
}

void Refrigirateur::afficher(){
cout<<"======================"<<endl<<"Nom : " <<this->getNom()<<endl<<"Marque : "<<this->getMarque()<<endl<<"PrixU : "<<this->getPrixUnitaire()<<endl<<"Volume : "<<this->volume<<endl;
}

Refrigirateur& Refrigirateur::operator=(const Refrigirateur &ref){
    Electromenager::operator=(ref);
    this->volume = ref.volume;

    return *this;
}