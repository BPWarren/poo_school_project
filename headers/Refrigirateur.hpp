class Refrigirateur : public Electromenager{
    private :
        float volume;
        int nombre;
    public:
        Refrigirateur(string nom, string marque, float prixU, float puiss, float volume);
        Refrigirateur(const Refrigirateur &);
        ~Refrigirateur();

        //Accesseurs
        void setVolume(float new_volume);
        float getVolume();
        int getNombre();
        void setNombre(int new_nb);

        void afficher() override;
        Refrigirateur& operator=(const Refrigirateur &);
};