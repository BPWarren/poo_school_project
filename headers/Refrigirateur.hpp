class Refrigirateur : public Electromenager{
    private :
        float volume;
    public:
        Refrigirateur(string nom, string marque, float prixU, float puiss, float volume);
        Refrigirateur(const Refrigirateur &);
        ~Refrigirateur();

        //Accesseurs
        void setVolume(float new_volume);
        float getVolume();

        void afficher() override;
        Refrigirateur& operator=(const Refrigirateur &);
};