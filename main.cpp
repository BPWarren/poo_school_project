#include "entete.hpp"

int main(){

    Date date(12,12,2003);
    Lait lait("PEAK","DJAOUDA",12.5,date,1 );
    Pain pain("Hobs","DUPIN",1.00,date,"Soja");

    lait.afficher();
    pain.afficher();

    Chemise chemise("H-RP41" , "FILART", 95.99 , "XL" , "Rouge" , true );
    chemise.afficher();

    return 0;

}