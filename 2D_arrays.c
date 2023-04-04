/*
             2D Arrays

*/

// WAP to store marks of students in exam

// #include<Stdio.h>
// #include<stdlib.h>


// void read_array(int r, int c, int arr[100][100]){
//     for(int i=0; i<r; i++){
//         for(int j=0; j<c; j++){
//             scanf("%d",&arr[i][j]);
//         }
//     }
// }

// void print_array(int r, int c, int arr[100][100]){
//     for(int i=0; i<r; i++){
//         for(int j=0; j<c; j++){
//             printf("%d\t",arr[i][j]);
//         }
//         printf("\n");
//     }
// }

// int main(){
//     int r, c;
//     int arr[100][100];
//     printf("enter tne number of students  ie rows ");
//     scanf("%d",&r);
//     printf("enter the number os subjects  ir columns ");
//     scanf("%d",&c);
//     if(r>0 && c>0){
//         read_array(r, c, arr);
//         print_array(r, c, arr);
//     }
//     else{
//         printf("Invalid input");
//         exit(0);
//     }
// }







// // WAP to add two matrices

// #include<stdio.h>
// #include<stdlib.h>

// void read_array(int r, int c, int arr[100][100],int  brr[100][100]){
//     printf("enter the elements of first array ");
//     for(int i=0; i<r; ++i){
//         for(int j=0; j<c; ++j){
//             printf("enter arr%d%d ",i,j);
//             scanf("%d",&arr[i][j]);
//         }
//     }
    
    
// }
// void read_array2(int r, int c, int arr[100][100],int  brr[100][100]){
//     printf("enter the elements of second array ");
//     for(int i=0; i<r; i++){
//         for(int j=0; j<c; j++){
//             printf("enter brr%d%d",i,j);
//             scanf("%d",&brr[i][j]);
//         }
//     }
// }

// void add_array(int r, int c, int arr[100][100], int brr[100][100]){
//     for(int i=0; i<r; i++){
//         for(int j=0; j<c; j++){
//             arr[i][j] += brr[i][j];
//         }
//     }
// }

// void print_array(int r, int c, int arr[100][100]){
//     for(int i=0; i<r; i++){
//         for(int j=0; j<c; j++){
//             printf("%d\t",arr[i][j]);
//         }
//         printf("\n");
//     }
// }

// int main(){
//     int r, c; 
//     int arr[100][100], brr[100][100];
//     printf("enter the number of rows and columns ");
//     scanf("%d%d",&r,&c);
//     if(r>0 && c>0){
//         read_array(r, c, arr, brr);
//         read_array2(r, c, arr, brr);
//         add_array(r, c, arr, brr);
//         print_array(r, c, arr);
//     }
//     else{
//         printf("Invalid input");
//         exit(0);
//     }
// }






// adding two matrices with out using functions
// #include <stdio.h>
// int main() {
//   int r, c, a[100][100], b[100][100], sum[100][100], i, j;
//   printf("Enter the number of rows (between 1 and 100): ");
//   scanf("%d", &r);
//   printf("Enter the number of columns (between 1 and 100): ");
//   scanf("%d", &c);

//   printf("\nEnter elements of 1st matrix:\n");
//   for (i = 0; i < r; ++i)
//     for (j = 0; j < c; ++j) {
//       printf("Enter element a%d%d: ", i + 1, j + 1);
//       scanf("%d", &a[i][j]);
//     }

//   printf("Enter elements of 2nd matrix:\n");
//   for (i = 0; i < r; ++i)
//     for (j = 0; j < c; ++j) {
//       printf("Enter element b%d%d: ", i + 1, j + 1);
//       scanf("%d", &b[i][j]);
//     }

//   // adding two matrices
//   for (i = 0; i < r; ++i)
//     for (j = 0; j < c; ++j) {
//       sum[i][j] = a[i][j] + b[i][j];
//     }

//   // printing the result
//   printf("\nSum of two matrices: \n");
//   for (i = 0; i < r; ++i)
//     for (j = 0; j < c; ++j) {
//       printf("%d   ", sum[i][j]);
//       if (j == c - 1) {
//         printf("\n\n");
//       }
//     }

