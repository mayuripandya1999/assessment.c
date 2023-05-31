#include<stdio.h>
#include<conio.h>
 int main()
{
    int choice,price,quantity,amount;
    char addanother;
    do{
        printf("1. Pizza......price= 180/pcs\n");
        printf("2. Burger......price= 100/pcs\n");
        printf("3. Dosa......price= 150/pcs\n");
        printf("4. Idli......price= 50/pcs\n");

        printf("\n");
        printf("Please enter your choice...");
        scanf("%d",&choice);

        printf("\n Enter your quantity: ");
        scanf("%d",&quantity);
        
        switch(choice)
        {
          case 1: price = 180;
          break;
          case 2: price = 100;
          break;
          case 3: price = 150;
          break;
          case 4: price = 50;
          break;
          default: printf("your choice is invalid...!");
          break;
        }
        amount= quantity * price;
        printf("\n Amount is : %d",amount);

       printf("\n Do you wat to continue y/n ?\n");
    //    scanf("%c", &addanother);
    }while(  addanother == 'y'|| addanother == 'Y');
}