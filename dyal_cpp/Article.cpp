#include "../entete.hpp"
//younes.lakhrissi@gmail.com
//objet : INFO1-Nom

//Constructeur
Article::Article(string nom, string marque, float prixUnitaire){
    this->nom = nom;
    this->marque = marque;
    this->prixUnitaire = prixUnitaire;
}

Article::Article(){
    this->nom = "article";
    this->marque = "marque";
    this->prixUnitaire=0;
    this->nombre = 0;
}

//Constructeur de copie
Article::Article(const Article &article){
    this->marque = article.marque;
    this->nom = article.nom;
    this->prixUnitaire = article.prixUnitaire;
    this->nombre = article.nombre;
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
    this->nombre = new_nb;
}

int Article::getNombreArticle(){
    return this->nombre;
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



Article& Article::operator=(const Article &article){
    this->nom = article.nom;
    this->marque = article.marque;
    this->prixUnitaire = article.prixUnitaire;
    this->nombre= article.nombre;

    return *this;
}

bool Article::operator==(const Article & a){
    return this->nom==a.nom && this->marque==a.marque;
}

void Article::afficher_short(){
    cout<<"===================";
    cout<<endl<<"Nom : ";
    cout<<this->nom;
    cout<<endl<<"PrixU : ";
    cout<<this->prixUnitaire;
    
    cout<<endl<<"==================="<<endl;
}


//Destructeur
Article::~Article(){}

void Article::remplir(){
    cout<<"=============NOUVEL ARTICLE=============="<<endl;
    cout<<endl<<"NOM : ";
    cin>>this->nom;
    cout<<endl<<"MARQUE : ";
    cin>>this->marque;
    cout<<endl<<"PrixU : ";
    cin>>this->prixUnitaire;
    

}