class Lait : public Alimentaire{
    private:
        bool naturel;
    public :
        Lait(string nom, string marque,float prixUnitaire, Date date_exp, bool naturel);
        ~Lait();
        Lait(const Lait &);

        bool getNaturel();
        void setNaturel(bool new_naturel);

        void afficher() override;
        Lait & operator=(const Lait&);
};