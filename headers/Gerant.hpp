class Gerant:public Person{

    
    private:
        string mot_passe = "LetMeIn@";
    public : 
        Gerant(string name, string prenom, Date dateN);
        Gerant(const Gerant &);
        ~Gerant();

        string getMotDePasse();
        void setMotDePasse(string new_pass);

        void add_depot1(Alimentaire *aliment, Magasin magasin);
        void pop_depot1(int index, Magasin magasin);

        void add_depot2(Electromenager *electr, Magasin magasino);
        void pop_depot2(int index, Magasin magasin);

        void add_depot3(Vestimentaire *vest, Magasin magasin);
        void pop_depot3(int index, Magasin magasin);
        //Methode sup

        /*
        -Ajouter un nouvel article
        -Afficher la liste des articles par categorie
        -Afficher ts les article du depot
        -supprimer un article
        -quitter le prog
        
        */
       //void afficher_depot(Article *article, int taille);
       void category_indexation(int index, Magasin);

       void ajouter_article(Magasin magasin);
       void afficher_category(Magasin);
       void afficher_tout(Magasin);
       void supprimer_article(int index, Magasin magasin);
       void quitter();
};