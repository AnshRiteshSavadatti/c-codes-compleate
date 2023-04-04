/*
           Arrays
*/


// array to print marks below 35

// #include<stdio.h>
// #include<stdlib.h>

// void read_array(int arr[], int n){
//   for(int i=0; i<n; i++){
//     scanf("%d",&arr[i]);
//   }
// }

// void print_array(int arr[], int n){
//     for(int i=0; i<n; i++){
//         printf("%d ",arr[i]);
//     }
//        printf("\n");
// }

// void print_marks_below35(int arr[], int n){
//     for(int i=0; i<n; i++){
//         if(arr[i]<35){
//         printf("the marks below 35 of students is %d ",arr[i]);
//     }
//     }
// }

// int main(){
//     int n;
//     int arr[100];
//     printf("enter the number of students");
//     scanf("%d",&n);
//     read_array(arr, n);
//     print_array(arr,n);
//     print_marks_below35(arr,n);
// }







// // program to print the adddress of arrays
// #include<stdio.h>
// #include<stdlib.h>

// int main(){
//     int arr[5] = {1, 2, 3, 4, 5};  // naimng of address is done according to hexa decimal system which is 
//     for(int i=0; i<5; i++){        //   0, 1, 2, 3, 4, 5, 6, 7, 8, 9, a, b, c, d, e, f
//         printf("%p\n",&arr[i]);
//     }
// }






// program to print the sum of given arrays
// #include<stdio.h>
// #include<stdlib.h>

// int main(){
//     int arr[5] = {1, 2, 3, 4, 5};
//     int sum = 0;
//     for(int i=0; i<5; i++){
//       sum += arr[i];
//     }
//     printf("%d is the sum of array",sum);
//     }





// program to calculate the product of array
// #include<stdio.h>
// #include<stdlib.h>

// int main(){
//     int arr[5] = {1, 2, 3, 4, 5};
//     int product = 1;
//     for(int i=0; i<5; i++){
//       product *= arr[i];
//     }
//     printf("%d is the product of array",product);
//     }


// //program to find the maximun value of array
// #include<stdio.h>
// #include<stdlib.h>

// int main(){
//     int arr[5] = {1, 2, 3, 4, 5};
//     int max = arr[0];
//     for(int i=0; i<5; i++){
//       if(max<arr[i]){
//         max = arr[i];
//       }
//     }
//     printf("%d is the maximun element of array",max);
//     }





// // odd even array
// #include<stdio.h>
// #include<stdlib.h>

// int main(){
//     int arr[5] = {1, 2, 3, 4, 5};
//     for(int i=0; i<5; i++){
//         if(i % 2==0) arr[i] *= 2;
//         else arr[i] += 10;
//     }

//     for(int i=0; i<5; i++){
//         printf("%d\t",arr[i]);
//     }

//     }




  //count the given number of times an element has reapeated in an array
// #include<stdio.h>
// #include<stdlib.h>

// int main(){
//     int arr[10] = {1, 2, 3, 4, 5, 6, 6, 6, 9, 10};
//     int n;
//     printf("enter the number ");
//     scanf("%d",&n);
//     int count = 0;
//     for(int i=0; i<10; i++){
//         if(arr[i]==n) count++;  
//       }
//       printf("%d is reapeater %d times ",n,count);


//     }




// // find the difference between sum of arrays at even indices and odd indices
 
//  #include<Stdio.h>
//  #include<stdlib.h>

//  int main(){
//      int arr[10] = {1, 2, 3, 4, 5, 6, 6, 6, 9, 10};
//      int diff;
//      int sum = 0;
//      for(int i=0; i<10; i++){
//         if(i%2==0) sum +=arr[i];
//         else sum -=arr[i];
//      }

//      if(sum<0) printf("the difference is %d",-sum);
//      else printf("the difference is %d",sum);
//  }




// // find the total number of pairs in array whose given sum is equal to n

//  #include<Stdio.h>
//  #include<stdlib.h>

//  int main(){
//      int arr[10] = {1, 2, 3, 4, 5, 6, 6, 6, 9, 10};
//      int n;
//      printf("enter the number ");
//      scanf("%d",&n);
//      int count = 0; 
//      for(int i=0; i<9; i++){
//         for(int j=i+1; j<10 ; j++){
//             if(n==arr[i]+arr[j]) {
//                 count++;
//                   printf("(%d,%d)\n",arr[i],arr[j]);
//                   }
//         }
//      }
//      printf("the total number of pairs whose sum is %d is %d",n,count);
   
//  }






// //  find the total number of triplets in array whose given sum is equal to n

//   #include<Stdio.h>
//  #include<stdlib.h>

