#include "../entete.hpp"



// Definition de la classe
Date::Date(){
    jour = 1;
    mois = 1;
    annee = 2023;
}

Date::Date(int j, int m, int a){
    jour = j;
    mois = m;
    if (annee<0){
        __throw_invalid_argument("Annee invalide");
    }
    else
        annee = a;

}

int Date::getJour(){
    return jour;
}

void Date::setJour(int new_jour){
    jour = new_jour;
}

int Date::getMois(){
    return mois;
}

void Date::setMois(int new_mois){
    mois = new_mois;
}

int Date::getAnnee(){
    return annee;
}

void Date::setAnnee(int new_annee){
    annee = new_annee;
}

void Date::afficher(){
    cout <<jour<<"/"<<mois<<"/"<<annee<<endl;
}

bool Date::operator==(const Date &d){
    if (jour==d.jour && mois==d.mois && annee==d.annee){
        return true;
    }

    else{
        return false;
    }
}

bool Date::operator!=(Date date){
    return *this == date;
}

bool Date::operator>(Date date){
    if (this->annee>date.annee || (this->annee ==date.annee && this->mois > date.mois) || (this->annee==date.annee && this->mois==date.mois &&this->jour>date.jour)){
        return true;
    }
    else{
        return false;
    }
}

bool Date::operator<(Date date){
    return !((*this==date)||(*this>date));
}

//Operateur d'affectation
Date &Date::operator=(const Date &date){

    this->jour = date.jour;
    this->mois=  date.mois;
    this->annee = date.annee;

    return *this;

}

//Constructeur de copie
Date::Date(const Date &date){
    this->jour = date.jour;
    this->mois = date.mois;
    this->annee = date.annee;
}

//Destructeur
Date::~Date(){
    //cout << "Destruction"<<endl;

}

void Date::test(){ //tester la desruction
    Date A;
    Date B;
}

ostream &operator<<(ostream &flux, Date &date){
    flux<<date.jour<<"/"<<date.mois<<"/"<<date.annee;
    return flux;
}

