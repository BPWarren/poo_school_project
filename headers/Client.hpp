class Client
{
private:
    string nom;
    Article** panier;

public:
    // Constructeurs
    Client(Article**);
    Client(const Client&);

    // Destructeur
    ~Client();

    // Accesseurs
    string get_nom();
    Article** get_panier();
    void set_nom(string );
    void set_panier(Article** );

    // Operateur d'affectation
    Client& operator=(const Client&);

    //Autres methodes
    void afficher_articles(const Magasin&); 
    void afficher_tout(const Magasin);
    void ajouter_article();
    void supprimer_article();
    void vider_panier();
    float montant();
    void quitter();
    
};
