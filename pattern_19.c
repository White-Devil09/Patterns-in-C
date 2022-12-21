#include <stdio.h>

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