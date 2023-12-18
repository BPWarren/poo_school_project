//Declaration de la classe
class Date{
    private:
        int jour;
        int mois;
        int annee;

    public:
        Date();
        Date(int, int, int);
        //Contructeur de copie
        Date(const Date &);

        //Destructeur
        ~Date();
        int getJour();
        void setJour(int );

        int getMois();
        void setMois(int );

        int getAnnee();
        void setAnnee(int );

        void afficher();

        bool operator==(const Date &);
        bool operator!=(Date);
        bool operator>(Date);
        bool operator<(Date);
        Date & operator=(const Date &);
        friend ostream &operator<<(ostream &, Date &);

        void test();
};