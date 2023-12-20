class Chemise: public Vestimentaire
{
private:
    bool manche;
    int nombre;
public:
    // Consructeurs
    Chemise();
    Chemise(string nom , string marque , float prixUnitaire , string taille, string couleur, bool manche , int nombre);
    Chemise(const Chemise&);

    //Destructeur
    ~Chemise();
    
    //Accesseurs
    bool get_manche();
    void set_manche(float);
    int getNombre();
    void setNombre(int new_nb);

    //Operateur d'affectation
    Chemise& operator=(const Chemise&);

    // Fonction d'affichage
    void afficher() override;


};