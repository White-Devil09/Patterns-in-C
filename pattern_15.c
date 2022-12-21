#include <stdio.h>

/*
Enter the vlaue of n
5
5 4 3 2 1 
4 3 2 1 
3 2 1 
2 1 
1 
*/
int main(){
    int n;
    printf("Enter the vlaue of n\n");
    scanf("%d",&n);

    for(int i=n;i>=1;i--){
        for(int j=i;j>=1;j--){
            printf("%d ",j);
        }
        printf("\n");
    }
    return 0;
}