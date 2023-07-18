#include<stdio.h>
#include<conio.h>
int main()
{
    int a,b,c;
    printf("Enter Sides of triangle(a,b,c):");
    scanf("%d %d %d",&a,&b,&c);
    if (a>b && a>c)
    {
        if (b+c>a)
        {
            printf("%d , %d and %d is valid triangles sides.",a,b,c);
        }
        else
        {
            printf("%d , %d and %d is not valid triangles sides.",a,b,c);
        }
            
    }  
    else if (b>a && b>c)
    {
        if (a+c>b)
        {
            printf("%d , %d and %d is valid triangles sides.",a,b,c);
        }
        else
        {
            printf("%d , %d and %d is not valid triangles sides.",a,b,c);
        }
            
    }
    else if (c>a && c>b)
    {
        if (b+a>c)
        {
            printf("%d , %d and %d is valid triangles sides.",a,b,c);
        }
        else
        {
            printf("%d , %d and %d is not valid triangles sides.",a,b,c);
        }
            
    }
    else
        {
            printf("%d , %d and %d is not valid triangles sides.",a,b,c);
        }
    getch();
}