//   return 0;
// }





// // caluculating the sum of every element in array

// #include<stdio.h>
// #include<stdlib.h>

// void read_array(int r, int c, int arr[100][100]){
//     printf("enter the elements of first array ");
//     for(int i=0; i<r; i++){
//         for(int j=0; j<c; j++){
//             printf("enter arr%d%d ",i,j);
//             scanf("%d",&arr[i][j]);
//         }
//     }
// }


// void sum(int r, int c, int arr[100][100]){
//     int sum = 0;
//    for(int i=0; i<r; i++){
//         for(int j=0; j<c; j++){
//             sum += arr[i][j];
//         }
//     }
//     printf("the sum of every element in matrix is %d",sum);
// }


// int main(){
//     int r, c; 
//     int arr[100][100], brr[100][100];
//     printf("enter the number of rows and columns ");
//     scanf("%d%d",&r,&c);
//     if(r>0 && c>0){
//         read_array(r, c, arr);
//         sum(r, c, arr);
        
//     }
//     else{
//         printf("Invalid input");
//         exit(0);
//     }
// }


// // program to find the maximun  and minimum element in the matrix
// #include<stdio.h>
// #include<stdlib.h>
// #include<limits.h>


// void read_array(int r, int c, int arr[100][100]){
//     printf("enter the elements of first array ");
//     for(int i=0; i<r; i++){
//         for(int j=0; j<c; j++){
//             printf("enter arr%d%d ",i,j);
//             scanf("%d",&arr[i][j]);
//         }
//     }
// }

// void maximum(int r, int c, int arr[100][100]){
//     int max= INT_MIN;
//     int a,b;
//     for(int i=0; i<r; i++){
//         for(int j=0; j<c; j++){
//             if(max < arr[i][j]){
//                 max = arr[i][j];
//                 a = i;
//                 b = j;
//             }
//         }
//     }
//       printf("the maximum element is %d at index %d%d \n",max, a, b);
// }


// void minimum(int r, int c, int arr[100][100]){
//     int min= INT_MAX;
//     int a,b;
//     for(int i=0; i<r; i++){
//         for(int j=0; j<c; j++){
//             if(min > arr[i][j]){
//                 min = arr[i][j];
//                 a = i;
//                 b = j;
//             }
            
//         }
//     }
//       printf("the minimum element is %d at index %d%d ",min, a, b);
// }


// int main(){
//     int r, c; 
//     int arr[100][100];
//     printf("enter the number of rows and columns ");
//     scanf("%d%d",&r,&c);
//     printf("\n");
//     if(r>0 && c>0){
//         read_array(r, c, arr);
//         maximum(r, c, arr);
//         minimum(r, c, arr);
//     }
//     else{
//         printf("Invalid input");
//         exit(0);
//     }
// }






// // program to find maximum sum in an array


// #include<stdio.h>
// #include<stdlib.h>
// #include<limits.h>


// void read_array(int r, int c, int arr[100][100]){
//     printf("enter the elements of first array ");
//     for(int i=0; i<r; i++){
//         for(int j=0; j<c; j++){
//             printf("enter arr%d%d ",i,j);
//             scanf("%d",&arr[i][j]);
//         }
//     }
// }
// void print_array(int r, int c, int arr[100][100]){
//     for(int i=0; i<r; i++){
//         for(int j=0; j<c; j++){
//             printf("%d\t",arr[i][j]);
//         }
//         printf("\n");
//     }
// }

// void max_row(int r, int c, int arr[100][100]){
//    int max = INT_MIN;
//    int SUM= 0, d;
//     for(int i=0; i<r; i++){
//         int sum = 0;
//         for(int j=0; j<c; j++){
//             sum += arr[i][j];
//           if(max < sum);
//           SUM =sum;
//           d = i; 
//         }
//     }
//     printf("the row with maximum sum is %d in row %d",SUM,d);
// }


// int main(){
//     int r, c; 
//     int arr[100][100];
//     printf("enter the number of rows and columns ");
//     scanf("%d%d",&r,&c);
//     printf("\n");
//     if(r>0 && c>0){
//         read_array(r, c, arr);
//         print_array(r, c, arr);
//         max_row(r, c, arr);
//     }
//     else{
//         printf("Invalid input");
//         exit(0);
//     }
// }







