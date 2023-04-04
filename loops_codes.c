/*
                 LOOPS
*/



// a program to print hello world n times

// #include<stdio.h>

// int main(){
//     int n;
//     printf("enter the value of n ");
//     scanf("%d",&n);
//     for(int i=0; i<n; i++){
//         printf("hello world\n");
//     }
//     return 0;
// }




//program to print  numbers
// #include<stdio.h>

// int main(){
//     int n;
//     printf("enter the value of n ");
//     scanf("%d",&n);
//     for(int i=0; i<=n; i++){
//         printf("%d\n",i);
//     }
//     return 0;
// }





//program to print even numbers
// #include<Stdio.h>
// int main(){
//     int n;
//     printf("enter the value of n ");
//     scanf("%d",&n);
//     for(int i=0; i<=n; i++){
//         if(i%2==0){
//         printf("%d\n",i);
//         }
//     }
//     return 0;
// }




//program to print tabel of number
// #include<Stdio.h>
// int main(){
//     int n;
//     printf("enter the value of n ");
//     scanf("%d",&n);
//     for(int i=n; i<=n*10; i+=n){   
//         printf("%d\n",i);
//     }
//     return 0;
// }



// //display this ap 1 3 5 7 upto n tearms
//  #include<Stdio.h>
// int main(){
//     int n;
//     printf("enter the value of n ");
//     scanf("%d",&n);
//     for(int i=1; i<=(2*n)-1; i+=2){   // here i<=2*n-1
//         printf("%d\n",i);
//     }
//     return 0;
// }



// print ap 4 7 10 13 16
// using the formula a+(n-1)*d   an= 3n+1

// #include<stdio.h>

// int main(){
//     int n;
//     printf("the value of n ");
//     scanf("%d",&n);
//     for(int i=4; i<=(3*n)+1; i+=3){
//         printf("%d\n",i);
//     }
// }

// printing ap with out formula 
//  print ap 4 7 10 13 16
// #include<stdio.h>

// int main(){
//     int n;
//     printf("the value of n ");
//     scanf("%d",&n);
//     int a = 4;
//     for(int i=1; i<=n; i++){
//         printf("%d\n",a);
//         a += 3;
//     }
// }



//printnig a  gp  1, 2, 4, 8....-+
// #include<stdio.h>

// int main(){
//     int n;
//     printf("the value of n ");
//     scanf("%d",&n);
//     int a = 1;
//     for(int i=1; i<=n; i++){
//         printf("%d\n",a);
//         a *= 2;
//     }
// }




//display gp 3 12 48..
// #include<stdio.h>

// int main(){
//     int n;
//     printf("the value of n ");
//     scanf("%d",&n);
//     int a = 3;
//     for(int i=1; i<=n; i++){
//         printf("%d\n",a);
//         a *= 4 ;
//     }
// }




// display th terms of ap 100 97 94 91 88 ..only positive tearms


// #include<stdio.h>
// #include<stdlib.h>

// int main(){
//     int n;
//     printf("the value of n ");
//     scanf("%d",&n);
//     int a = 100;
//     for(int i=1; i<=n; i++){
//         if(a<0){
//             printf("the no of positive tearms are %d ",i-1);//i-1 iss liye kyu ke vo i++ ho chuhka ho hoaga
//             exit(0);
//         }
//         printf("%d\n",a);
//         a -= 3 ;
//     }
// }


// // //display gp 100 50 25 ..
// #include<stdio.h>
// #include<stdlib.h>

// int main(){
//     int n;
//     printf("the value of n ");
//     scanf("%d",&n);
//     float a = 100;
//     for(int i=1; i<=n; i++){
//         printf("%f\n",a);
//         a /= 2;
//     }
// }



// to cheak weather the number is prime or not

// #include<stdio.h>
// #include<stdlib.h>

// void prime_number(int n){
//     int count =0;
//     for(int i=2; i<=n/2; i++){
//         if(n%i==0){
//             count++;
//             break;
//         }
//     }
//     if(count==0){
//         printf("the number is prime ");
//     }
//     else{
//         printf("the number is not prime ");
//         exit(0);
//     }
// }

// int main(){
//     int n;
//     printf("enter the number ");
//     scanf("%d",&n);
//     prime_number(n);
// }

// *****
// *****
// *****
// *****
// *****


// program to check weather the number is prime or not


// #include<stdio.h>
// #include<stdlib.h>

// void prime_number(int n){
//     int count =0;
//     for(int i=2; i<=n; i++){
//         for(int j=i+1; j<=n-1; j++){
//         if(i%j==0){
//              count++;
//                 break;
//         }
//         }
//         if(count==0){
//             printf("%d",i);
//         }
//     }
// }

