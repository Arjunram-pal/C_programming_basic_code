#include<stdio.h>
#include<conio.h>
int main()
{
    int x;
    printf("Enter a month number(e.g. For Jan:1):");
    scanf("%d",&x);
    if (x==1 || x==3 || x==5 || x==7 || x==8 || x==10 || x==12)
    {
        printf("In this month have 31 Days");
    }
    else if (x==4 || x==6 || x==9 || x==11)
    {
        printf("In this month have 30 Days");
    }
    else if (x==2)
    {
        printf("In this month have 28/29 Days");
    }
    else
    {
        printf("Invalid month numbers");
    }
    getch();
    
}