// // program to print transpose of a matrix
// #include<stdio.h>
// #include<stdlib.h>
// #include<limits.h>


// void read_array(int r, int c, int arr[100][100]){
//     printf("enter the elements of first array ");
//     for(int i=0; i<r; i++){
//         for(int j=0; j<c; j++){
//             printf("enter arr%d%d ",i,j);
//             scanf("%d",&arr[i][j]);
//         }
//     }
// }

// void print_array(int r, int c, int arr[100][100]){
//     for(int i=0; i<r; i++){
//         for(int j=0; j<c; j++){
//             printf("%d\t",arr[i][j]);
//         }
//         printf("\n");
//     }

//     printf("\n\n");
//     for(int i=0; i<c; i++){   // this must change r, c;
//         for(int j=0; j<r; j++){
//             printf("%d\t",arr[j][i]);   // and this must change; 
//         }
//         printf("\n");
//     }
// }

// int main(){
//     int r, c; 
//     int arr[100][100];
//     printf("enter the number of rows and columns ");
//     scanf("%d%d",&r,&c);
//     printf("\n");
//     if(r>0 && c>0){
//         read_array(r, c, arr);
//         print_array(r, c, arr);
//     }
//     else{
//         printf("Invalid input");
//         exit(0);
//     }
// }



// // program to print transpose of a matrix  and storing it in another matrix
// #include<stdio.h>
// #include<stdlib.h>
// #include<limits.h>


// void read_array(int r, int c, int arr[100][100]){
//     printf("enter the elements of first array ");
//     for(int i=0; i<r; i++){
//         for(int j=0; j<c; j++){
//             printf("enter arr%d%d ",i,j);
//             scanf("%d",&arr[i][j]);
//         }
//     }
// }

// void print_array(int r, int c, int arr[100][100], int brr[100][100]){
//     for(int i=0; i<r; i++){
//         for(int j=0; j<c; j++){
//             printf("%d\t",arr[i][j]);
//         }
//         printf("\n");
//     }

//     printf("\n\n");
//     for(int i=0; i<c; i++){   // this must change r, c;
//         for(int j=0; j<r; j++){
//         brr[i][j] = arr[j][i];   // and this must change; 
//         }
//         printf("\n");
//     }

//     printf("\n");
//     for(int i=0; i<c; i++){   // this must change r, c;
//         for(int j=0; j<r; j++){
//             printf("%d\t",brr[i][j]);   // and this must change; 
//         }
//         printf("\n");
//     }
// }

// int main(){
//     int r, c; 
//     int arr[100][100], brr[100][100];
//     printf("enter the number of rows and columns ");
//     scanf("%d%d",&r,&c);
//     printf("\n");
//     if(r>0 && c>0){
//         read_array(r, c, arr);
//         print_array(r, c, arr, brr);
//     }
//     else{
//         printf("Invalid input");
//         exit(0);
//     }
// }









// // program to swap the elements in matrix and get the transpose for a square matrix
// // this is called in place transpose ie transpose by swapping of array elements
// #include<stdio.h>
// #include<stdlib.h>
// #include<limits.h>


// void read_array(int n, int arr[100][100]){
//     printf("enter the elements of first array ");
//     for(int i=0; i<n; i++){
//         for(int j=0; j<n; j++){
//             printf("enter arr%d%d ",i,j);
//             scanf("%d",&arr[i][j]);
//         }
//     }
// }

// void print_array(int n, int arr[100][100]){
//     for(int i=0; i<n; i++){
//         for(int j=0; j<n; j++){
//             printf("%d\t",arr[i][j]);
//         }
//         printf("\n");
//     }
//
//     for(int i=0; i<n; i++){  /// this must be changed
//         for(int j=i+1; j<n; j++){   // it can also be written as j=0; j<i; j++  ******
//             int temp = arr[i][j];
//             arr[i][j] = arr[j][i];
//             arr[j][i] = temp;
//         }
//     }
//     for(int i=0; i<n; i++){
//         for(int j=0; j<n; j++){
//             printf("%d\t",arr[i][j]);
//         }
//         printf("\n");
//     }
// }


