#include <stdio.h>

/*
Enter the value of n
5
1 1 1 1 1
2 2 2 2 2
3 3 3 3 3
4 4 4 4 4
5 5 5 5 5 */

 int main(){
     int n;
     printf("Enter the value of n\n");
     scanf("%d",&n);

     for(int i=1;i<=n;i++){
         for(int j=1;j<=n;j++){
             printf("%d ",i);
         }
         printf("\n");  
     }
    return 0;
 }