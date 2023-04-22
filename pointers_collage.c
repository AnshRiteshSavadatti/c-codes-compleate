/*                  Pointers : data type which points at the address of a data type
 */

// #include<Stdio.h>

// int main(){
//     int a = 10;
//     int* p = &a;
//     int** p1 = &p;
//     printf("value of a :%d\n",a);
//     printf("address of a : %p\n",&a);
//     // printf("%d\n",p);
//     printf("value of a : %d\n",*p);
//     printf("address of a : %p\n",&*p);
//     // printf("%p\n",*p1);
//     printf("Value of a using double pointer %d\n",**p1);
//     printf("Adress using double pointer :%p\n",&**p1);
//     printf("adress of pointer p :%p",&*p1);
//     return 0;
// }


// //adding two numbers
// #include<Stdio.h>

// int sum(int* x, int* y, int* z){
//     *z = *x + *y;
//     return 0;
// }

// int main(){
//     int a, b, s;
//     int* p = &s;
//     printf("enter the value of a :");
//     scanf("%d",&a);
//     printf("enter the value of b :");
//     scanf("%d",&b);
//     sum(&a, &b, &s);
//     printf("%d is the sum of %d and %d",*p, a, b);
//     return 0;
// }


// // product of two numbers
// #include<Stdio.h>

// int product(int* x, int* y, int* z){
//     *z = *x * *y;
//     return 0;
// }

// int main(){
//     int a, b, s;
//     int* p = &s;
//     printf("enter the value of a :");
//     scanf("%d",&a);
//     printf("enter the value of b :");
//     scanf("%d",&b);
//     product(&a, &b, &s);
//     printf("%d is the sum of %d and %d",*p, a, b);
//     return 0;
// }



// // additon of two numbers
// #include<Stdio.h>

// void product(int* x, int* y, int* z){
//     *z = *x * *y;
    
// }

// int main(){
//     int a, b, s;
//     // int* p = &s;
//     printf("enter the value of a :");
//     scanf("%d",&a);
//     printf("enter the value of b :");
//     scanf("%d",&b);
//     product(&a, &b, &s);
//     printf("%d",s);
   
//     return 0;
// }





// // swapping witout using pointers
// #include<Stdio.h>

// int swap(int a, int b){
//     int temp = a;
//     a = b;
//     b = temp;
//     printf("%d\n%d",a,b);
// }

// int main(){
//    int a = 1;
//    int b = 3;
//     swap(a, b);
//     return 0;
// }





// // adding numbers using pointers
// #include<Stdio.h>

// int swap(int* a, int* b){
//     int temp = *a;
//     *a = *b;
//     *b = temp;
//   return 0
// }
   

// int main(){
//    int a = 1;
//    int b = 3;
//     swap(&a, &b);
//     printf("%d\n%d",a,b);
//     return 0;
// }




// // pointers in array
//  #include<Stdio.h>

// int main(){
//     int arr[5] = {1,2,3,4,5};
//     int* ptr = &arr;
//     printf("%p\n",arr);
//     printf("%p\n",ptr);
//     *(ptr+2) = 13;
//     printf("%d\n",arr[2]);
//     printf("%d\n",*(ptr+2));
// }






// // reading and printing arrays using pointers
// #include<stdio.h>

// int main(){
//     int arr[10];
//     int n = 5;
//     int* ptr = &arr;
//     for(int i=0; i<n; i++){
//         printf("enter the value of arr[%d]",i);
//         scanf("%d",&*(ptr+i));
//     }

//     for(int i=0; i<n; i++){
//         printf("%d\t",*(ptr+i));
//     }
// }



// // reading array using pointers using functions

// #include<Stdio.h>

// void read_array(int* ptr, int n){
//     for(int i=0; i<n; i++){
//         printf("enter the value of arr[%d] ",i);
//         scanf("%d",(ptr+i)); // &arr[i]
//     }
// }

// void print_array(int* ptr, int n){
//     for(int i=0; i<n; i++){
//         printf("%d\t",*(ptr+i));
//     }
// }
// void sum(int* ptr , int n , int* ptr2){
//     *ptr2 = 0;
//     for(int i =0; i<n; i++){
//         *ptr2 += *(ptr+i);
//     }
    
// }

// void reverse(int* ptr , int n){
//     for(int i=0; i<(n/2); i++){
//         int temp = *(ptr+i);
//         *(ptr+i) = *(ptr+n-i-1); 
//         *(ptr+n-i-1) = temp;
        
//     }
// }

// void sum_of_odd(int* ptr, int n, int*sum){
//      *sum = 0;
//     for(int i=0 ; i<n; i++){
//         if(*(ptr+i) % 2 != 0){
//             *sum += *(ptr+i);
//         }
        
//     }
// }


// int main(){
//     int n;
//     printf("enter the value of n ");
//     scanf("%d",&n);
//     int arr[100];
//     int* ptr = arr;
//     read_array(ptr , n);
//     print_array(ptr , n);
//     int summ;
//     int* s = &summ;
//     int sumodd;
//     int* s1 = &sumodd;
//     sum(ptr, n, s);
//     printf("\nThe sum is : %d\n ",summ);
//     reverse(ptr , n);
//     print_array(ptr , n);
//     sum_of_odd(ptr ,n ,s1);
//     printf("\nThe sum of odd numbers is : %d",sumodd);
//     return 0;
// }


// #include<Stdio.h>
// #include<Stdlib.h>

// int main(){
//     // This pointer will hold the base address of the block created
//     int* ptr;

// }





// // Program to calculate the sum of n numbers entered by the user

// #include <stdio.h>
// #include <stdlib.h>

// int main() {
//   int n, i, *ptr, sum = 0;

//   printf("Enter number of elements: ");
//   scanf("%d", &n);

//   ptr = (int*) malloc(n * sizeof(int));
 
//   // if memory cannot be allocated
//   if(ptr == NULL) {
//     printf("Error! memory not allocated.");
//     exit(0);
//   }

//   printf("Enter elements: ");
//   for(i = 0; i < n; ++i) {
//     scanf("%d", ptr + i);
//     sum += *(ptr + i);
//   }

// for(i = 0; i < n; i++) {
//     printf("%p\n",(ptr+i));
//   }

//   printf("Sum = %d", sum);
  
//   // deallocating the memory
//   free(ptr);

//   return 0;
// }



// #include<stdio.h>
// #include<Stdlib.h>

// int main(){
//     int n; 
//     int* ptr;
//     int* ptr2;
//     printf("Enter the value of n ");
//     scanf("%d",&n);
//     ptr = (int *)malloc(n*sizeof(int));
//     for(int i=0; i<n; i++){
//         printf("%d\n",*(ptr+i));
//     }
//     printf("\n");
//     for(int i=0; i<n; i++){
//         printf("%p\n",(ptr+i));
//     }

//     printf("\n\n");
//     ptr2 = (int*)calloc(n,sizeof(int));
//     for(int i=0; i<n; i++){
//         printf("%d\n",*(ptr2+i));
//     }
//     printf("\n");
//     for(int i=0; i<n; i++){
//         printf("%p\n",(ptr2+i));
//     }
//     free(ptr);
//     free(ptr2);
// }

