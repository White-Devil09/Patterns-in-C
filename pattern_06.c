#include <stdio.h>

/*Enter the value of n
5
1
1 2
1 2 3
1 2 3 4
1 2 3 4 5
*/

 int main(){
     int n;
     printf("Enter the value of n\n");
     scanf("%d",&n);

     for(int i=1;i<=n;i++){
         for(int j=1;j<=i;j++){
             printf("%d ",j);
         }
         printf("\n");  
     }
    return 0;
 }