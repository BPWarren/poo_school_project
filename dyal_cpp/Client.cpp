#include"../entete.hpp"

Client::Client(string nom , string prenom , Date d):Person(nom,prenom,d){
    this->panier = Panier();
}

Client::Client():Person(){
    this->panier = Panier();
}

Client::Client(const Client& c):Person(c){
   (this->panier).vider_panier();
   (this->panier).tab_article =new Article* [(c.panier).nb_article];
   (this->panier).article_index = new int[(c.panier).nb_article];
    (this->panier).stock_index = new int[(c.panier).nb_article];

   (this->panier).nb_article = c.panier.nb_article;
   for(int i=0; i<c.panier.nb_article; i++){
        ((this->panier).tab_article)[i] = new Pain();
        ((this->panier).article_index) = new int;
        ((this->panier).stock_index) = new int;

        *((this->panier).tab_article)[i] = *((c.panier).tab_article)[i];

         ((this->panier).article_index)[i] = (c.panier).article_index[i];
         ((this->panier).stock_index)[i] = (c.panier).stock_index[i];

   }
}


Client& Client::operator=(const Client& c){
    Person::operator=(c);
    (this->panier).vider_panier();
   (this->panier).tab_article =new Article* [(c.panier).nb_article];
   (this->panier).article_index = new int[(c.panier).nb_article];
    (this->panier).stock_index = new int[(c.panier).nb_article];

   (this->panier).nb_article = c.panier.nb_article;
   for(int i=0; i<c.panier.nb_article; i++){
        ((this->panier).tab_article)[i] = new Pain();
        ((this->panier).article_index) = new int;
        ((this->panier).stock_index) = new int;

        *((this->panier).tab_article)[i] = *((c.panier).tab_article)[i];

         ((this->panier).article_index)[i] = (c.panier).article_index[i];
         ((this->panier).stock_index)[i] = (c.panier).stock_index[i];

   }

   return *this;
    
}

void Client::afficher_articles(Magasin& magasin, Gerant &gerant){
    gerant.afficher_tout(magasin);

}
void Client::afficher_category( Magasin& magasin, Gerant &gerant){
    gerant.afficher_category(magasin);
}

void Client::vider_panier(){
    (this->panier).vider_panier();
}

void Client::contenu_panier(){
    (this->panier).afficher_panier();
}

void Client::facture(){
    cout<<endl<<"========NET A PAYER========"<<endl;
    cout<<(this->panier).netApayer();
}

void Client::ajouter_article(Magasin &magasin, Gerant &gerant){
    int choix=0;
    int quantite=0;
    
    cout<<endl<<"========ACHETER ARTICLE========"<<endl;
    int stock_index = gerant.afficher_category(magasin);
    cout<<endl<<"=====ARTICLE REF  : ";
    cin>>choix;
    cout<<endl<<"Quantite : ";
    cin>>quantite;
    if (quantite!=0){
        if(stock_index==1){
            if (magasin.getTailleDepot1()>choix)
            {
                Alimentaire *art = magasin.getAliment(choix);
                if(art->getNombreArticle() >0)
                    (this->panier).ajouter_panier(art, choix, stock_index, quantite, magasin);
                else{
                    cout<<endl<<"Ce article est en rupture de stock"<<endl;
                }
            }
        }

        else if(stock_index==2){
            if(magasin.getTailleDepot2()>choix){
                Electromenager* elect = magasin.getElectro(choix);
                (this->panier).ajouter_panier(elect, choix, stock_index, quantite, magasin);
            }
        }
        else if(stock_index==3){
            if(magasin.getTailleDepot3()>choix){
                Vestimentaire* vest = magasin.getVest(choix);
                (this->panier).ajouter_panier(vest, choix, stock_index, quantite, magasin);
            }
        }
    }
    else{
        cout<<endl<<"La quantite doit etre superieur a 0"<<endl;
    }
}

void Client::supprimer_article(Magasin& magasin){
    if((this->panier).getNbArticle()>0){
        cout<<endl<<"=========SUPPRIMER DU PANIER========="<<endl;
        (this->panier).afficher_panier();
        int index=0;
        cout<<endl<<"REF ART :";
        cin>>index;
        (this->panier).retirer_panier(index, magasin);
    }
    else{
        cout<<endl<<"Panier vide"<<endl;
    }
    
}
Client::~Client(){};