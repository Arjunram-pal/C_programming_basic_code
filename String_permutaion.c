#include <stdio.h>
#include <string.h>

void swap(char* x, char* y)
{
	char temp;
	temp = *x;
	*x = *y;
	*y = temp;
}

void permute(char* a, int low, int high)
{
	int i;
	if (low == high){
		printf("%s\n", a);
    }
	else {
		for (i = low; i <= high; i++) {
			swap((a + low), (a + i));
			permute(a, low + 1, high);
			swap((a + low), (a + i)); 
		}
	}
    
}
int fact(int *n)
{
    int prod=1;
    for(int i=1;i<=*n;i++)
    prod*=i;

    return prod;
    
}

int main()
{
	char str[] = "ARJUN";
	int n = strlen(str);
	permute(str, 0, n - 1);
    printf("permutation: %d ",fact(&n));
	return 0;
}
