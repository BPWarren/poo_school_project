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

        //Operateur d'affectation
        Electromenager& operator=(const Electromenager&);
        
        

};