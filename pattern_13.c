#include <stdio.h>

/*
Enter the vlaue of n
5
1 2 3 4 5
2 3 4 5
3 4 5
4 5
5
*/

int main(){
    int n;
    printf("Enter the vlaue of n\n");
    scanf("%d",&n);

    for(int i=1;i<=n;i++){
        for(int j=i;j<=n;j++){
            printf("%d ",j);
        }
        printf("\n");
    }
    return 0;
}