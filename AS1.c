#include <stdio.h>
#include <stdlib.h>

//Question 1

int main()
{

int stamp,amount;

int s1=1;
int s2=2;
int s3=2;

int c1=2;
int c2=2;
int c3=2;
int c4=2;

char d;


printf("Welcome!please enter your preferences,\n");




while(1>0)
{

printf("\nPlease enter the stamp value(Value 10,15,25):"); //To get a clear output I have inserted new line before the input.
scanf("%d",&stamp);

if((s1>0)||(s2>0)||(s3>0))
{
if(stamp==10 || stamp==15 || stamp==25)
{
    printf("Amount tendering (Coin 05,10,25,50):");
    scanf("%d",&amount);

    printf("\n");

    int change=amount-stamp;

    if(amount==5 || amount==10 || amount==25 || amount==50)
    {
    if(stamp==10 && s1>0)
    {
        switch(amount)
        {
        case 10:printf("10 rupee stamp is dispensed\n\n");
                printf("No change\n");
                c2++;
                s1--;
                printf("\nAvailable stamps count :\n10 rupee stamps =%d\n15 rupee stamps =%d\n25 rupee stamps =%d\n\n",s1,s2,s3);
                printf("Available coins count  :\n05 rupee coins =%d\n10 rupee coins =%d\n25 rupee coins =%d\n50 rupee coins =%d\n",c1,c2,c3,c4);
                break;

        case 25:if(c1>0 && c2>0)
                {
                c1--;
                c2--;
                s1--;
                c3++;
                printf("10 rupee stamp is dispensed\n");
                printf("\nChange amount:%d\nDenomination :\n05 rupee coins =1\n10 rupee coins =1\n",change);
                printf("\nAvailable stamps count :\n10 rupee stamps =%d\n15 rupee stamps =%d\n25 rupee stamps =%d\n\n",s1,s2,s3);
                printf("Available coins count  :\n05 rupee coins =%d\n10 rupee coins =%d\n25 rupee coins =%d\n50 rupee coins =%d\n",c1,c2,c3,c4);
                }
                else
                {
                printf("No change\n");
                printf("Stamp is not dispensed\n");
                }
                break;

        case 50:if(c1>0 && c2>0 && c3>0)
            {
            c1--;
            c2--;
            c3--;
            s1--;
            c4++;
            printf("10 rupee stamp is dispensed\n");
            printf("\nChange amount:%d\nDenomination :\n05 rupee coins =1\n10 rupee coins =1\n25 rupee coins =1\n\n",change);
            printf("\nAvailable stamps count :\n10 rupee stamps =%d\n15 rupee stamps =%d\n25 rupee stamps =%d\n\n",s1,s2,s3);
            printf("Available coins count  :\n05 rupee coins =%d\n10 rupee coins =%d\n25 rupee coins =%d\n50 rupee coins =%d\n",c1,c2,c3,c4);
            }
            else
            {
                printf("No change\n");
                printf("Stamp is not dispensed\n");
            }
            break;
    default:printf("Insufficient amount tendered\n");
            printf("Stamp is not dispensed\n");
    }
    }


else if(stamp==15 && s2>0)
{
    switch(amount)
    {
    case 25:if(c2>0)
            {
            c2--;
            s2--;
            c3++;
            printf("15 rupee stamp is dispensed\n");
            printf("\nChange amount:%d\nDenomination :\n10 rupee coins =1\n\n",change);
            printf("\nAvailable stamps count :\n10 rupee stamps =%d\n15 rupee stamps =%d\n25 rupee stamps =%d\n\n",s1,s2,s3);
            printf("Available coins count  :\n05 rupee coins =%d\n10 rupee coins =%d\n25 rupee coins =%d\n50 rupee coins =%d\n",c1,c2,c3,c4);
            }
            else
            {
                printf("No change\n");
                printf("Stamp is not dispensed\n");
            }
            break;
    case 50:if(c2>0 && c3>0)
            {
            c2--;
            c3--;
            s2--;
            c4++;
            printf("15 rupee stamp is dispensed\n");
            printf("\nChange amount :%d\nDenomination :\n10 rupee coins =1\n25 rupee coins =1\n\n",change);
            printf("\nAvailable stamps count :\n10 rupee stamps =%d\n15 rupee stamps =%d\n25 rupee stamps =%d\n\n",s1,s2,s3);
            printf("Available coins count  :\n05 rupee coins =%d\n10 rupee coins =%d\n25 rupee coins =%d\n50 rupee coins =%d\n",c1,c2,c3,c4);
            }
            else
            {
                printf("No change\n");
                printf("Stamp is not dispensed\n");
            }
            break;
    default:printf("\nInsufficient amount tendered\n");
            printf("Stamp is not dispensed\n");

    }
}

else if(stamp==25 && s3>0)

{

switch(amount)
    {
    case 25:printf("25 rupee stamp is dispensed\n");
            printf("No change\n\n");
            s3--;
            c3++;
            printf("\nAvailable stamps count :\n10 rupee stamps =%d\n15 rupee stamps =%d\n25 rupee stamps =%d\n\n",s1,s2,s3);
            printf("Available coins count  :\n05 rupee coins =%d\n10 rupee coins =%d\n25 rupee coins =%d\n50 rupee coins =%d\n",c1,c2,c3,c4);
            break;
    case 50:if(c4>0)
            {
            c3--;
            s3--;
            c4++;
            printf("25 rupee stamp is dispensed\n");
            printf("\nChange amount :%d\nDenomination :\n25 rupee coins =1\n\n",change);
            printf("\nAvailable stamps count :\n10 rupee stamps =%d\n15 rupee stamps =%d\n25 rupee stamps =%d\n\n",s1,s2,s3);
            printf("Available coins count  :\n05 rupee coins =%d\n10 rupee coins =%d\n25 rupee coins =%d\n50 rupee coins =%d\n",c1,c2,c3,c4);
            }
            else
            {
                printf("No change\n");
                printf("Stamp is not dispensed\n");
            }
            break;
    default:printf("\nInsufficient amount tendered\n");
            printf("Stamp is not dispensed\n");


    }
}
else
{
printf("Stamp not available\n");
}

}
else
{
printf("Invalid coin value\n");
printf("Stamp is not dispensed\n");
}
}
else
{
printf("Invalid stamp requested\n");
printf("Stamp is not dispensed\n");
}
printf("\nDo you want to buy another stamp then type 'Y' or press any key :");
            scanf("%s",&d);
            if(d==121 || d==89)
            {
                continue;
            }
            else
            {
                printf("Thank you for using stamp vending machine");
                exit(0);
            }
}
printf("Sorry all stamps are not available in the machine\nPlease come again later\n");
exit(0);

}




return (0);

}
