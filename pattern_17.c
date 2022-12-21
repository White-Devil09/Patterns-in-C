#include <stdio.h>

/*
Enter the value of n
5
A B C D E 
A B C D 
A B C 
A B 
A 
*/

int main(){
    int n;
    printf("Enter the value of n\n");
    scanf("%d",&n);

    for(int i=n;i>=1;i--){
        int k=65;
        for(int j=1;j<=i;j++){
            printf("%c ",k);
            k++;
        }
        printf("\n");
    }
    return 0;
}