// int main(){
//     int n;
//     printf("enter the number ");
//     scanf("%d",&n);
//     prime_number(n);
// }




// printing odd numbers using continue

// #include<stdio.h>

// int main(){
//     int n;
//     printf("enter the number ");
//     scanf("%d",&n);
//     for(int i=0; i<=n; i++){
//         if(i%2==0){
//             continue;
//     }
//     printf("%d\n",i);
// }
// return 0;
// }




// // program to count no of digits in a number
//  #include<stdio.h>

// int main(){
//     int n;
//     printf("enter the number ");
//     scanf("%d",&n);
//     int count = 0;
//     while(n !=0 ){
//         n /= 10;
//         count ++;
//     }
//          printf("the no of digits in number is %d\n",count);
   
// return 0;
// }



// program to print sum of digits

//  #include<stdio.h>

// int main(){
//     int n;
//     printf("enter the number ");
//     scanf("%d",&n);
//     int count = 0;
//     while(n !=0 ){
//        count = n % 10;
//        count += n;
//        n /=10;
        
//     }
//          printf("the sum of digits is %d\n",count);
   
// return 0;
// }





// program to take sum of even digits in a number
//  #include<stdio.h>

// int main(){
//     int n;
//     printf("enter the number ");
//     scanf("%d",&n);
//     int sum = 0;
//     while(n !=0 ){
//       int count=n % 10;
//        if(count % 2 == 0){
//        sum += count;
//        }
//        n /=10;
        
//     }
//          printf("the sum of even digits is %d\n",sum);
   
// return 0;
// }



// // a program to reverse the digits of a number
// #include<Stdio.h>

// int main(){
//     int n;
//     int r=0;
//     printf("enter a number");
//     scanf("%d",&n);
//     int c = n;
//     while(n>0){
//         int a = n%10;
//         r += a;
//         r *=10;
//         n=n/10;

//     }
//     int a= (r/10)+c;
//     printf("the reverse number is %d\n",r/10);
//     printf("the sum of number and its reverse is %d ",a);
// }



// //print the sum of 1-2+3-4+5-6.... upto n tearms
// #include<stdio.h>

// int main(){
//     int n;
//     printf("enter the number");
//     scanf("%d",&n);
//     int sum=0;
//     for(int i=1; i<=n; i++){
//         if(i%2==0) sum -=i;
//         else sum+=i;
//     }
//     printf("%d",sum);
// }

/*
formula if n is even then sum= -n/2
if n is odd sum= -n/2 +n
*/



//program to write factorial of a number

// #include<Stdio.h>

// int main(){
//     int n;
//     int p=1;
//     printf("enter a number ");
//     scanf("%d",&n);
//     for(int i=1; i<=n; i++){
//         p *=i;
//     }
//     printf("%d",p);
// }



// program to print fibonacci numbers of nth term

// #include<stdio.h>
// #include<Stdlib.h>


// int main(){
//     int n;
//     printf("enter the value of n");
//     scanf("%d",&n);
//     int a=1;
//     int b=1;
//     int sum=1;
//     for(int i=1; i<=n-2; i++){
//          sum = a+b;
//         a = b;
//         b = sum;
      
//     }
//     printf("the fibonacci number at %d is  %d",n,sum);
// }



// //program to print first n fibonacci numbers

// #include<stdio.h>

// int main(){
//     int n;
//     printf("enter the number ");
//     scanf("%d",&n);
//     int a=1;   
//     int b=1;
//     int sum=1;
//     printf("%d\t%d\t",a,b);
//     for(int i=1; i<=n-2; i++){
//         sum = a+b;
//         a = b;
//         b = sum;
//         printf("%d\t",sum);
//     }

// }




// program to write power of a number

// #include<stdio.h>

// int main(){
//     int b,p;
//     int product = 1;
//     printf("enter the base: ");
//     scanf("%d",&b);
//     printf("enter the power: ");
//     scanf("%d",&p);
//     if(p>0){
//     for(int i=1; i<=p; i++){
//         product *= b;
//     }
//     printf("answer is : %d",product);
//     }
//     if(p==0) printf("answer is : 1");
// }





// //printing ASCII values

// #include<stdio.h>

// int main(){
//     int a =64;
//     for(int i=65; i<=90; i++){
//         a +=1;
//         printf("ASCII value of %d is %c\n",a,a);
 
//  }
//  return 0;  
// }



// //program to find armstrong number

// #include<stdio.h>
// int main(){
//     int n;
//     printf("enter the number ");
//     scanf("%d",&n);
//     int m = n;
//     int sum = 0;
//      while(n>0){
//         int a = n % 10;
//         sum += a*a*a;
//         n /= 10;
//     }
//     if(sum == m) printf("%d is armstrong number ",m);
//     else printf("the number is not armstrong number");
// }







