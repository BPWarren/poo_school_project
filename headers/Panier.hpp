class Panier{
    private:
        Article **tab_article;
        int *article_index;
        int *stock_index;

        int nb_article;
    public:

        Panier();
        Panier(const Panier &);
        ~Panier() ;//desallocation

        int getNbArticle();

        Panier& operator=(const Panier&);
        void ajouter_panier(Article *article, int art_ind, int sck_i, int quantite, Magasin &);
        void retirer_panier(int index, Magasin &);
        void vider_panier();


        
};