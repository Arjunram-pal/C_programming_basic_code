#include<stdio.h>
#include<conio.h>
int lcm_no(int ,int);
int main(){
    int x,y,z;
    printf("Enter a two number:");
    scanf("%d %d", &x,&y);
    z=lcm_no(x,y);
    printf("HCF:%d",z);

}
int lcm_no(int a,int b)
{
    int i,gcd;
    for (i = 1; i <=a && i<=b; i++)
    {
        if (a%i==0 && b%i==0)
        {
            gcd=i;
        }
        
    }

    return gcd;
    
}