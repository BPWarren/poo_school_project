#include "../entete.hpp"

Magasin::Magasin(){
    this->depot1_alimentaire = new Alimentaire*[1];
    this->depot2_electromenager = new Electromenager*[1];
    this->depot3_vestimentaire = new Vestimentaire*[1];

    this->taille_depot1=0;
    this->taille_depot2 = 0;
    this->taille_depot3 = 0;
}

Magasin::Magasin(const Magasin& magasin){
    delete[] this->depot1_alimentaire;
    delete[] this->depot2_electromenager;
    delete[] this->depot3_vestimentaire;

    this->depot1_alimentaire = new Alimentaire*[magasin.taille_depot1];
    this->depot2_electromenager = new Electromenager*[magasin.taille_depot2];
    this->depot3_vestimentaire = new Vestimentaire*[magasin.taille_depot3];
    

    this->taille_depot1 = magasin.taille_depot1;
    this->taille_depot2 = magasin.taille_depot2;
    this->taille_depot3 = magasin.taille_depot3;

    for(int i=0;i<this->taille_depot1;i++){
        *((this->depot1_alimentaire)[i]) = *((magasin.depot1_alimentaire)[i]);
    }

    for(int i=0;i<this->taille_depot2;i++){
        *((this->depot2_electromenager)[i]) = *((magasin.depot2_electromenager)[i]);
    }

    for(int i=0;i<this->taille_depot3;i++){
        *((this->depot3_vestimentaire)[i]) =*((magasin.depot3_vestimentaire)[i]);
    }
}

Magasin::~Magasin(){
    delete[] this->depot1_alimentaire;
    delete[] this->depot2_electromenager;
    delete[] this->depot3_vestimentaire;
};

int Magasin::getTailleDepot1(){
    return this->taille_depot1;
}

int Magasin::getTailleDepot2(){
    return this->taille_depot2;
}

int Magasin::getTailleDepot3(){
    return this->taille_depot3;
}

    