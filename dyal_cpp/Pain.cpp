#include "../entete.hpp"

Pain::Pain(string nom, string marque, float prixU, Date date_exp, string type):Alimentaire(nom,marque, prixU, date_exp){
    this->type = type;
}

Pain::Pain(const Pain &pain):Alimentaire(pain){
    this->type = pain.type;
}

Pain::~Pain(){};

string Pain::getType(){
    return this->type;
}

void Pain::setType(string new_type){
    this->type = new_type;
}

Pain& Pain::operator=(const Pain& pain){
    Alimentaire::operator=(pain);
    this->type = pain.type;
    return *this;
}