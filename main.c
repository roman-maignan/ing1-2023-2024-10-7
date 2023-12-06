#include "header.h"

int main() {
    Plateau plateau;
    char choix;

    do {
        system("cls");

        afficherMenu();
        scanf(" %c", &choix);

        switch (choix) {
            case '0':
                affreglesdujeu();
                break;
            case '1':
                jouerNiveau(&plateau);
                system("cls");
                niv1();
                system("cls");
                niv2();
                system("cls");
                niv3();
                system("cls");
                niv4();
                break;
            case '2':
                sauvegarderPartie(plateau);
                break;
            case '3':
                motdepasse();
                //motdepasse();
                //break;
                /*printf("saisir mot de passe");
                char mot[10];
                scanf("%c",&mot);
                if (strcmp(mot,"niv1")==0){
                    system("cls");
                    niv1();
                }
                if(mot[0]=='n'){
                    if(mot[1]=='i'){
                        if(mot[2]=='v'){
                            if(mot[3]=='1'){
                                niv1();
                            }
                            if(mot[3]=='2'){
                                niv2();
                            }
                            if(mot[3]=='3'){
                                niv3();
                            }
                            if(mot[3]=='4'){
                                niv4();
                            }
                        }
                    }
                }*/
                break;

            case 'Q':
            case 'q':
                printf("Au revoir\n");
                break;
            default:
                printf("Choix invalide, veuillez réessayer.\n");
        }
        /*if (choix != '0') {
            printf("\nAppuyez sur Enter pour continuer...");
            getchar();
        }*/

    } while (choix != 'Q' && choix != 'q');

    return 0;
}
