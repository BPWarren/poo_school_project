class Tv : public Electromenager{
    private:
        float taille; //en pouces
        int nombre;
    public:
        Tv(string nom, string marque, float prixU, float puiss, float taille);
        Tv();
        Tv(const Tv &);
        ~Tv();

        void setTaille(float new_taille);
        float getTaille();
        void afficher() override;
        void remplir() override;
        int getNombre();
        void setNombre(int new_nb);
        Tv& operator=(const Tv &);
};