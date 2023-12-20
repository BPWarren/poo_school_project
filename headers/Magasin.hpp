class Magasin 
{

private:
    friend class Gerant;
    Alimentaire** depot1_alimentaire;
    Electromenager** depot2_electromenager;
    Vestimentaire** depot3_vestimentaire;

    int taille_depot1;
    int taille_depot2;
    int taille_depot3;

public:
    Magasin();
    Magasin(const Magasin &);
    ~Magasin();

    void add_depot1(Alimentaire *aliment);
    void pop_depot1(int index);

    void add_depot2(Electromenager *electro);
    void pop_depot2(int index);

    void add_depot3(Vestimentaire *vest);
    void pop_depot3(int index);

    int getTailleDepot1();
    int getTailleDepot2();
    int getTailleDepot3();

    //void setTailleDepot1(int new_taille);
    //void setTailleDepot2(int new_taille);
    //void setTailleDepot3(int new_taille);

    Magasin& operator=(const Magasin &);
    
};
