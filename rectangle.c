#include <stdio.h>
int main(){ 
    int rows,i,j,cols;
    scanf("%d %d", &rows, &cols);
    for(i=0;i<rows;i++){
        for (j=0;j<cols;j++){
        printf("*");
    }
    printf("\n");
}
}