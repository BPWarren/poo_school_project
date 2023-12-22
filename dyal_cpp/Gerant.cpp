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



void Gerant::ajouter_article(Magasin &magasin){
    int choix=0;
    cout<<endl<<"========AJOUT ARTICLE========"<<endl;
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
        new_pain->afficher();
        new_pain->remplir();
        magasin.add_depot1(new_pain);
        cout<<magasin.getTailleDepot1();
        break;
    case 2:
        Lait *new_lait;
        new_lait = new Lait();
        new_lait->remplir();
        magasin.add_depot1(new_lait);
        break;
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
        new_tv = new Tv();
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
int Gerant::category_indexation(int index, Magasin &magasin, int choix=0){
    int compt=0;
    switch (index)
    {
    //Article **article;
    case 1:
        cout<<"==============Alimentaire============"<<endl;
        if(magasin.taille_depot1==0){
            cout<<endl<<"DEPOT VIDE"<<endl;
        }
        for(int i=0;i<magasin.taille_depot1;i++){

            cout<<endl<<"REF : "<<"["<<i<<"]"<<endl;
            if (choix==0)
                (magasin.depot1_alimentaire[i])->afficher();
            else if(choix==1)
            {
                (magasin.depot1_alimentaire[i])->afficher_short();
            }
            compt++;
        }
        break;
    case 2:
        cout<<"==============Electromenager============"<<endl;
        if(magasin.taille_depot2==0){
            cout<<endl<<"DEPOT VIDE"<<endl;
        }
        for(int i=0;i<magasin.taille_depot2; i++){
            cout<<endl<<"REF : "<<"["<<i<<"]"<<endl;
            if (choix==0)
                (magasin.depot2_electromenager[i])->afficher();
            else if(choix==1){
                (magasin.depot2_electromenager[i])->afficher_short();
            }
            compt++;
        }
        break;
    case 3:
        cout<<"==============Vestimentaire============"<<endl;
        if(magasin.taille_depot3==0){
            cout<<endl<<"DEPOT VIDE"<<endl;
        }
        for(int i=0; i<magasin.taille_depot3;i++){
            cout<<endl<<"REF : "<<"["<<i<<"]"<<endl;
            if (choix==0)
                (magasin.depot3_vestimentaire[i])->afficher();
            else if (choix==1){
                (magasin.depot3_vestimentaire[i])->afficher_short();
            }
            compt++;
        }
        break;
    default:
    cout<<endl<<"Index Incorrect";
        break;
    }

    return compt;
}
int Gerant::afficher_category(Magasin &magasin){
    int index;
    cout<<endl<<"========AFFICHAGE DE CATEGORY========"<<endl;
    cout<<endl<<"[1] Alimentaire"<<endl;
    cout<<"[2] Electromenager"<<endl;
    cout<<"[3] Vestimentaire"<<endl;

    cout<<endl<<"Choix Categorie : ";
    cin>>index;

    category_indexation(index, magasin);

    return index;
   
}

void Gerant::supprimer_article(Magasin &magasin){
    int index, ref_sup=0;
    cout<<endl<<"========SUPPRESSION ARTC========"<<endl;
    cout<<endl<<"[1] Alimentaire"<<endl;
    cout<<"[2] Electromenager"<<endl;
    cout<<"[3] Vestimentaire"<<endl;

    cout<<endl<<"Art Categorie : ";
    cin>>index;
    int compt = category_indexation(index, magasin, 1);

    if (compt)
    {
        cout<<endl<<"REF ART SUP : ";
        cin>>ref_sup;
    }
    
    switch (index)
    {
    case 1:
        magasin.pop_depot1(ref_sup);
        break;
    case 2:
        magasin.pop_depot2(ref_sup);
        break;
    case 3:
        magasin.pop_depot3(ref_sup);
        break;
    
    default:
        cout<<endl<<"Choix incorrect";
        break;
    }

    
}
void Gerant::afficher_tout(Magasin &magasin){
    category_indexation(1, magasin);
    category_indexation(2, magasin);
    category_indexation(3, magasin);
}