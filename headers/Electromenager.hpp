class Electromenager : public Article{
    private :
        float puissance;
    public:

        Electromenager(string, string, float, float);
        ~Electromenager();
        Electromenager(const Electromenager &);
        //Accesseurs
        float getPuissance();
        void setPuissance(float new_puissance);
        

};