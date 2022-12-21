#include <stdio.h>

/*Enter the value of n
5
5 4 3 2 1
5 4 3 2 1
5 4 3 2 1
5 4 3 2 1
5 4 3 2 1
*/

 int main(){
     int n;
     printf("Enter the value of n\n");
     scanf("%d",&n);

     for(int i=1;i<=n;i++){
         for(int j=n;j>=1;j--){
             printf("%d ",j);
         }
         printf("\n");  
     }
    return 0;
 }