#include "../entete.hpp"
//younes.lakhrissi@gmail.com
//objet : INFO1-Nom

//Constructeur
Article::Article(string nom, string marque, float prixUnitaire){
    this->nom = nom;
    this->marque = marque;
    this->prixUnitaire = prixUnitaire;
}

//Constructeur de copie
Article::Article(const Article &article){
    this->marque = article.marque;
    this->nom = article.nom;
    this->prixUnitaire = article.prixUnitaire;
    this->nombre_article = 0;
}

//Accesseurs
void Article::setNom(string new_nom){
    this->nom =new_nom;
}

void Article::setPrixUnitaire(float new_prixU){
    this->prixUnitaire = new_prixU;
}

void Article::setMarque(string new_marque){
    this->marque = new_marque;
}

void Article::setNombreArticle(int new_nb){
    this->nombre_article = new_nb;
}

string Article::getMarque(){
    return this->marque;
}
string Article::getNom(){
    return this->nom;
}

float Article::getPrixUnitaire(){
    return this->prixUnitaire;
}

int Article::getNombreArticle(){
    return this->nombre_article;
}

Article& Article::operator=(const Article &article){
    this->nom = article.nom;
    this->marque = article.marque;
    this->prixUnitaire = article.prixUnitaire;

    return *this;
}

//Destructeur
Article::~Article(){
}