// int main(){
//     int n; 
//     int arr[100][100];
//     printf("enter the number of row of a square matrix ");
//     scanf("%d",&n);
//     printf("\n");
//     if(n>0){
//         read_array(n, arr);
//         print_array(n, arr);
//     }
//     else{
//         printf("Invalid input");
//         exit(0);
//     }
// }






// // program to rotate the matrix by 90degree

// #include<stdio.h>
// #include<stdlib.h>
// #include<limits.h>


// void read_array(int n, int arr[100][100]){
//     printf("enter the elements of first array ");
//     for(int i=0; i<n; i++){
//         for(int j=0; j<n; j++){
//             printf("enter arr%d%d ",i,j);
//             scanf("%d",&arr[i][j]);
//         }
//     }
// }

// void print_array(int n, int arr[100][100]){
//     for(int i=0; i<n; i++){
//         for(int j=0; j<n; j++){
//             printf("%d\t",arr[i][j]);
//         }
//         printf("\n\n");
//     }

//     for(int i=0; i<n; i++){  /// this must be changed
//         for(int j=i+1; j<n; j++){   // it can also be written as j=0; j<i; j++
//             int temp = arr[i][j];
//             arr[i][j] = arr[j][i];
//             arr[j][i] = temp;
//         }
//     }
//     printf("the transpose is\n");
//     for(int i=0; i<n; i++){
//         for(int j=0; j<n; j++){
//             printf("%d\t",arr[i][j]);
//         }
//         printf("\n");
//     }
// }
// void reverse_array(int n, int arr[100][100]){
//         for(int i=0; i<n; i++){
//             int j=0;
//             int k= n-1;
//             while(j<k){
//                int temp = arr[i][j];
//                arr[i][j] = arr[i][k];
//                arr[i][k] = temp;
//                j++;
//                k--;
//             }
//         }
//         printf("the reversed array is\n");
//         for(int i=0; i<n; i++){
//         for(int j=0; j<n; j++){
//             printf("%d\t",arr[i][j]);
//         }
//         printf("\n");
//     }
// }


// int main(){
//     int n; 
//     int arr[100][100];
//     printf("enter the number of row of a square matrix ");
//     scanf("%d",&n);
//     printf("\n");
//     if(n>0){
//         read_array(n, arr);
//         print_array(n, arr);
//         reverse_array(n, arr);
//     }
//     else{
//         printf("Invalid input");
//         exit(0);
//     }
// }







// ******
// *******
// *******
// ********
// //         multiplication of matrix

// #include<Stdio.h>
// #include<stdlib.h>

// int main(){
//    int arr[2][3] = {{1, 2, 3},{3, 4, 5}};
//    int brr[3][2] = {{1, 2},{2, 3},{3, 4}};
//    int res[2][2];
//    int cr = 2; 
//    for(int i=0; i<2; i++){
//     for(int j=0; j<3;j++ ){
//         res[i][j] = 0;
//         for(int k=0; k<cr; k++){
//             res[i][j] += arr[i][k] * brr[k][j];
//         }
//     }
//    }

//    for(int i=0; i<cr; i++){
//     for(int j=0; j<cr; j++){
//         printf("%d\t",res[i][j]);
//     }
//     printf("\n");
//    }
// }





// // multiplication  of matrix taking input

// #include<stdio.h>
// #include<stdlib.h>

// int main(){
//     int m;
//     printf("enter the number of rows of first matrix ");
//     scanf("%d",&m);
//     int n;
//     printf("enter the number of columns of first matrix ");
//     scanf("%d",&n);
//     int p;
//     printf("enter the number of rows of second matrix ");
//     scanf("%d",&p);
//     int q;
//     printf("enter the number of columns of second matrix ");
//     scanf("%d",&q);
//     if(n != p){
//         printf("matrix multiplication not possible\nthe number of columns of first matrix is not equal to number of rows in second matrix ");
//         exit(0);
//     }
    
