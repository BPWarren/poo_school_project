class Article{
    protected:
        string nom;
        string marque;
        float prixUnitaire;
        //int nombre_article;
    public:
        //méthode virtuel
        Article(string, string, float);
        Article();
        ~Article();
        Article(const Article &);

        string getNom();
        string getMarque();
        float getPrixUnitaire();
        //int getNombreArticle();

        //setters
        void setNom(string);
        void setPrixUnitaire(float);
        void setMarque(string);
        //void setNombreArticle(int new_nb);

        Article & operator=(const Article &);
        
        //Operateur de comparaison

        bool operator==(const Article& a);

        virtual void afficher()=0;
        virtual void remplir();

};