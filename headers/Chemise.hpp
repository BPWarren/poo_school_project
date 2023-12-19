class Chemise: public Vestimentaire
{
private:
    bool manche;
public:
    // Consructeurs
    Chemise(string nom , string marque , float prixUnitaire , string taille, string couleur, bool manche);
    Chemise(const Chemise&);

    //Destructeur
    ~Chemise();
    
    //Accesseurs
    bool get_manche();
    void set_manche(float);

    //Operateur d'affectation
    Chemise& operator=(const Chemise&);

    // Fonction d'affichage
    void afficher() override;


};