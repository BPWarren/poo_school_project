class Gerant:public Person{

    
    private:
        string mot_passe = "LetMeIn@";
    public : 
        Gerant(string name, string prenom, Date dateN);
        Gerant(const Gerant &);
        ~Gerant();

        string getMotDePasse();
        void setMotDePasse(string new_pass);
        
        //Methode sup

        /*
        -Ajouter un nouvel article OUI
        -Afficher la liste des articles par categorie 
        -Afficher ts les article du depot
        -supprimer un article 
        -quitter le prog
        
        */
       //void afficher_depot(Article *article, int taille);
       int category_indexation(int index, Magasin&, int );

       void ajouter_article(Magasin &magasin);
       int afficher_category(Magasin &);
       void afficher_tout(Magasin&);
       void supprimer_article(Magasin &magasin);
       //void quitter();
};