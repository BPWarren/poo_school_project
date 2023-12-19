class Pantalon: public Vestimentaire
{
private:
    float longueur;
public:
    // Consructeurs
    Pantalon(string nom , string marque , float prixUnitaire , string taille, string couleur, float longueur);
    Pantalon(const Pantalon&);

    //Destructeur
    ~Pantalon();
    
    //Accesseurs
    float get_longueur();
    void set_longueur(float);

    //Operateur d'affectation
    Pantalon& operator=(const Pantalon&);

    // Fonction d'affichage
    void afficher() override;


};