// //program to find armstrong number

// #include<stdio.h>
// int main(){
//     // int n;+
//     // printf("enter the number ");
//     // scanf("%d",&n);
//     int sum = 0;
//     for(int i=1; i<=500; i++){
//         int m = i;
//      while(i != 0){
//         int a = i % 10;
//         sum += a*a*a;
//         i /= 10;
//     }
//     if(sum == m) printf("%d is armstrong number\n",m);
//      }
//     // else printf("the number is not armstrong number");
// }










// // program to print aarmstrong number using nested while
// #include<stdio.h>  
  
// int main()  
// {  
//     int num, count = 1, rem, sum;  
  
//     while(count <= 500)  
//     {  
//         num = count;  
//         sum = 0;  
  
//         while(num)  
//         {  
//             rem = num % 10;  
//             sum = sum + (rem * rem * rem);  
//             num = num / 10;  
//         }  
  
//         if(count == sum)  
//         {  
//             printf("%d is a Armstrong number\n", count);  
//         }  
  
//         count++;  
//     }  
  
//      return 0;  
// }  




// //  question in esa one sem one exam 1409
// print the series  1 -1/2 +1/3 -1/4 + 1/5..... so on up to n tearms
// print the sum of first n terms, then n+1 terms, then n+2 tearms 
// after that calculate the average of these three 
// #include<Stdio.h>
// #include<stdlib.h>

// void sum(int n){
//     float sum = 0;
//     float j, k;
//     for(int i=1; i<=(n+2); i++){
//         if(i%2 == 0){
//         sum = sum -(float)1/i;
//         }
//         if(i%2 != 0){
//         sum = sum + (float)1/i;
//         }
//         if(i == n){
//             printf("sum of first %d terms is %f\n",i,sum);
//              j = sum;
//         }
//         if(i == (n+1)){
//             printf("sum of first %d terms is %f\n",i,sum);
//             k = sum;
//         }
//     }
//     printf("sum of first %d terms is %f\n",n+2,sum);
//     float avg = (j + k + sum)/3;
//     printf("the average of all three is %f",avg);
// }

// int main(){
//     int N; 
//     printf("enter the value of N\n");
//     scanf("%d",&N);
//     if(N<=0){
//         printf("Invalid input");
//         exit(0);
//     }
//     sum(N);
// }



// #include <stdio.h>

// int main() {
//     int n;
//     double sum = 0;
//     printf("Enter the number of terms in the series: ");
//     scanf("%d", &n);
//     if (n < 100) {
//         printf("Error: N should be greater than or equal to 100.");
//         return 1;
//     }
//     for (int i = 0; i < n; i++) {
//         int denominator = 2 * i + 1;
//         if (i % 2 == 0) {
//             sum += 4.0 / denominator;
//         } else {
//             sum -= 4.0 / denominator;
//         }
//     }
//     printf("Pi series %0.4f", sum);
//     return 0;
// }


// program to write numbers of 1 to 10 up to n; n is users input
// For eg..
// enter the number 5
// 1 2 3 4 5
// 2 4 6 8 10
// 3 6 9 12 15
// 4 8 12 16 20
// 5 10 15 20 25
// 6 12 18 24 30
// 7 14 21 28 35
// 8 16 24 32 40
// 9 18 27 36 45
// 10 20 30 40 50




// #include <stdio.h>
// #include <string.h>
// #include <math.h>
// #include <stdlib.h>

// int main() {
//  int n;
    
//     printf("enter the number ");
//     scanf("%d",&n);
//     if(1 <= n && n <= 20){
//     for(int i=1; i<=10; i++){
//         int k = i;
//         for(int j=1; j<=n; j++){
//             printf("%d ",k);
//             k += i;
//         }
//         printf("\n");
//     }
//     }
//     else{
//         printf("Invalid input.");
//         exit(0);
//     }
//     /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
//     return 0;
// }





// printing fibonaci triangle
// enter the value of n 5
// 0       1
// 0       1       1
// 0       1       1       2
// 0       1       1       2       3
// 0       1       1       2       3       5
#include<stdio.h>
int main(){
    int n; 
    printf("enter the value of n ");
    scanf("%d",&n);
    for(int i=0; i<n; i++){
        int a, b, sum;
         a = 0;
         b = 1;
         sum = 0;
         printf("%d\t%d\t",a,b);
         for(int j=0; j<i; j++){
            sum = a + b;
            a = b;
            b = sum;
            printf("%d\t",sum);
         }
         printf("\n");
    }
    return 0;
}

