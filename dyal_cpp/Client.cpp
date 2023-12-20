#include"../entete.hpp"

Client::Client(string nom , string prenom , Date d, Article** panier):Person::Person(nom,prenom,d){
    this->panier = panier;
}

Client::Client(const Client& c):Person::Person(c){
    this->panier = c.panier;
}

Article** Client::get_panier(){
    return this->panier;
}

void Client::set_panier(Article** new_panier){
    this->panier = new_panier;
}

Client& Client::operator=(const Client& c){
    Person(c);
    this->panier = c.panier;
    return *this;
}

void Client::afficher_articles(const Magasin& mag){

}
void Client::afficher_tout(const Magasin){

}
void Client::ajouter_article(Article* a){

}
void Client::supprimer_article(){

}
void Client::vider_panier(){

}
float Client::montant(){

}
void Client::quitter(){
    
}