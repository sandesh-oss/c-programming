#include <stdio.h>
void main(){
    int n;
    printf("enter no. : ");
    scanf("%d",&n);
    for(int i=0; i<=n; i++){
        for(int k=1; k<=n-i; k++){
            printf("  ");
        }
        int first = 1;
        for(int j=0; j<=i; j++){
            printf("%3d ",first);
            first = first*(i-j)/(j+1);
        }
        printf("\n");
    }
}