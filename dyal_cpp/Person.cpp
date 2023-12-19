#include "../entete.hpp"
//Constructeurs
Person::Person(){
            this->name = "";
            this->prenom = "";
        }

Person::Person(string name, string prenom){
    this->name = name;
    this->prenom = prenom;
}

Person::Person(string name, string prenom, int jour, int mois, int annee){
    this->name = name;
    this->prenom = prenom;
    this->dateNaissance = Date(jour, mois, annee);
}

Person::Person(string name, string prenom, Date &dateNaissance){
    this->name = name;
    this->prenom = prenom;
    this->dateNaissance = dateNaissance;
}

//Destructeur
Person::~Person(){
   // cout << "Destroyed"<<endl;
}
//Accesseurs
string Person::getName(){
    return this->name;
}

void Person::setName(string newName){
    this->name = newName;
}

string Person::getPrenom(){
    return this->prenom;
}

void Person::setPrenom(string newPrenom){
    this->prenom = newPrenom;
}

Date Person::getDateNaissance(){
    return this->dateNaissance;
}

void Person::setDateNaissance(int jour, int mois, int annee){
    (this->dateNaissance).setJour(jour);
    (this->dateNaissance).setMois(mois);
    (this->dateNaissance).setAnnee(annee);
}

void Person::setDateNaissance(Date &newDate){
    this->dateNaissance = newDate;
}

//Constructeur de copie
Person::Person(const Person &person){
    this->name = person.name;
    this->prenom = person.prenom;
    this->dateNaissance = person.dateNaissance;
}

//opérateur d'affectation
Person & Person::operator=(const Person &person){
    this->name = person.name;
    this->prenom = person.prenom;
    this->dateNaissance = person.dateNaissance;
    return *this;
}

ostream &operator<<(ostream &flux, Person &person){
    flux << person.name<<" "<<person.prenom<<" "<<person.dateNaissance;
    return flux;
}
