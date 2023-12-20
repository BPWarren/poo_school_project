class Client : public Person
{
private:
    Article** panier;

public:
    // Constructeurs
    Client(string nom , string prenom , Date d , Article**);
    Client(const Client&);

    // Destructeur
    ~Client();

    // Accesseurs
    Article** get_panier();
    void set_panier(Article** );

    // Operateur d'affectation
    Client& operator=(const Client&);

    //Autres methodes
    void afficher_articles(const Magasin&); 
    void afficher_tout(const Magasin);
    void ajouter_article(Article* a);
    void supprimer_article();
    void vider_panier();
    float montant();
    void quitter();
    
};
