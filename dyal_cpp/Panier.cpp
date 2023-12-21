#include "../entete.hpp"

Panier::Panier(){
    this->nb_article = 0;
    this->tab_article = new Article*[0];
    this->article_index = new int[0];
    this->stock_index = new int[0];
}

Panier::Panier(const Panier &panier){
    delete[] this->tab_article;
    delete[] this->article_index;
    delete[] this->stock_index;

    this->tab_article = new Article*[panier.nb_article];
    this->article_index = new int[panier.nb_article];
    this->stock_index = new int[panier.nb_article];

    this->nb_article = panier.nb_article;

    for(int i=0; i<panier.nb_article; i++){
        this->tab_article[i] = new Pain();
        this->article_index = new int;
        this->stock_index = new int;

        *((this->tab_article)[i]) = *((panier.tab_article)[i]);
        (this->article_index)[i] = (panier.article_index)[i];
        (this->stock_index)[i] = (panier.stock_index)[i]; 
    }

}

Panier& Panier::operator=(const Panier &panier){
    delete[] this->tab_article;
    delete[] this->article_index;
    delete[] this->stock_index;

    this->tab_article = new Article*[panier.nb_article];
    this->article_index = new int[panier.nb_article];
    this->stock_index = new int[panier.nb_article];

    this->nb_article = panier.nb_article;

    for(int i=0; i<panier.nb_article; i++){
        this->tab_article[i] = new Pain();
        this->article_index = new int;
        this->stock_index = new int;

        *((this->tab_article)[i]) = *((panier.tab_article)[i]);
        (this->article_index)[i] = (panier.article_index)[i];
        (this->stock_index)[i] = (panier.stock_index)[i]; 
    }

    return *this;
}

int Panier::getNbArticle(){
    return this->nb_article;
}


Panier::~Panier(){
    delete[] this->tab_article;
    delete[] this->article_index;
    delete[] this->stock_index;
}

void Panier::ajouter_panier(Article *article, int art_index, int stock_index, int quantite, Magasin &magasin){
    article->setNombreArticle(quantite);

    switch (stock_index)
    {
    case 1:
        magasin.taille_depot1--;
        int nb = (magasin.depot1_alimentaire[art_index])->getNombreArticle();
        (magasin.depot1_alimentaire[art_index])->setNombreArticle(nb-1);
        break;
    case 2:
        magasin.taille_depot2--;
        int nb = (magasin.depot2_electromenager[art_index])->getNombreArticle();
        (magasin.depot2_electromenager[art_index])->setNombreArticle(nb-1);
        break;
    case 3:
        magasin.taille_depot3--;
        int nb = (magasin.depot3_vestimentaire[art_index])->getNombreArticle();
        (magasin.depot3_vestimentaire[art_index])->setNombreArticle(nb-1);
        break;
    
    default:
        cout<<endl<<"Choix incorrect";
        break;
    }

    *((this->tab_article)+ this->nb_article-1) = article;
    *((this->article_index)+this->nb_article-1) =  art_index;
    *((this->stock_index)+this->nb_article-1) =  stock_index;

    this->nb_article++;

}

void Panier::retirer_panier(int index, Magasin &magasin){
    //Article *article_sup = (this->tab_article)[index];
    int art_index = (this->article_index)[index];
    int stock_index = (this->stock_index)[index];

    for(int i=index;i<this->nb_article-1; i++){
        
        *((this->tab_article)[i]) = *((this->tab_article)[i+1]);
        (this->article_index)[i] = this->article_index[i+1];
        (this->stock_index)[i] = this->stock_index[i+1];
    }
    switch (stock_index)
    {
    case 1:
        magasin.taille_depot1++;
        int nb = (magasin.depot1_alimentaire[art_index])->getNombreArticle();
        (magasin.depot1_alimentaire[art_index])->setNombreArticle(nb+1);
        break;
    case 2:
        magasin.taille_depot2++;
        int nb = (magasin.depot2_electromenager[art_index])->getNombreArticle();
        (magasin.depot2_electromenager[art_index])->setNombreArticle(nb+1);
        break;
    case 3:
        magasin.taille_depot3++;
        int nb = (magasin.depot3_vestimentaire[art_index])->getNombreArticle();
        (magasin.depot3_vestimentaire[art_index])->setNombreArticle(nb+1);
        break;
    
    default:
        cout<<endl<<"Choix incorrect";
        break;
    }
  

    this->nb_article--;

}

void Panier::vider_panier(){
    delete[] this->tab_article;
    delete[] this->article_index;
    delete[] this->stock_index;

    this->nb_article = 0;
}