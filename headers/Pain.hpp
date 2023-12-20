class Pain: public Alimentaire{
    private:
        string type;
        int nombre;
    public:
        Pain(string nom, string marque,float prixUnitaire, Date date_exp, string type);
        Pain();

        ~Pain();
        //constructeur de copie
        Pain(const Pain &);
        string getType();
        int getNombre();
        void setNombre(int new_nb);
        void setType(string new_type);
        
        void afficher() override;
        void remplir() override;
        Pain& operator=(const Pain&);
};