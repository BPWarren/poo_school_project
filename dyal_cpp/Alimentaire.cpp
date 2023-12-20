#include "../entete.hpp"
Alimentaire::Alimentaire(string nom, string marque, float prixUnitaire, Date date_expiration):Article(nom, marque, prixUnitaire){
    this->date_expiration = date_expiration;
}

Alimentaire::Alimentaire():Article(){
    Date date;
    this->date_expiration=date;
}

Alimentaire::~Alimentaire(){

}

Date Alimentaire::getDateExpiration(){
    return date_expiration;
}

void Alimentaire::setDateExpiration(Date new_date){
    this->date_expiration = new_date;
}

Alimentaire::Alimentaire(const Alimentaire &alimentaire):Article(alimentaire){
    this->date_expiration = alimentaire.date_expiration;
    
}

Alimentaire& Alimentaire::operator=(const Alimentaire & alimentaire){
    Article::operator=(alimentaire);
    this->date_expiration = alimentaire.date_expiration;

    return *this;
}