//  int main(){
//      int arr[10] = {1, 2, 3, 4, 5, 6, 6, 6, 9, 10};
//      int n;
//      printf("enter the number ");
//      scanf("%d",&n);
//      int count = 0; 
//      for(int i=0; i<10-2; i++){
//         for(int j=i+1; j<10-1 ; j++){
//             for(int k=i+2; k<10; k++){
//             if(n==arr[i]+arr[j]+arr[k]) {
//                 count++;
//                   printf("(%d,%d,%d)\n",arr[i],arr[j],arr[k]);
//              }
//            }
//         }
//      }
//      printf("the total number of pairs whose sum is %d is %d",n,count);
   
//  }




// // to find the second largest number in the array

// #include<Stdio.h>
// #include<limits.h>

// int main(){
//     int arr[10] = {1, 2, 3, 10, 5, 6, 8, 7, 9, 4};
//     int max = INT_MIN;
//     int smax = INT_MIN;
//     for(int i=0; i<10; i++){
//         if(arr[i]>max){
//             max = arr[i];
//         }
//     }
//     for(int i=0; i<10; i++){
//         if(arr[i]>smax && arr[i] != max ){
//             smax = arr[i];
//         }
//     }
//     printf("%d is second largest element ",smax);

// }







// // wap to copy a array in another array in reverse order

// #include<stdio.h>

// int main(){
//     int arr[10] = {1, 2, 3, 10, 5, 6, 8, 7, 9, 4};
//     int brr[10];
//     for(int i=0; i<10; i++){
//        brr[i]=arr[9-i];
//     }
//     for(int i=0; i<10; i++){
//        printf("%d\t",brr[i]);
//     }
// }




// // wap to reverse an array without using extra array

// #include<stdio.h>

// int main(){
//     int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
//     for(int i=0; i<10; i++){
//         printf("%d\t",arr[i]);
//      }
//      printf("\n");
//      for(int i=0; i<5; i++){
//         int temp = arr[i];
//         arr[i]=arr[9-i];
//         arr[9-i]=temp;
//      }

//       for(int i=0; i<10; i++){
//         printf("%d\t",arr[i]);
//      }
// }



// // check if the array is palindrome
// #include<Stdio.h>

// int main(){
//     int count = 0;
//     int arr[10] = {1, 2, 3, 4, 5, 5, 4, 3, 2, 1};
//     for(int i=0; i<5; i++){
//         if(arr[i]==arr[9-i]) count++;
//      }
//      if(count ==0 )   printf("array is not a palindrome");
//      else printf("array is a palindrome"); 
     
// }





// // reverse a part of array

// #include<Stdio.h>

// int main(){
//     int count = 0;
//     int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
//     // reverse only elements of indices 1 to 4
//     for(int i=1,j=4; i<j; i++,j--){
//         int temp = arr[i];
//         arr[i]=arr[j];
//         arr[j]=temp;
//      }
//      for(int i=0; i<10; i++){
//         printf("%d\t",arr[i]);
//      }
     
// }




// // program to reverse an array in steps

// #include<stdio.h>

// int main(){
//     int arr[10]={1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
//     int k;
//     printf("enter the value of k");
//     scanf("%d",&k);
//     k /= 10;
//     for(int i=0; i<5; i++){
//         int temp = arr[i];
//         arr[i] = arr[9-i];
//         arr[9-i] = temp;
        
//     }
//     // to rotate the array
//     for(int i=0; i<k/2; i++){
//         int temp = arr[i];
//         arr[i] = arr[k-1];
//         arr[k-1] = temp;
//     }

//      // to rotate the array
//     for(int i=k, j=10; i<j; i++,j--){
//         int temp = arr[i];
//         arr[i] = arr[10-i];
//         arr[10-i] = temp;
//     }


//    for(int i=0; i<10; i++){
//     printf("%d\t",arr[i]);
//    }
// }




// // to check weather the given number is present in the array or not

// #include<Stdio.h>
// #include<stdbool.h>

// int main(){
//     int arr[10]={11, 21, 34, 54, 75, 86, 97, 85, 93, 10};
//     int n, index;
//     printf("enter the number ");
//     scanf("%d",&n);
//     bool flag = false;
//     for(int i=0; i<10; i++){
//        if(arr[i] == n){
//         flag = true;
//         index = i;
//        }
//     }

//     if(flag == true) printf("%d is present in the array at index %d",n,index);
//     else printf("%d is not present in the arrary");
// } // this process is called as linear search






// // find the unique number in the array

// #include<Stdio.h>
// #include<stdbool.h>

// int main(){
//     int arr[7]={1, 2, 3, 4, 3, 2, 1};
//     for(int i=0; i<7; i++){
//         bool flag = false;
//         for(int j=i+1; j<7; j++){
//           if(arr[i] == arr[j]){
//             flag = true;
//           }
//         }
//         if(flag == false){
//             printf("the unique number is %d at %d index",arr[i],i);
//             break;
//           }
//     }
    
// } 



//     bubble sorting

// arrange the arrays in increasing order
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