//     int arr[m][n];
//     int brr[p][q];

    //  printf("enter the elements of first matrix \n");
    // for(int i=0; i<m; i++){
    //     for(int j=0; j<n; j++){
    //         printf("enter the %d%d element of matrix",i,j);
    //         scanf("%d",&arr[i][j]);
    //     }
    // }

//      printf("enter the elements of second matrix \n");
//     for(int i=0; i<p; i++){  
//         for(int j=0; j<q; j++){
//             printf("enter the %d%d element of matrix",i,j);
//             scanf("%d",&brr[i][j]);
//         }
//     }

//     // multiplication of matrix
//     int cr = n;
//     int res[m][q];
//     for(int i=0; i<m; i++){ // number of rows of first matrix
//         for(int j=0; j<q; j++){  // number of columns of second matrix
//             res[i][j] = 0;
//             for(int k=0 ; k<cr; k++){
//                 res[i][j] += arr[i][k] * brr[k][j];
//             }
//         }
//     }

// for(int i=0; i<m; i++){
//     for(int j=0; j<q; j++){
//         printf("%d\t",res[i][j]);
//     }
//     printf("\n");
// }


// }





//wave printing


//   -------->
//   <-------|
//   |------->

// #include<stdio.h>
// #include<stdlib.h>

// int main(){
//     int m;
//     printf("enter the number of rows of matrix ");
//     scanf("%d",&m);
//     int n;
//     printf("enter the number of columns of matrix ");
//     scanf("%d",&n);

//     int arr[m][n];
//     printf("enter the elements of first matrix \n");
//     for(int i=0; i<m; i++){
//         for(int j=0; j<n; j++){
//             printf("enter the %d%d element of matrix ",i,j);
//             scanf("%d",&arr[i][j]);
//         }
//     }
//     /// printing in wave form
//     for(int i=0; i<m; i++){
//         if(i%2 == 0){
//         for(int j=0; j<n; j++){
//             printf("%d\t",arr[i][j]);
//         }
//         }
//         if(i%2 != 0){
//             for(int j=n-1; j>=0; j--){
//                 printf("%d\t",arr[i][j]);
//             }
//         }
//     }
    
//     }




// wave printing 2 

//   ^  |   ^
//   |  |   |
//   |  |   |

// #include<stdio.h>
// #include<stdlib.h>

// int main(){
//     int m;
//     printf("enter the number of rows of matrix ");
//     scanf("%d",&m);
//     int n;
//     printf("enter the number of columns of matrix ");
//     scanf("%d",&n);

//     int arr[m][n];
//     printf("enter the elements of first matrix \n");
//     for(int i=0; i<m; i++){
//         for(int j=0; j<n; j++){
//             printf("enter the %d%d element of matrix ",i,j);
//             scanf("%d",&arr[i][j]);
//         }
//     }

//     // printing the matrix
    // for(int i=0; i<m; i++){
    //     for(int j=0; j<n; j++){
    //         printf("%d\t",arr[i][j]);
    //     }
    //     printf("\n");
    // }
    // printf("\n\n");


//     /// printing in wave form
//     for(int i=0; i<n; i++){   // here i means no of columns
//         if(i%2 == 0){
//         for(int j=m-1; j>=0; j--){  // here m means no of rows
//             printf("%d\t",arr[j][i]);
//         }
//         }
//         if(i%2 != 0){
//             for(int j=0; j<m; j++){
//                 printf("%d\t",arr[j][i]);
//             }
//         }
//     }
    
//     }




// spiral printing
// ------>
// |---->|
// <-----|

// #include<stdio.h>
// #include<stdlib.h>

// int main(){
//     int m;
//     printf("enter the number of rows of matrix ");
//     scanf("%d",&m);
//     int n;
//     printf("enter the number of columns of matrix ");
//     scanf("%d",&n);

//     int arr[m][n];
//     printf("enter the elements of first matrix \n");
//     for(int i=0; i<m; i++){
//         for(int j=0; j<n; j++){
//             printf("enter the %d%d element of matrix ",i,j);
//             scanf("%d",&arr[i][j]);
//         }
//     }
//     // printing the matrix
//         for(int i=0; i<m; i++){
//         for(int j=0; j<n; j++){
//             printf("%d\t",arr[i][j]);
//         }
//         printf("\n");
//     }
//     printf("\n\n");
     

