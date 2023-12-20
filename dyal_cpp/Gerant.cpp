#include "../entete.hpp"

Gerant::Gerant(string nom, string prenom, Date dateN):Person(nom,prenom, dateN){};

Gerant::Gerant(const Gerant &gerant):Person(gerant){
    this->mot_passe = gerant.mot_passe;
}

Gerant::~Gerant(){};

string Gerant::getMotDePasse(){
    
    return this->mot_passe;
}

void Gerant::setMotDePasse(string mot_p){
    this->mot_passe = mot_p;
}

void Gerant::add_depot1(Alimentaire *aliment, Magasin magasin){
    *(magasin.depot1_alimentaire + magasin.taille_depot1) = aliment;
    magasin.taille_depot1++;
}

void Gerant::add_depot2(Electromenager *elect, Magasin magasin){
    *(magasin.depot2_electromenager + magasin.taille_depot2) = elect;
    magasin.taille_depot2++;
}

void Gerant::add_depot3(Vestimentaire *vest, Magasin magasin){
    *(magasin.depot3_vestimentaire + magasin.taille_depot3) = vest;
    magasin.taille_depot3++;
}

//Pour supprimer, on décale juste le contenu puis on déc taille_depot
void Gerant::pop_depot1(int index, Magasin magasin){
    Alimentaire *temp = magasin.depot1_alimentaire[index];
    temp->afficher();

    for(int i=index; i<magasin.taille_depot1-1;i++){
        *(magasin.depot1_alimentaire)[i] = *(magasin.depot1_alimentaire)[i+1];
    }

    magasin.taille_depot1--;
}

void Gerant::pop_depot2(int index, Magasin magasin){

    //Electromenager *temp = this->depot2_electromenager[index];
    //temp->afficher();

    for(int i=index; i<magasin.taille_depot2-1;i++){
        *(magasin.depot2_electromenager)[i] = *(magasin.depot2_electromenager)[i+1];
    }
    magasin.taille_depot2--;
}


void Gerant::pop_depot3(int index, Magasin magasin){

    //Vestimentaire *temp = this->depot3_vestimentaire[index];
    //temp->afficher();

    for(int i=index; i<magasin.taille_depot3-1;i++){
        *(magasin.depot3_vestimentaire)[i] = *(magasin.depot3_vestimentaire)[i+1];
    }
    magasin.taille_depot3--;
}


void Gerant::ajouter_article(Magasin magasin){
    int choix(0);
    cout<<"[1] Pain"<<endl;
    cout<<"[2] Lait"<<endl;
    cout<<"[3] Chemise"<<endl;
    cout<<"[4] Pantalon"<<endl;
    cout<<"[5] TV"<<endl;
    cout<<"[6] Refrigirateur"<<endl;
    cout<<"=====NEW ARTICLE REF  : ";
    cin>>choix;

    switch (choix)
    {
    case 1:
        Pain *new_pain;
        new_pain = new Pain();
        new_pain->remplir();
        magasin.add_depot1(new_pain);
        break;
    case 2:
        Lait *new_lait;
        new_lait = new Lait();
        new_lait->remplir();
        magasin.add_depot1(new_lait);
    case 3:
        Chemise *new_chemise;
        new_chemise = new Chemise();
        new_chemise->remplir();
        magasin.add_depot3(new_chemise);
        break;
    case 4:
        Pantalon *new_pant;
        new_pant = new Pantalon();
        new_pant->remplir();
        magasin.add_depot3(new_pant);
        break;
    case 5:
        Tv *new_tv;
        new_tv = new Tv;
        new_tv->remplir();
        magasin.add_depot2(new_tv);
        break;
    case 6:
        Refrigirateur *ref;
        ref = new Refrigirateur();
        ref->remplir();
        magasin.add_depot2(ref);
        break;
    
    default:
        cout<<endl<<"Choix incorrect"<<endl;
        break;
    }
}
/*
void Gerant::afficher_depot(Article **article, int taille){
    for(int i=0; i<taille; i++){
        article[i]->afficher();
    }
}
*/
void Gerant::category_indexation(int index, Magasin magasin){

    switch (index)
    {
    //Article **article;
    case 1:
        cout<<"==============Alimentaire============"<<endl;
        for(int i=0;i<magasin.taille_depot1;i++){
            cout<<endl<<"REF : "<<"["<<i<<"]";
            (magasin.depot1_alimentaire[i])->afficher();
        }
        break;
    case 2:
        cout<<"==============Electromenager============"<<endl;
        for(int i=0;i<magasin.taille_depot2; i++){
            cout<<endl<<"REF : "<<"["<<i<<"]";
            (magasin.depot2_electromenager[i])->afficher();
        }
        break;
    case 3:
        cout<<"==============Vestimentaire============"<<endl;
        for(int i=0; i<magasin.taille_depot3;i++){
            cout<<endl<<"REF : "<<"["<<i<<"]";
            (magasin.depot3_vestimentaire[i])->afficher();
        }
        break;
    default:
    cout<<endl<<"Index Incorrect";
        break;
    }
}
void Gerant::afficher_category(Magasin magasin){
    int index;
    cout<<endl<<"[1] Alimentaire"<<endl;
    cout<<"[2] Electromenager"<<endl;
    cout<<"[3] Vestimentaire"<<endl;

    cout<<endl<<"=========Choix Categorie : ";
    cin>>index;

    category_indexation(index, magasin);
   
}
void Gerant::afficher_tout(Magasin magasin){
    category_indexation(1, magasin);
    category_indexation(2, magasin);
    category_indexation(3, magasin);
}