#include "entete.hpp"

int main(){
    /*

    Magasin magasin, magasin1;
    Pain *pain;
    pain = new Pain();
    pain->afficher();
    magasin.add_depot1(pain);
    cout<<"here";
    magasin1 = magasin;

    
    
    */
   Magasin magasin;
   
    cout<<magasin.getTailleDepot1();

    Date date(12,12,2003);
    Gerant gerant("ABODJI", "K", date);
    //Magasin magasin;
    for(int i=0; i<1;i++){
        gerant.ajouter_article(magasin);
    }
    cout<<magasin.getTailleDepot1();
    gerant.afficher_tout(magasin);


    return 0;

}