/*
G.INFO1
ABODJI Kondi Kalèd
BOHM Maxwell
*/
class Article{
    protected:
        string nom;
        string marque;
        float prixUnitaire;
        int nombre;
    public:
        //méthode virtuel
        Article(string, string, float);
        Article();
        ~Article();
        Article(const Article &);

        string getNom();
        string getMarque();
        float getPrixUnitaire();
        int getNombreArticle();

        //setters
        void setNom(string);
        void setPrixUnitaire(float);
        void setMarque(string);
        void setNombreArticle(int new_nb);

        Article & operator=(const Article &);
        void afficher_short();
        
        //Operateur de comparaison

        bool operator==(const Article& a);

        virtual void afficher()=0;
        virtual string class_type()=0;
        virtual void remplir();

};