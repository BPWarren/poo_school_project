#include "entete.hpp"

int main(){

    Date date(12,12,2003);
    Magasin magasin;
    Gerant gerant("ABODJI", "K", date);
    Client client("CL", "zen", date);
    int run = 1;
    int run1 = 1;
    int run2=1;
    //Panier panier;
    
   /*
   TEST SUPPREME

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
    gerant.ajouter_article(magasin);
    gerant.afficher_tout(magasin);
    gerant.supprimer_article(magasin);
    gerant.afficher_tout(magasin);

    client.ajouter_article(magasin, gerant);
    client.contenu_panier();
    client.facture();
    client.supprimer_article();
    client.contenu_panier();
   */



    for(int i =0; i<2; i++){
        Alimentaire *pain = new Pain();
        Electromenager *tv = new Tv();
        //*pain = Pain();
        pain->setNombreArticle(5);
        pain->setNom("new_in" + to_string (i));
        pain->setPrixUnitaire(2);
        
        tv->setNombreArticle(40);
        tv->setPrixUnitaire(50);
        tv->setPuissance(20);

        magasin.add_depot1(pain);
        magasin.add_depot2(tv);
    }

    while(run){
        cout<<"START"<<endl;
        //psw  : LetMeIn@
        int user_choice;
        int exc=0;
        string psw="";
        cout<<endl<<"===========BIENVENU SUR G.STOCK==========="<<endl;
        cout<<"[1] Gerant"<<endl<<"[2] Client"<<endl;
        cout<<"Vous etes?(1/2) : ";
        cin>>user_choice;

        switch (user_choice)
        {
        case 1:
            cout<<endl<<"PASSWORD : ";
            cin>>psw;
            while(run1){
                if(psw==gerant.getMotDePasse()){
                    cout<<"=========TABLEAU DE BORD========"<<endl;
                    cout<<endl<<"[1] Ajouter un N.article"<<endl;
                    cout<<"[2] Article par category"<<endl;
                    cout<<"[3] Tous les articles"<<endl;
                    cout<<"[4] Supprimer un article"<<endl;
                    cout<<"[5] Quitter"<<endl;
                    cout<<endl<<"EXECUTE : ";
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
                        run1=0;
                        break;
                    
                    default:
                        cout<<endl<<"Excution choice invalide"<<endl;
                        break;
                    }

                    cout<<endl<<endl;
                }
                else{
                    cout<<endl<<"PERMISSION DENIED"<<endl;
                }
                
                
            }
            
            break;

        case 2:
            while(run2){
                cout<<"=========TABLEAU DE BORD========"<<endl;
                cout<<endl<<"[1] Ajouter un article au panier"<<endl;
                cout<<"[2] Article par category"<<endl;
                cout<<"[3] Tous les articles"<<endl;
                cout<<"[4] Supprimer Article du panier"<<endl;
                cout<<"[5] Vider le panier"<<endl;
                cout<<"[6] Mon panier"<<endl;
                cout<<"[7] Ma facture"<<endl;
                cout<<"[8] Quitter"<<endl;
                cout<<endl<<"EXECUTE : ";
                cin>>exc;
                switch (exc)
                {
                
                case 1:
                    client.ajouter_article(magasin, gerant);
                    break;
                case 2:
                    client.afficher_category(magasin, gerant);
                    break;
                case 3:
                    client.afficher_articles(magasin, gerant);
                    break;
                case 4:
                    client.supprimer_article();
                    break;
                case 5:
                    client.vider_panier();
                    break;
                case 6:
                    client.contenu_panier();
                    break;
                case 7:
                    client.facture();
                    break;
                
                case 8:
                    run2=0;
                    break;
                
                default:
                    cout<<endl<<"Excution choice invalide"<<endl;
                    break;
                }

                cout<<endl<<endl;
                
                
            }
            
            break;
        
        default:
            break;
        }

        cout<<endl<<"===Continue exc? 0/1 : ";
        cin>>run;

    }

    return 0;

}