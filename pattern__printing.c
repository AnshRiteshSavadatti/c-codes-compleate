/*  
        pattern printing
*/


// //for a simple rectangle
// #include<stdio.h>
// #include<stdlib.h>

// void print_stars(int r, int c){
//     for(int i=0; i<r; i++){
//         for(int j=0; j<c; j++){
//             printf("*\t");

//         }
//         printf("\n");
//     }
// }

// int main(){
//     int r;
//     int c;
//     printf("the number of rows ");
//     scanf("%d",&r);
//     printf("enter the number of cloumns ");
//     scanf("%d",&c);
//     if(r>0 && c>0){
//         print_stars(r, c);
//     }
//     else {
//         printf("invalid input ");
//         exit(0);
//     }
// }





// //pattern printing for numbers in rectangle
// #include<stdio.h>
// #include<stdlib.h>

// void print_numbers(int r, int c){
//     for(int i=0; i<r; i++){
//         for(int j=1; j<=c; j++){
//             printf("%d\t",j);
//         }
//         printf("\n");
//     }
// }

// int main(){
//     int r;
//     int c;
//     printf("the number of rows ");
//     scanf("%d",&r);
//     printf("enter the number of cloumns ");
//     scanf("%d",&c);
//     if(r>0 && c>0){
//         print_numbers(r, c);
//     }
//     else {
//         printf("invalid input ");
//         exit(0);
//     }
// }









// //code to print star triangle
// #include<stdio.h>
// #include<stdlib.h>

// void print_numbers(int r){
//     for(int i=1; i<=r; i++){
//         for(int j=1; j<=i; j++){
//             printf("*\t");
//         }
//         printf("\n");
//     }
// }

// int main(){
//     int r;
//     printf("the number of rows ");
//     scanf("%d",&r);
//     if(r>0){
//         print_numbers(r);
//     }
//     else {
//         printf("invalid input ");
//         exit(0);
//     }
// }





// //code to print ulta star triangle
// #include<stdio.h>
// #include<stdlib.h>

// void print_numbers(int r){
//     for(int i=r; i>=1; i--){
//         for(int j=i; j>=1; j--){
//             printf("*\t");
//         }
//         printf("\n");
//     }
//     /*we can use another logic here 
//     like for(int i=1; i<=r; i++){
//         for(int j=r-1-i; j<=r; j++ ) because i+j=r+1 in the pattern
//         for eg * * * *    here i=1 and r=4  therefore j=r+1-i;
//                * * *                                   j=4+1-1; 
//                * *
//                * 
//     }
    
    
//     */
// }

// int main(){
//     int r;
//     printf("the number of rows ");
//     scanf("%d",&r);
//     if(r>0){
//         print_numbers(r);
//     }
//     else {
//         printf("invalid input ");
//         exit(0);
//     }
// }





// //to print numbers in triangle
// #include<stdio.h>
// #include<stdlib.h>

// void print_numbers(int r){
//     for(int i=1; i<=r; i++){
//         for(int j=1; j<=i; j++){
//             printf("%d\t",j);
//         }
//         printf("\n");
//     }
// }

// int main(){
//     int r;
//     printf("the number of rows ");
//     scanf("%d",&r);
//     if(r>0){
//         print_numbers(r);
//     }
//     else {
//         printf("invalid input ");
//         exit(0);
//     }
// }







// //to print numbers in ulta triangle
// #include<stdio.h>
// #include<stdlib.h>

// void print_numbers(int r){
//     for(int i=r; i>=1; i--){
//         for(int j=1; j<=i; j++){
//             printf("%d\t",j);
//         }
//         printf("\n");
//     }
// }

// int main(){
//     int r;
//     printf("the number of rows ");
//     scanf("%d",&r);
//     if(r>0){
//         print_numbers(r);
//     }
//     else {
//         printf("invalid input ");
//         exit(0);
//     }
// }







// //triangel of odd numbers

// #include<Stdio.h>
// #include<stdlib.h>

// void print_numbers(int r){
//     for(int i=1; i<=r; i++){
//         int a=1;
//         for(int j=1; j<i; j++){
//         printf("%d\t",a);
//         a +=2;
//         }
//         printf("\n");
//     }
// }

// int main(){
//     int r;
//     printf("enter the number of rows ");
//     scanf("%d",&r);
//     if(r>0){
//         print_numbers(r);
//     }
//     else{
//         printf("Invalid input");
//         exit(0);
//     }
// }




// // char print karvana hai 

// #include<stdio.h>
// #include<stdlib.h>

// void print_char(int r){
//     for(int i=1; i<=r; i++){
//         for(int j=1; j<=r; j++){
//             int c = 64+j;
//             char d= (char)c;
//             printf("%c\t",d);
//         }
//         printf("\n");
//     }
// }
// int main(){
//     int r;
//     printf("enter the value of r");
//     scanf("%d",&r);
//     if(r>0){
//         print_char(r);
//     }
//     else{
//         printf("invalid input");
//         exit(0);
//     }
// }




// //char ka tringle 
// #include<stdio.h>
// #include<stdlib.h>

// void print_char(int r){
//     for(int i=1; i<=r; i++){
//         for(int j=1; j<=i; j++){
//             int c = 64+j;
//             char d = (char)c;
//             printf("%c\t",d);
//         }
//         printf("\n");
//     }
// }
// int main(){
//     int r;
//     printf("enter the value of r");
//     scanf("%d",&r);
//     if(r>0){
//         print_char(r);
//     }
//     else{
//         printf("invalid input");
//         exit(0);
//     }
// }




// #include <stdio.h>
// #include <stdlib.h>
// #include <math.h>

// void triangle(int n){
//     for(int i = 0 ; i<n ;i++){
//         for(int j = 0; j<=i; j++){
//             int temp = (i+j+1) * (i+j+1);
//             printf("%d\t",temp);
//         }
//         printf("\n");
//     }
// }

// void main() {
//     int n;
//     printf("enter the number");
//     scanf("%d",&n);
//     printf("\n");
//     if(n<=0){
//         printf("Invalid Input");
//         exit(0);
//     }
//     triangle(n);

// }







// // print the below series
// 1
// 4       9
// 16      25      36
// 49      64      81      100
// #include<stdio.h>

// int main(){
//         int r;
//         printf("enter the numbers of rows");
//         scanf("%d",&r);
//         int k = 1;
//         for(int i=0; i<r; i++){
//                 for(int j=0; j<=i; j++){
//                         printf("%d\t",k*k);
//                         k++;
//                 }
//                 printf("\n");
//         }
//         return 0;
// }








// printing last row and column
#include<Stdio.h>
#include<stdlib.h>

int main(){
 int n;
 printf("enter the value of n ");
 scanf("%d",&n);
 for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
                if(i==0 || i == n-1){
                        printf("*\t");
                }
                if(i != 0 && j == 0){
                        printf("*\t");
                       
                }
                if(i != n-1 && j == n-1){
                        printf("*\t");
                }
        }
        printf("\n");
 }
   return 0;
}