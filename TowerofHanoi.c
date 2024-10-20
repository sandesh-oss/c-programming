#include <stdio.h>
void tower(int n,char s,char h, char d){
    if(n==0) return;
    tower(n-1,s,d,h);
    printf("%c -> %c\n",s,d);
    tower(n-1,h,s,d);
    return;
}
void main(){
    int n;
    printf("enter no. ");
    scanf("%d",&n);
    printf("moves : %d\n",(1<<n)-1);
    tower(n,'A','B','C');
}