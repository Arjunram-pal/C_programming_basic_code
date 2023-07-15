#include<stdio.h>
#include<conio.h>
int main()
{
    int y,z=1;
    printf("Enter a number:");
    scanf("%d",&y);
    while (y>=1)
    {
        z=y*z;
        y--;
    }
    printf("Factorial is %d",z);
    
}