class Article{
    private:
        string nom;
        string marque;
        float prixUnitaire;
    public:
        //méthode virtuel
        Article(string, string, float);
        ~Article();
        Article(const Article &);

        string getNom();
        string getMarque();
        float getPrixUnitaire();

        //setters
        void setNom(string);
        void setPrixUnitaire(float);
        void setMarque(string);

        Article & operator=(const Article &);

        virtual void afficher()=0;

};