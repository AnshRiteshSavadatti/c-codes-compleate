/*
                               pointers---->is a variable that  stores the memory adress and value of another variable 
*/


// #include<stdio.h>
// int main(){
//     int a = 10; 
//     printf("%p",&a);  // %p is format specifer to print address of a data
// }


// printing adress using pointers
// #include<stdio.h>
// int main(){
//     int a = 10; 
//     int* x = &a;
//     printf("%p",&x);  // %p is format specifer to print address of a data
// }



// changing the value of data type using a pointer
// #include<stdio.h>
// int main(){
//     int a = 10; 
//     int* x = &a;
//     *x = 7;
//     printf("%d",*x);  // pointer can change the value in a variable at which it points
// }


// swap two numbers using pointers
// #include<Stdio.h>
// void swap(int* x, int* y){
//     int temp = *x;
//     *x = *y;
//     *y = temp;
//     return;
// }

// int main(){
//     int a = 10;
//     int b = 19;
//     swap(&a, &b);
//     printf("the value of a is %d\n",a);
//     printf("the value of b is %d",b);
// }




// // double pointers
// #include<Stdio.h>
// int main(){
//     int a = 10;
//     int* x =&a; // int* x-->stores the value of address of integer
//     int** y = &x;// int** y--->stores the value of adress of pointer
//     printf("%d  %p  %p\n",a,&x,&y); // prints the adress of the variable
//     printf("%d  %d  %d",a,*x,**y);
//     return 0;
// }