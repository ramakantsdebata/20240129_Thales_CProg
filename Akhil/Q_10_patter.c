#include <stdio.h>

int main(){
    int n = 0,sp=0;
    printf("Enter number \n");
    scanf("%d", &n);
    for(int i =1; i<=n; i++){
    sp =n-i;
        while(sp != 0){
            printf("   ");
            sp--;
        }
        for(int j =i; j>=1; j--){
            printf(" %d ",j);
        }
        for(int j =1; j<=i; j++){
            printf(" %d ",j);
        }
            printf("\n");
    }
    return 0;
}