#include <stdio.h>

/*Enter the value of n
5
A B C D E
A B C D E
A B C D E
A B C D E
A B C D E
*/

 int main(){
     int n,k;
     printf("Enter the value of n\n");
     scanf("%d",&n);

     for(int i=1;i<=n;i++){
         k=65;
         for(int j=1;j<=n;j++){
             printf("%c ",k);
             k++;
         }
         printf("\n");  
     }
    return 0;
 }