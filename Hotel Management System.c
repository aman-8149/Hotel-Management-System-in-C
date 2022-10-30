#include<stdio.h>
#include<stdlib.h>
#define FOUND 1
#define NOTFOUND 0
int total=0;
int grandt,t=0;
      //**************** ORDER SECTION *******************//
void order()
{
    FILE *fptr;
    fptr=fopen("order.txt","w");
    int choice,food,Y,y,x;

 do
    {
        printf("\n \n \n \n \t \t  ********************* WELCOME TO ORDER SECTION OF A FOOD **********************");
        printf("\n \n \n \t \t \t \t \t >>>>>>MENU FOR ORDER<<<<<<<<<");
        printf("\n \n \t \t \t \t \t 1.IDILI SAMBHAR      : RS 36");
        printf("\n \t \t \t \t \t 2.MISSAL PAV (2PAV)  : RS 48");
        printf("\n \t \t \t \t \t 3.SADA DOSA          : RS 40");
        printf("\n \t \t \t \t \t 4.UTTAPAM            : RS 48");
        printf("\n \t \t \t \t \t 5.SABUDANA VADA      : RS 55");
        printf("\n \t \t \t \t \t 6.LASSI              : RS 20");
        printf("\n \t \t \t \t \t 7.CHEESE SANDWICH    : RS 60");
        printf("\n \t \t \t \t \t 8.CLUB SANDWICH      : RS 85");
        printf("\n \t \t \t \t \t 9.POTATO MASALA GRIL : RS 90");
        printf("\n \t \t \t \t \t 10.PANEER MASALA GRIL: RS 95");
        printf("\n \t \t \t \t \t 11.CHEESE PIZZA      : RS 105");
        printf("\n \t \t \t \t \t 12.MASHROOM PIZZA    : RS 110 \n ");
        printf("ENTER YOUR CHOICE OF FOOD ITEMS:- ");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:printf("1.IDILI SAMBHAR      : RS 36");
                   fprintf(fptr,"\n  \t \t \t \t \t \t 1.IDILI SAMBHAR      : RS 36" );
                   x=36;
                   total=total+x;
                   break;
            case 2:printf("2.MISSAL PAV (2PAV)  : RS 48");
                   fprintf(fptr,"\n \t \t \t \t \t \t 2.MISSAL PAV (2PAV)  : RS 48" );
                   x=48;
                   total=total+x;
                   break;
            case 3:printf("3.SADA DOSA          : RS 40");
                   fprintf(fptr,"\n \t \t \t \t \t \t 3.SADA DOSA          : RS 40" );
                   x=40;
                   total=total+x;
                   break;
            case 4:printf("4.UTTAPAM            : RS 48");
                   fprintf(fptr,"\n \t \t \t \t \t \t 4.UTTAPAM            : RS 48" );
                   x=48;
                   total=total+x;
                   break;
            case 5:printf("5.SABUDANA VADA      : RS 55");
                   fprintf(fptr,"\n \t \t \t \t \t \t 5.SABUDANA VADA      : RS 55" );
                   x=55;
                   total=total+x;
                   break;
            case 6:printf("6.LASSI              : RS 20");
                   fprintf(fptr,"\n \t \t \t \t \t \t 6.LASSI              : RS 20" );
                   x=20;
                   total=total+x;
                   break;
            case 7:printf("7.CHEESE SANDWICH    : RS 60");
                   fprintf(fptr,"\n \t \t \t \t \t \t 7.CHEESE SANDWICH    : RS 60" );
                   x=60;
                   total=total+x;
                   break;
            case 8:printf("8.CLUB SANDWICH      : RS 85");
                   fprintf(fptr,"\n \t \t \t \t \t \t 8.CLUB SANDWICH      : RS 85" );
                   x=85;
                   total=total+x;
                   break;
            case 9:printf("9.POTATO MASALA GRIL : RS 90");
                   fprintf(fptr,"\n \t \t \t \t \t \t 9.POTATO MASALA GRIL : RS 90" );
                   x=90;
                   total=total+x;
                   break;
            case 10:printf("10.PANEER MASALA GRIL: RS 95");
                   fprintf(fptr,"\n \t \t \t \t \t \t 10.PANEER MASALA GRIL: RS 95" );
                   x=95;
                   total=total+x;
                   break;
            case 11:printf("11.CHEESE PIZZA      : RS 105");
                   fprintf(fptr,"\n \t \t \t \t \t \t 11.CHEESE PIZZA      : RS 105" );
                   x=105;
                   total=total+x;
                   break;
            case 12:printf("12.MASHROOM PIZZA    : RS 110 \n");
                   fprintf(fptr,"\n \t \t \t \t \t \t 12.MASHROOM PIZZA    : RS 110" );
                   x=110;
                   total=total+x;
                   break;
            case 13: break;
            default :printf("\n enter the valid number");
                     break;
        }
        grandt=total;
        printf("\n  FOR EXIT GIVE INPUT AS 13 \n \n ");
    }while(choice!=13);
    fclose(fptr);
}


                            // ***************DISCOUNT SECTION*****************//

