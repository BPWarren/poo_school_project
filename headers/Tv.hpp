class Tv : public Electromenager{
    private:
        float taille; //en pouces
    public:
        Tv(string nom, string marque, float prixU, float puiss, float taille);
        Tv(const Tv &);
        ~Tv();

        void setTaille(float new_taille);
        float getTaille();
        void afficher() override;

        Tv& operator=(const Tv &);
};