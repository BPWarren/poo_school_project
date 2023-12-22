#include "entete.hpp"

int main(){

    Date date(12,12,2003);
    Magasin magasin;
    Gerant gerant("ABODJI", "K", date);
    Client client("CL", "zen", date);
    Panier panier;
    
   
    for(int i =0; i<2; i++){
        Alimentaire *pain = new Pain();
        //*pain = Pain();
        pain->setNombreArticle(5);
        pain->setNom("new_in" + to_string (i));
        pain->setPrixUnitaire(2);
        cout<<endl<<pain->getNombreArticle();
        magasin.add_depot1(pain);
    }
    //client.afficher_category(magasin, gerant);
    client.ajouter_article(magasin, gerant);
    client.contenu_panier();
    client.facture();
    client.supprimer_article();
    client.contenu_panier();

    
    






    /*
     Alimentaire* pain = new Pain();
    cout<<pain->getNombreArticle();
    pain->setNombreArticle(5);
    cout<<endl<<pain->getNombreArticle();



    int user_choice;
    int exc=0;
    cout<<endl<<"===========BIENVENU SUR G.STOCK==========="<<endl;
    cout<<"[1] Gerant"<<endl<<"[2] Client"<<endl;
    cout<<"Vous etes?(1/2) : ";
    cin>>user_choice;

    switch (user_choice)
    {
    case 1:
        while(true){
            cout<<endl<<"[1] Ajouter un N.article"<<endl;
            cout<<"[2] Article par category"<<endl;
            cout<<"[3] Tous les articles"<<endl;
            cout<<"[4] Supprimer un article"<<endl;
            cout<<"[5] Quitter"<<endl;
            cout<<endl<<"EXCUTE : ";
            cin>>exc;
            switch (exc)
            {
            
            case 1:
                gerant.ajouter_article(magasin);
                break;
            case 2:
                gerant.afficher_category(magasin);
                break;
            case 3:
                gerant.afficher_tout(magasin);
                break;
            case 4:
                gerant.supprimer_article(magasin);
                break;
            case 5:
                exit(1);
                break;
            
            default:
                cout<<endl<<"Excution choice invalide"<<endl;
                break;
            }
            
        }
        
        break;
    
    default:
        break;
    }
    
    */
    

    return 0;

}