void old()
{
    int disc;
    printf("\n \n \n \n \t \t \t \tfrom how many year does you visit here");
    scanf("%d",&disc);
     if(disc>=10)
     {
         total=total-(total*15/100);
         t=15;
     }
     else if(disc<=9 && disc>=6)
     {
        total=total-(total*10/100);
        t=10;
     }
     else if(disc<=5 && disc>=0)
     {
        total=total-(total*5/100);
        t=5;
     }
     else
     {
         printf("total =%d",total);
     }
}
void displatinum()
{
    char s1[100][100]={"AM223","AMxy2122","AM001","AM9920","AM22211","AMxc21"};
    int a,flag,j;
    char i[100];
    printf("\n enter your card number");
    scanf("%s",&i);
    flag=NOTFOUND;
    for(j=0;j<100;j++)
    {
        a=strcmp(&s1[j][0],i);
        if(a==0)
        {
            total=total-(total*15/100);
            t=15;
            flag=FOUND;
            break;
        }
    }
    if(flag==NOTFOUND)
    {
         printf("total =%d",total);
    }

}
void disgold()
{
    char s2[100][100]={"AM223","AMxy2122","AM001","AM9920","AM22211","AMxc21"};
    int a,flag,j;
    char i[100];
    printf("\n enter your card number");
    scanf("%s",&i);
    flag=NOTFOUND;
    for(j=0;j<100;j++)
    {
        a=strcmp(&s2[j][0],i);
        if(a==0)
        {
            total=total-(total*10/100);
            t=10;
            flag=FOUND;
            break;
        }
    }
    if(flag==NOTFOUND)
    {
         printf("total =%d",total);
    }

}
void disilver()
{
    char s1[100][100]={"AM223","AMxy2122","AM001","AM9920","AM22211","AMxc21"};
    int a,flag,j;
    char i[100];
    printf("\n enter your card number");
    scanf("%s",&i);
    flag=NOTFOUND;
    for(j=0;j<100;j++)
    {
        a=strcmp(&s1[j][0],i);
        if(a==0)
        {
            total=total-(total*5/100);
            t=5;
            flag=FOUND;
            break;
        }
    }
    if(flag==NOTFOUND)
    {
         printf("total =%d",total);
    }

}

                    //********************BILL SECTION*********************//

void bill()
{
    FILE *fptr;
    char ch[200];
    printf("\n \n \n \n \t \t \t \t ********************** MAURYA HOTELS ********************");
    printf("\n \n \t \t \t \t \t\t Building NO.2,Hinduja Apartment,\n \t \t \t \t \t \t \tBandra(W) Dist:Thane \n \t \t \t \t \t \t \t   PIN:4000111 \n \t \t \t \t \t \t    MOBILE: 8777888991/022-1488");
    printf("\n  \t \t \t \t===========================================================\n \n ");
    fptr=fopen("order.txt","r");
    if(fptr==NULL)
    {
        printf("FILE CANNOT FOUND");
        exit(1);
    }
    while(fgets(ch,199,fptr)!=NULL)
    {
        printf("%s",ch);
    }
    printf("\n \n  \t \t \t \t \t \t \t \tTOTAL  = %d /- RS\n ",grandt);
    printf("\n \t \t \t \t \t \t \t       discount= %d percent ",t);
    printf("\n \t \t \t \t \t \t \t    ____________________________");
    printf("\n  \t \t \t \t \t \t \t      GRAND TOTAL= %d /- RS",total);
    printf("\n \t \t \t \t \t \t \t    ____________________________ \n \n ");
    printf("\n   \t \t \t \t \t   THANK YOU FOR VISITING!!!!!!!!!!!!");
    printf("\n  \t \t \t \t===========================================================\n \n ");
     fclose(fptr);
}

                //***********************CATEGORIES SECTION***************//

