class Client : public Person{
    private:
        Panier panier;
        //friend class Panier;
    public:
        // Constructeurs
        Client(string nom , string prenom , Date d);
        Client();
        Client(const Client&);

        // Destructeur
        ~Client();

        

        // Operateur d'affectation
        Client& operator=(const Client&);

        //Autres methodes
        void afficher_articles(Magasin&, Gerant&); 
        void afficher_category(Magasin&, Gerant&);
        void vider_panier();
        void contenu_panier();
        void facture();

        void ajouter_article(Magasin&, Gerant&);
        void supprimer_article();
        
        
        //void quitter();
    
};
