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



//char ka tringle 
#include<stdio.h>
#include<stdlib.h>

void print_char(int r){
    for(int i=1; i<=r; i++){
        for(int j=1; j<=r; j++){
            int c = 64+i;
            char d = (char)c;
            printf("%c\t"d);
        }
        printf("\n");
    }
}
int main(){
    int r;
    printf("enter the value of r");
    scanf("%d",&r);
    if(r>0){
        print_char(r);
    }
    else{
        printf("invalid input");
        exit(0);
    }
}