//      // wave form
//      int minr = 0;
//      int maxr = m-1;
//      int minc = 0;
//      int maxc = n-1;
//      int tne = n*m;
//      int count = 0; 
// }









// a c program to swap first a last row of a matrix
// #include<Stdio.h>
// #include<limits.h>

// void read_array(int r, int c, int arr[100][100]){
//     for(int i=0; i<r; i++){
//         for(int j=0; j<c; j++){
//             printf("enter the %d%d element of the array\n",i,j);
//             scanf("%d",&arr[i][j]);
//         }
//     }
//     return;
// }

// void print_array(int r, int c, int arr[100][100]){
//     for(int i=0; i<r; i++){
//         for(int j=0; j<c; j++){
//            printf("%d\t",arr[i][j]);
//         }
//         printf("\n");
//     }
//     return;
// }

// void swap_fl_row(int r, int c, int arr[100][100]){
//    for(int i=0; i<r; i++){
//     int j=0;
//     int k=r-1;
//      while(j<=c){
//         int temp = arr[i][j];
//         arr[i][j] = arr[k][j];
//         arr[k][j] = temp;
//         j++;
//      }
//      break;
//    }
//    return;
// }

// int main(){
//     int r, c;
//     int arr[100][100];
//     printf("enter the number of rows");
//     scanf("%d",&r);
//     printf("enter the number of colums");
//     scanf("%d",&c);
//     if(r>0 && c>0){
//         read_array(r, c, arr);
//         printf("\n the matrix entered is\n");
//         print_array(r, c, arr);
//         swap_fl_row(r, c, arr);
//         printf("the matrix after swapping first and row is \n");
//         print_array(r, c, arr);
//         return 1;
//     }
//     printf("Invalid input ");
//     return 0;

// }





// // a program to swap first and last column
// #include<Stdio.h>
// #include<limits.h>

// void read_array(int r, int c, int arr[100][100]){
//     for(int i=0; i<r; i++){
//         for(int j=0; j<c; j++){
//             printf("enter the %d%d element of the array\n",i,j);
//             scanf("%d",&arr[i][j]);
//         }
//     }
//     return;
// }

// void print_array(int r, int c, int arr[100][100]){
//     for(int i=0; i<r; i++){
//         for(int j=0; j<c; j++){
//            printf("%d\t",arr[i][j]);
//         }
//         printf("\n");
//     }
//     return;
// }

// void swap_fl_row(int r, int c, int arr[100][100]){
//    for(int i=0; i<r; i++){
//     int j=0;
//     int k=c-1;
//      while(j<=c){
//         int temp = arr[j][i];// here i & k represents columns
//         arr[j][i] = arr[j][k];// here j represents row
//         arr[j][k] = temp;
//         j++;
//      }
//      break;
//    }
//    return;
// }

// int main(){
//     int r, c;
//     int arr[100][100];
//     printf("enter the number of rows");
//     scanf("%d",&r);
//     printf("enter the number of colums");
//     scanf("%d",&c);
//     if(r>0 && c>0){
//         read_array(r, c, arr);
//         printf("\n the matrix entered is\n");
//         print_array(r, c, arr);
//         swap_fl_row(r, c, arr);
//         printf("the matrix after swapping first and last column is \n");
//         print_array(r, c, arr);
//         return 1;
//     }
//     printf("Invalid input ");
//     return 0;

// }






// // a program to add matrices using functions

// #include<Stdio.h>
// #include<stdlib.h>

// void read_array(int r, int c, int arr[100][100]){
//     for(int i=0; i<r; i++){
//         for(int j=0; j<c; j++){
//             printf("enter the %d%d element of a matrix",i,j);
//             scanf("%d",&arr[i][j]);
//         }
//     }
// }

// void print_array(int r, int c, int arr[100][100]){
//     for(int i=0; i<r; i++){
//         for(int j=0; j<c; j++){
//             printf("%d\t",arr[i][j]);
//         }
//         printf("\n");
//     }
//     printf("\n\n");
// }