void categories()
{
   int cat;
   char ord;
   printf("\n \n  \t \t \t ***************************** CATEGORIES SECTION **************************");
 do{
    printf("\n \n \n \n \t \t \t \t \t \t 1.SNACKS");
    printf("\n \t \t \t \t \t \t 2.DOSA'S");
    printf("\n \t \t \t \t \t \t 3.FAST FOODS");
    printf("\n \t \t \t \t \t \t 4.SANDWICHES");
    printf("\n \t \t \t \t \t \t 5.GRILLED SANDWICHES");
    printf("\n \t \t \t \t \t \t 6.PIZZA");
    printf("\n \n IF YOU WANT TO ORDER CLICK B IF NO CLICK N");
    ord=getch();
      if(ord==66 || ord==98)
     {
       order();
       system("cls");
        char q;
        printf("\n \n \n \n \t \t \t \t**************** GET DISCOUNTS *************************");
        printf("\n \n \n \n \t \t \t \t1.From how many years customer is visiting for this press Y");
        printf("\n \t \t \t \t 2. If you had a shop discount card press D \n");
        printf("\n \t \t \t \t IF YOU DON'T HAVE ANYTHIG PRESS ANY KEY \n");
        q=getch();
        if(q==121 || q==89)
        {
            old();
        }
        else if(q==68 || q==100)
        {
            card();
        }
        else
        {
            bill();
        }

        system("cls");

        bill();
       break;
     }
      else
     {
       printf("\n ENTER YOUR CHOICE OF CATEGORIES");
       scanf("%d",&cat);
       printf("\n INPUT 7 TO EXIT");
      switch(cat)
     {
       case 1:printf("\n \t \t \t \t \t \t 1.IDILI SAMBHAR      : RS 36");
              printf("\n \t \t \t \t \t \t 2.MISSAL PAV (2PAV)  : RS 48");
              printf("\n \t \t \t \t \t \t INPUT 7 TO EXIT");
              break;
       case 2:printf("\n \t \t \t \t \t \t 1.SADA DOSA          : RS 40");
              printf("\n \t \t \t \t \t \t 2.UTTAPAM            : RS 48");
              printf("\n \t \t \t \t \t \t INPUT 7 TO EXIT");
              break;
       case 3:printf("\n \t \t \t \t \t \t 1.SABUDANA VADA      : RS 55");
              printf("\n \t \t \t \t \t \t 2.LASSI              : RS 20");
              printf("\n \t \t \t \t \t \t INPUT 7 TO EXIT");
              break;
       case 4:printf("\n \t \t \t \t \t \t 1.CHEESE SANDWICH    : RS 60");
              printf("\n \t \t \t \t \t \t 2.CLUB SANDWICH      : RS 85");
              printf("\n \t \t \t \t \t \t INPUT 7 TO EXIT");
              break;
       case 5:printf("\n \t \t \t \t \t \t 1.POTATO MASALA GRIL : RS 90");
              printf("\n \t \t \t \t \t \t 2.PANEER MASALA GRIL: RS 95");
              printf("\n \t \t \t \t \t \t INPUT 7 TO EXIT");
              break;
       case 6:printf("\n \t \t \t \t \t \t 1.CHEESE PIZZA      : RS 105");
              printf("\n \t \t \t \t \t \t 2.MASHROOM PIZZA    : RS 110 \n");
              printf("\n \n \n \t \t \t \t \t \t INPUT 7 TO EXIT \n \n \n ");
              break;
       case 7:break;
       default:printf("enter proper category number .......");
               break;
      }
    }
  }while(cat!=7);
}

              // *********************************FAMOUS SECTION************************//
void famous()
{
    printf("\n \n  \t \t \t ***************************** FAMOUS SECTION **************************"),
    printf("\n \n \n  \t \t \t \t \t \t 1.POTATO MASALA GRIL : RS 90");
    printf("\n \t \t \t \t \t \t 2.PANEER MASALA GRIL : RS 95");
    printf("\n \t \t \t \t \t \t 3.SABUDANA VADA      : RS 55");
    printf("\n \t \t \t \t \t \t 4.LASSI              : RS 20 \n \n");
}
void exi()
{
     exit(1);
}


         //****************************** HOME PAGE *******************************//
void home()
{
    printf("\n \n \n \t \t \t****************************WELCOME TO MAURYA HOTEL************************************");
    printf("\n \n \n \t \t \t \t \t  1.FOR AN ORDER OF A FOOD PRESS A");
    printf("\n \n \t \t \t \t \t  2.TO SEE THE COLLECTION OF FOOD ITEMS PRESS C");
    printf("\n \n \t \t \t \t \t  3.TO SEE FAMOUS FOOD OF THE OUR HOTEL PRESS F");
    printf("\n \n \t \t \t \t \t  4.TO EXIT FROM THIS PRESS E");
    printf("\n \n \n \t \t \t \t \t PRESS YOUR CHOICE    ");
}
void card()
{
    char c;
    printf("********choice the card that you have************");
    printf("\n for platinum press P");
    printf("\n for gold press G");
    printf("\n for silver press S");
    c=getch();
    if(c==112 || c==80)
    {
        displatinum();
    }
    else if(c==71 || c==103)
    {
        disgold();
    }
    else if(c==83 || c==115)
    {
        disilver();
    }
    else
    {
        printf("give proper choice");
    }
}
int main()
{
    char k;
    home();
    k=getch();
    if(k==65 || k==97)
    {
        system("cls");
        order();
        system("cls");
        char q;
        printf("\n \n \n \n \t \t \t ******************** GET DISCOUNTS *************************");
        printf("\n \n \n \n \t \t \t \t1.For OLD customers press Y \n \n ");
        printf("\n \t \t \t \t 2. If you had a shop discount card press D \n");
        q=getch();
        if(q==121 || q==89)
        {
            old();
        }
        else if(q==68 || q==100)
        {
            system("cls");
            card();
        }
        else
        {
            bill();
        }

        system("cls");

        bill();
    }
    else if(k==67 || k==99)
    {
        system("cls");
        categories();
    }
    else if(k==70 || k==102)
    {
        system("cls");
        famous();
    }
    else if(k==69 || k==101)
    {
        system("cls");
        exit(1);
    }
    else
    {
        printf("\n \n give proper input");
    }
}
