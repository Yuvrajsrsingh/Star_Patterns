#include<stdio.h>
int main(){
    int n;
    scanf("%d", &n);
    // loop through each row
    for(int i=1;i<=n;i++){
        if(i==1){
            for(int j =0; j < (n-i); j++) {
                printf(" ");
            }
            printf("*");
        
        }
        else if(i == n){
            // NO leading spaces needed (n-i = 0)
            for(int j = 0; j < n; j++) {
                printf("*");
                printf(" ");//dont remove that gap - otherwise ur triangle will leak😂
            }

        }
        else {
            //for the leading spaces 
            for(int j = 0; j < (n-i); j++) {
                printf(" ");
            }
            printf("*");
            //for the hollow space
            for(int j = 0; j < (2*(i-1)-1); j++){
                printf(" ");
            }
            printf("*");
        }
        printf("\n");
    }
}