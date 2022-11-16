#include<stdio.h>
#include<conio.h>
int main()
{
  int i,j,n=5,m=0;
    for(i=1;i<=9;i++){
          i<=n?m++:m--;
        for(j=1;j<=9;j++){
           if(j>=n+1-m && j<=n-1+m)
                printf("*");
           else
            printf(" ");
        }printf("\n");
    }
 return 0;
}