// void add_array(int r, int c, int arr[100][100], int brr[100][100]){
//     for(int i=0; i<r; i++){
//         for(int j=0; j<c; j++){
//            arr[i][j] += brr[i][j];
//     }
// }
// }

// int main(){
//     int r1, r2, c1, c2;
//     int arr[100][100];
//     int brr[100][100];
//     printf("enter the number of rows and column of first matrix");
//     scanf("%d%d",&r1,&c1);
//     printf("enter the number of rows and column of second matrix");
//     scanf("%d%d",&r2,&c2);
//     if(r1==r2 && r1==c1 && r2==c2){
//         read_array(r1, c1, arr);
//         read_array(r2, c2, brr);
//         print_array(r1, c1, arr);
//         print_array(r2, c2, brr);
//         add_array(r1, c1, arr, brr);
//         print_array(r1, c1, arr);
//     }
//     else{
//         printf("Invalid input ");
//         exit(0);
//     }
    
// }




// // program in which second row and column elements are zero
// #include<Stdio.h>
// #include<stdlib.h>

// void read_array(int r, int c, int arr[100][100]){
//     for(int i=0; i<r; i++){
//         for(int j=0; j<c; j++){
//             printf("enter the %d%d element of a matrix",i,j);
//             scanf("%d",&arr[i][j]);
//         }
//     }
// }

// void print_array(int r, int c, int arr[100][100]){
//     for(int i=0; i<r; i++){
//         for(int j=0; j<c; j++){
//             printf("%d\t",arr[i][j]);
//         }
//         printf("\n");
//     }
//     printf("\n\n");
// }

// void execute(int r, int c, int arr[100][100]){
//         int i = 1;
//         int j = 0;
//         int max = r;
//         if(c>r) max = c;
//         while(j<max){
//             arr[i][j] = 0;
//             arr[j][i] = 0;
//             j++;
//         }
    
// }

// int main(){
//     int r,c;
//     int arr[100][100];
//     printf("enter the no of rows and columns");
//     scanf("%d%d",&r,&c);
//     read_array(r,c,arr);
//     print_array(r,c,arr);
//     execute(r,c,arr);
//     print_array(r,c,arr);
// }




// // arrange the arrays in increasing order
// #include<Stdio.h>
// #include<stdlib.h>

// void read_array(int r, int arr[100]){
//     for(int i=0; i<r; i++){
//             printf("enter the %d element of a matrix",i);
//             scanf("%d",&arr[i]);
        
//     }
// }

// void print_array(int r, int arr[100]){
//     for(int i=0; i<r; i++){
       
//             printf("%d\t",arr[i]);
//    }
//    printf("\n");

// }

// void incresing_order(int r, int a[100]){
//     for(int i=1; i<r; i++){
//         for(int j=0; j<r-i; j++ ){
//             if(a[j] > a[j+1]){
//                 int temp = a[j];
//                 a[j] = a[j+1];
//                 a[j+1] = temp;
//             }
//         }
//     }
// }
// // void incresing_order(int n, int x[100]){
// //     for(int i=1; i<n; i++){
// //         for(int j = 0 ; j <n-i ;j++){
// //             if(x[j] > x[j+1]){
// //                 int temp = x[j];
// //                 x[j] = x[j+1];
// //                 x[j+1] = temp;
                
// //             }
             
// //     }     
// //   }
// // }

// void decresing_order(int r, int a[100]){
//     for(int i=1; i<r; i++){
//         for(int j=0; j <r-1; j++){
//             if(a[j] < a[j+1]){
//                 int temp = a[j];
//                 a[j] = a[j+1];
//                 a[j+1] = temp;
//             }
//         }
//     }
// }

// int main(){
//     int r;
//     int arr[100];
//     printf("enter the number of elements");
//     scanf("%d",&r);
//     read_array(r, arr);
//     print_array(r, arr);
//     incresing_order(r, arr);
//     print_array(r, arr);
//     decresing_order(r, arr);
//     print_array(r, arr);
//     return 0;
    

// }