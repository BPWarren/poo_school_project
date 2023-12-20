class Vestimentaire : public Article{
    private:
        string taille;
        string couleur;
    
    public:
        // Constructeurs
        Vestimentaire();
        Vestimentaire(string nom , string marque , float prixUnitaire , string taille, string couleur);
        Vestimentaire(const Vestimentaire& );// Constructeur de copie

        // Destructeur
        ~Vestimentaire();
        // Accesseurs
        string get_taille();
        string get_couleur();
        void set_taille(string );
        void set_couleur(string);

        //Operateur d'affectation
        Vestimentaire& operator=(const Vestimentaire&);

};