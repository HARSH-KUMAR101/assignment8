#include<stdio.h>
#include<conio.h>
int main()
{
  int i,j;
    for(i=1;i<=12;i++){
        for(j=1;j<=17;j++){

           if(i<4){
             if(j>=4-i && j<=5+i || j>=13-i && j<=14+i)
                 printf("*");
             else
               printf(" ");
           }
           else{
              if(j>=i-3 && j<=21-i)
                 printf("*");
              else
              printf(" ");
           }
        }printf("\n");
    }
 return 0;
}
