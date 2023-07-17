#include<stdio.h>
#include<conio.h>
int main()
{
    int x=1,y;
    printf("How many times you want to print?:");
    scanf("%d",&y);
    while (y>=x)
    {
        printf("%d\n",y);
        y--;
    }
    
}