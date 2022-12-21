#include <stdio.h>

int main(){
    int n;
    printf("Enter the value of n\n");
    scanf("%d",&n);

    for(int i=1;i<=n;i++){
        int k=65;
        for(int j=i;j>=1;j--){
            printf("%c ",k);
            k++;
        }
        printf("\n");
    }
    return 0;
}