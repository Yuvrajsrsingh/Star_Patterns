//star pattern 1 practice 
// *
// **
// ***
// ****
// *****


// #include<stdio.h>

// int main(){
//     int n;
//     scanf("%d",&n);
//     for(int i = 1;i<=n;i++){
//         for(int j =1;j<=i;j++){
//             printf("*");

//         }
//         printf("\n");
//     }

// }


//Star Pattern 2 Practice 
// ****
// ***
// **
// *
// #include <stdio.h>

// int main(){
//     int n;
//     scanf("%d",&n);
//     for(int i = n;i>0;i--){
//         for(int j = 1;j<=i;j++){
//             printf("*");
//         }
//         printf("\n");
//     }
// }


//Star Pattern right aligned inverted triangle
// ****
//  ***
//   **
//    *
// #include <stdio.h>
//  int main(){
//     int n;
//     scanf("%d",&n);
//     for(int i = 1;i<=n;i++){
//         for(int j =1;j<=i;j++){
//             printf(" ");
//         }
//         for(int k = n; k >= n-i+1; k--){
//                 printf("*");
//             }
//         printf("\n");
//     }
//  }

// #include <stdio.h>

// int main() {
//     int n;
//     scanf("%d", &n);

//     // i = current line (1 to n)
//     for (int i = 1; i <= n; i++) {
//         // print (i-1) spaces
//         for (int j = 1; j < i; j++) {
//             printf(" ");
//         }
//         // print (n - i + 1) stars
//         for (int k = 1; k <= n - i + 1; k++) {
//             printf("*");
//         }
//         printf("\n");
//     }

//     return 0;

// }
#include <stdio.h>


int main() {
    int n;
    scanf("%d", &n);
    for(int i=1;i<=n;i++){
        if(i==1){
            for(int j = 0; j < (n-i); j++) {
              printf(" ");
}
printf("*"); 
        }
     else if(i == n) {
  
    for(int j = 0; j < n; j++) {
        printf("*");
        printf(" ");
    }
}
else {
    
    for(int j = 0; j < (n-i); j++) {
        printf(" ");
    }
    
    printf("*");
  
    for(int j = 0; j < 2*(i-1)-1; j++) {
        printf(" ");
    }
    printf("*");
}
       
        printf("\n");
     }
     return 0;
}