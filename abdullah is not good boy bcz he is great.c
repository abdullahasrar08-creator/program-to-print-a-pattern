#include<stdio.h>
int main(){
    int n,i,j,k;
    printf("Enter value of n:");
    scanf("%i",&n);

    for(i=1;i<=n;i++){
        for(k=n-i;k<=n;k++){
        printf(" ");
        }
        for(j=n;j>=i;j--){
        printf("* ");
        }
        printf("\n");
    }
    return 0;
}
