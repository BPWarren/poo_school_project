class Pain: public Alimentaire{
    private:
        string type;
    public:
        Pain(string nom, string marque,float prixUnitaire, Date date_exp, string type);

        ~Pain();
        //constructeur de copie
        Pain(const Pain &);
        string getType();
        void setType(string new_type);
        void afficher() override;
        Pain& operator=(const Pain&);
};