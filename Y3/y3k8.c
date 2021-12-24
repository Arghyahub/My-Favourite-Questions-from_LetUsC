/*
    1
   1 1
  1 2 1
 1 3 3 1
1 4 6 4 1
*/  
#include<stdio.h>

int fact(int a)
{
    if (a==0 || a==1)
        return 1;
    else
        return (a*fact(a-1));
}

int combi(int n, int r)
{
    int num=fact(n);
    int deno=fact(r)*fact(n-r);

    return (num/deno) ;
}
int main()
{
    // Numbers in the triangle represent Binomial coefficents
    
    int space=4;
    for (int n=0; n<5; n++)
    {
        // For Spaces 

        for (int j=1; j<=space; j++)
            printf(" ");
        space--;

        // Main Program

        for (int r=0; r<=n; r++)
        {
            printf("%d ",combi(n,r));
        }
        printf("\n");
    }
    return 0;
}