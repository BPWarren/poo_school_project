#include "entete.hpp"

int main(){

    Date date(12,12,2003);
    Lait lait("PEAK","DJAOUDA",12.5,date,1 );
    Pain pain("Hobs","DUPIN",1.00,date,"Soja");

    //lait.afficher();
    //pain.afficher();

    Chemise chemise("H-RP41" , "FILART", 95.99 , "XL" , "Rouge" , true );
    //chemise.afficher();

    Pantalon pant("H-RP42" , "Jean" , 80.00 , "M", "Noir" , 30 );
    //pant.afficher();

    Tv tv("FHJ", "HP", 300, 34, 30);
    Refrigirateur ref("GHJ", "DELL", 200, 45, 78);

    Lait *p_lait = &lait;
    Pain *p_pain = &pain;

    Chemise *p_chem = &chemise;
    Pantalon *p_pant = &pant;

    Tv *p_tv = &tv;
    Refrigirateur *p_ref = &ref;

    Magasin mag;
    mag.add_depot1(p_lait);
    cout<<mag.getTailleDepot1()<<endl;
    mag.add_depot1(p_pain);

    cout<<mag.getTailleDepot1()<<endl;

    mag.add_depot2(p_tv);
    mag.add_depot2(p_ref);

    mag.add_depot3(p_chem);
    mag.add_depot3(p_pant);


    int taille1 = mag.getTailleDepot1();
    for(int i=0; i<taille1;i++){
        mag.pop_depot1(i);
        
    }

    return 0;

}