#include "entete.hpp"

int main(){

    Date date(12,12,2003);
    
    /*
    Lait lait("PEAK","DJAOUDA",12.5,date,1 );
    

    //lait.afficher();
    //pain.afficher();

    Chemise chemise("H-RP41" , "FILART", 95.99 , "XL" , "Rouge" , true );
    //chemise.afficher();

    Pantalon pant("H-RP42" , "Jean" , 80.00 , "M", "Noir" , 30 );
    //pant.afficher();

    

    Lait *p_lait = &lait;
    

    Chemise *p_chem = &chemise;
    Pantalon *p_pant = &pant;

    Tv *p_tv = &tv;
    Refrigirateur *p_ref = &ref;

    gerant.add_depot1(p_pain, mag);

    cout<<mag.getTailleDepot1()<<endl;

    gerant.add_depot2(p_tv, mag);
    gerant.add_depot2(p_ref, mag);

    gerant.add_depot3(p_chem, mag);
    gerant.add_depot3(p_pant, mag);

    //Lait *p_lait;
    Pain pain("Hobs","DUPIN",1.00,date,"Soja");
    Pain *p_pain = &pain;
    //Pain *p_pain;
    p_pain->remplir();

    p_pain->afficher();




    Pain *new_pain;
    new_pain = new Pain();
    new_pain->remplir();
    //magasin.add_depot1(new_pain);

    new_pain->afficher();

    
    */
    

  
   
    Tv tv("FHJ", "HP", 300, 34, 30);
    Refrigirateur ref("GHJ", "DELL", 200, 45, 78);
    
    Magasin magasin;
    Gerant gerant("ABODJI", "Kondi",date);

    
    

    Pain *new_pain;
    new_pain = new Pain();
    new_pain->remplir();
    magasin.add_depot1(new_pain);
    /*
    cout<<magasin.getTailleDepot1()<<endl;
    int taille1 = magasin.getTailleDepot1();
    cout<<endl<<taille1;
    bool l = tv==ref;
    cout<<boolalpha<<l<<endl;

    cout<<endl<<"end";
    */
    
    
    
    return 0;

}