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

    //delete[] this->depot1_alimentaire;
    //delete[] this->depot2_electromenager;
    //delete[] this->depot3_vestimentaire;
    
    this->depot1_alimentaire = new Alimentaire*[magasin.taille_depot1];
    this->depot2_electromenager = new Electromenager*[magasin.taille_depot2];
    this->depot3_vestimentaire = new Vestimentaire*[magasin.taille_depot3];

    
    

    this->taille_depot1 = magasin.taille_depot1;
    this->taille_depot2 = magasin.taille_depot2;
    this->taille_depot3 = magasin.taille_depot3;

    for(int i=0;i<this->taille_depot1;i++){
        this->depot1_alimentaire [i] = new Pain ();
        *((this->depot1_alimentaire)[i]) = *((magasin.depot1_alimentaire)[i]);
    }

    for(int i=0;i<this->taille_depot2;i++){
        this->depot2_electromenager [i] = new Tv ();
        *((this->depot2_electromenager)[i]) = *((magasin.depot2_electromenager)[i]);
    }

    for(int i=0;i<this->taille_depot3;i++){
        this->depot3_vestimentaire [i] = new Chemise ();
        *((this->depot3_vestimentaire)[i]) =*((magasin.depot3_vestimentaire)[i]);
    }
}

Magasin::~Magasin(){
    delete[] (this->depot1_alimentaire);
    delete[] (this->depot2_electromenager);
    delete[] (this->depot3_vestimentaire);
};

int Magasin::getTailleDepot1(){
    //cout<<endl<<"ici"<<(this->depot1_alimentaire)[0]->getNombreArticle();
    return this->taille_depot1;
}

int Magasin::getTailleDepot2(){
    return this->taille_depot2;
}

int Magasin::getTailleDepot3(){
    return this->taille_depot3;
}

void Magasin::add_depot1(Alimentaire *aliment){
    *(this->depot1_alimentaire + this->taille_depot1) = aliment;
    (this->taille_depot1)++;
}

void Magasin::add_depot2(Electromenager *elect){
    *(this->depot2_electromenager + this->taille_depot2) = elect;
    this->taille_depot2++;
}

void Magasin::add_depot3(Vestimentaire *vest){
    *(this->depot3_vestimentaire + this->taille_depot3) = vest;
    this->taille_depot3++;
}

//Pour supprimer, on décale juste le contenu puis on déc taille_depot
void Magasin::pop_depot1(int index){
    if (this->taille_depot1==0){
        cout<<endl<<"DEPOT VIDE"<<endl;
    }
    else{
        for(int i=index; i<this->taille_depot1-1;i++){
        *(this->depot1_alimentaire)[i] = *(this->depot1_alimentaire)[i+1];
        }

        this->taille_depot1--;

    }
    
}


void Magasin::pop_depot2(int index){
    if (this->taille_depot2==0){
        cout<<endl<<"DEPOT VIDE"<<endl;
    }
    else{
        for(int i=index; i<this->taille_depot2-1;i++){
        *(this->depot2_electromenager)[i] = *(this->depot2_electromenager)[i+1];
        }
        this->taille_depot2--;
    }

    
}

void Magasin::pop_depot3(int index){
    if (this->taille_depot3==0){
        cout<<endl<<"DEPOT VIDE"<<endl;
    }
    else{
        for(int i=index; i<this->taille_depot3-1;i++){
        *(this->depot3_vestimentaire)[i] = *(this->depot3_vestimentaire)[i+1];
        }
        this->taille_depot3--;
    }
    
}

Magasin& Magasin::operator=(const Magasin &magasin){
     // Libérer la mémoire existante

    delete[] this->depot1_alimentaire;
    delete[] this->depot2_electromenager;
    delete[] this->depot3_vestimentaire;

    // Allouer de la mémoire pour les nouveaux tableaux
    this->depot1_alimentaire = new Alimentaire*[magasin.taille_depot1];
    this->depot2_electromenager = new Electromenager*[magasin.taille_depot2];
    this->depot3_vestimentaire = new Vestimentaire*[magasin.taille_depot3];

    this->taille_depot1 = magasin.taille_depot1;
    this->taille_depot2 = magasin.taille_depot2;
    this->taille_depot3 = magasin.taille_depot3;

    for(int i=0;i<this->taille_depot1;i++){
        this->depot1_alimentaire [i] = new Pain ();
        *((this->depot1_alimentaire)[i]) = *((magasin.depot1_alimentaire)[i]);
    }

    for(int i=0;i<this->taille_depot2;i++){
        this->depot2_electromenager [i] = new Tv ();
        *((this->depot2_electromenager)[i]) = *((magasin.depot2_electromenager)[i]);
    }

    for(int i=0;i<this->taille_depot3;i++){
        this->depot3_vestimentaire [i] = new Chemise ();
        *((this->depot3_vestimentaire)[i]) =*((magasin.depot3_vestimentaire)[i]);
    }

    return *this;
}

Alimentaire* Magasin::getAliment(int index){
    if(this->taille_depot1!=0){
        return (this->depot1_alimentaire)[index];
    }
    else{
        return NULL;
    }
}

Electromenager* Magasin::getElectro(int index){
    if(this->taille_depot2){
        return (this->depot2_electromenager)[index];
    }
    else{
        return NULL;
    }
}

Vestimentaire* Magasin::getVest(int index){
    if(this->taille_depot3){
        return (this->depot3_vestimentaire)[index];
    }
    else{
        return NULL;
    }
}