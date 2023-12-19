//Declaration de la class
class Person{
    private:
        string name;
        string prenom;
        Date dateNaissance;
        
    public:
        //constructeurs
        Person();
        Person(string, string);
        Person(string , string, int , int , int );
        Person(string, string, Date &);
        //Acceseurs
        string getName();
        void setName(string);
        string getPrenom();
        void setPrenom(string);
        Date getDateNaissance();
        void setDateNaissance(int, int, int);
        void setDateNaissance(Date &);
        //destructeur
        ~Person();

        //constructeur de copie
        Person(const Person &);
        
        //operateur d'affectation
        Person &operator=(const Person &);
        //Display
        friend ostream &operator<<(ostream & , Person &);
};
