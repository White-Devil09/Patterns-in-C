#include <stdio.h>

/*
Enter the value of n
5
A 
A B 
A B C 
A B C D 
A B C D E 
*/

int main(){
    int n;
    printf("Enter the value of n\n");
    scanf("%d",&n);

    for(int i=n;i>=1;i--){
        int k=65;
        for(int j=n;j>=i;j--){
            printf("%c ",k);
            k++;
        }
        printf("\n");
    }
    return 0;
}