#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

struct joueur//si mort p=40
    {
        int vict;
        int num;
        int cheval_1;
        int cheval_2;
        int vie_1;
        int vie_2;
        int nbrechevaux;
        int couleur;
        int depart;
    };
    typedef struct joueur S_jr;
    void afficherplateau(int tab[],S_jr *j1,S_jr *j2);
void initableau(int tab[]);
void color (int couleurDuTexte, int couleurDuFond);
void colorerchiffre(int tab[],int p,S_jr *j1,S_jr *j2);

int main()
{
    int plateau[34];
    S_jr j1={40,40,16,33,2,"","",1,0};
    S_jr j2={40,40,9,3,2,"","",2,0};
    initableau(plateau);
    plateau[16]=1;
    plateau[33]=1;
    plateau[9]=2;
    plateau[3]=2;
    afficherplateau(plateau,&j1,&j2);
    return 0;
}
//void afficherplateau(int tab[],S_jr *j1,S_jr *j2)
//{
//    int i,a=j1->cheval_1,b=j2->cheval_1;
//    printf("\n\n\n\n\n\n\n   |");
//    if(tab[0]==1||*(tab+0)==2)
//    {
//        if(tab[0]==1)
//        {
//            color(14,10);
//            if(a==0)
//            {
//                printf("1");
//            }
//            else
//            {
//                printf("2");
//            }
//
//        }
//
//        else
//            {
//
//                color(10,10);
//
//                if(b==0)
//                {
//                    printf("1");
//                }
//                else
//                {
//                    printf("2");
//                }
//
//            }
//    }
//    else
//       {
//        color(15,10);
//        printf("%d",tab[0]);
//       }
//    color(15,0);
//    printf("|");
//    for(i=1;i<16;i++)
//    {
//        colorerchiffre(tab,i,j1,j2);
//        printf("|");
//    }
//    printf("\n|");
//    colorerchiffre(tab,33,j1,j2);
//    printf("|       LES PETITS CANASSONS      |");
//    colorerchiffre(tab,16,j1,j2);
//    printf("|\n   |");
//    for(i=32;i>17;i--)
//    {
//        colorerchiffre(tab,i,j1,j2);
//        printf("|");
//    }
//    if(tab[17]==1||*(tab+17)==2)
//    {
//        if(tab[17]==1)
//        {
//            color(14,14);
//            if(a==0)
//            {
//                printf("1");
//            }
//            else
//            {
//                printf("2");
//            }
//
//        }
//
//        else
//            {
//
//                color(10,14);
//
//                if(b==0)
//                {
//                    printf("1");
//                }
//                else
//                {
//                    printf("2");
//                }
//
//            }
//    }
//    else
//       {
//        color(15,14);
//        printf("%d",tab[17]);
//       }
//    color(15,0);
//    printf("|");
//}
void afficherplateau(int tab[],S_jr *j1,S_jr *j2)
{
    int i,a=j1->cheval_1,b=j2->cheval_1;
    printf("\n\n\n\n\n\n\n   |");
    if(tab[0]==1||*(tab+0)==2)
    {
        if(tab[0]==1)
        {
            color(14,10);
            if(a==0)
            {
                printf("1");
            }
            else
            {
                printf("2");
            }

        }

        else
            {

                color(10,10);

                if(b==0)
                {
                    printf("1");
                }
                else
                {
                    printf("2");
                }

            }
    }
    else
       {
        color(15,10);
        printf(" ");
       }
    color(15,0);
    printf("|");
    for(i=1;i<16;i++)
    {
        colorerchiffre(tab,i,j1,j2);
        printf("|");
    }
    printf("\n|");
    colorerchiffre(tab,33,j1,j2);
    printf("|       LES PETITS CANASSONS      |");
    colorerchiffre(tab,16,j1,j2);
    printf("|\n   |");
    for(i=32;i>17;i--)
    {
        colorerchiffre(tab,i,j1,j2);
        printf("|");
    }
    if(tab[17]==1||*(tab+17)==2)
    {
        if(tab[17]==1)
        {
            color(14,14);
            if(a==0)
            {
                printf("1");
            }
            else
            {
                printf("2");
            }

        }

        else
            {

                color(10,14);

                if(b==0)
                {
                    printf("1");
                }
                else
                {
                    printf("2");
                }

            }
    }
    else
       {
        color(15,14);
        printf(" ");
       }
    color(15,0);
    printf("|");
}
void initableau(int tab[])
{
    int i;
    for (i=0;i<=33;i++)
    {
        tab[i]=0;
    }
}
void color (int couleurDuTexte, int couleurDuFond)
{
     HANDLE H = GetStdHandle(STD_OUTPUT_HANDLE);
     SetConsoleTextAttribute(H, couleurDuFond*16+couleurDuTexte);
}
//void colorerchiffre(int tab[],int p,S_jr *j1,S_jr *j2)
//{
//    if(tab[p]==1||*(tab+p)==2)
//    {
//        if(tab[p]==1)
//        {
//            color(14,0);
//            if((j1->cheval_1)==p)
//            {
//                printf("1");
//            }
//            else
//                printf("2");
//        }
//        else
//            {
//                color(10,0);
//                if((j2->cheval_1)==p)
//                {
//                    printf("1");
//                }
//                else
//                {
//                     printf("2");
//                }
//
//            }
//    }
//    else
//    {
//        printf("%d",tab[p]);
//    }
//
//    color(15,0);
//}
//
void colorerchiffre(int tab[],int p,S_jr *j1,S_jr *j2)
{
    if(tab[p]==1||*(tab+p)==2)
    {
        if(tab[p]==1)
        {
            color(14,0);
            if((j1->cheval_1)==p)
            {
                printf("1");
            }
            else
                printf("2");
        }
        else
            {
                color(10,0);
                if((j2->cheval_1)==p)
                {
                    printf("1");
                }
                else
                {
                     printf("2");
                }

            }
    }
    else
    {
        printf(" ");
    }

    color(15,0);
}
