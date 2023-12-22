class Electromenager : public Article{
    private :
        float puissance;
    public:

        Electromenager(string, string, float, float);
        Electromenager();
        
        //Constructeur de copie
        Electromenager(const Electromenager &);

        //Destructeur
        ~Electromenager();

        //Accesseurs
        float getPuissance();
        void setPuissance(float new_puissance);
        void remplir() override;
        string class_type() override;
        //Operateur d'affectation
        Electromenager& operator=(const Electromenager&);
        
        

};