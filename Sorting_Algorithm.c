/*
                                        Sorting
*/

 // print the elements of array which reapeated
// #include<Stdio.h>
// #include<stdbool.h>
// int main(){
//     int n;
//     int arr[100];
    
//     printf("Enter the value of n");
//     scanf("%d",&n);
//     for(int i=0; i<n; i++){
//         printf("\nEnter the element of arr[%d]",i);
//         scanf("%d",&arr[i]);
//     }
//     for(int i=0; i<n; i++){
//         printf("%d\t",arr[i]);
//     }
//     printf("\n");

//     for(int i=0; i<n-1; i++){
//         bool flag = true;
//         for(int j=i+1; j<n; j++){
//             if(arr[i] == 0 ){
//                 continue;
//             }
//             if(arr[i] == arr[j]){
//                 arr[j] = 0;
//                 flag = false;
//             }
//         }
//         if(flag == false){
//             printf("%d\t",arr[i]);
//         }
//     }
//     return 0;
// }




// #include <stdio.h>
// #include <stdlib.h>
// int A[100];
// void print_array(int N);

// int main(){
//    int N;
//    printf("Enter the value of n");
//    scanf("%d",&N);
//    if(N>=0 && N<100000){
//       print_array(N);
//    }
//    else{
//       printf("Invalid");
//       exit(0);
//    }
//    return 0;
// }

// void print_array(int N){
//    for(int i=0; i<N; i++){
//     printf("Enter the array elements arr[%d]",i+1);
//       scanf("%d",&A[i]);
//    }

//    for(int i=0; i<N-1; i++){
//       int cnt =0;
//       for(int j=i+1; j<N; j++){
//          if(A[i]==0){
//             continue;
//          }
//          if(A[i]==A[j]){
//            A[j] = 0;
//            cnt++;
//          }
//       }
//       if(cnt>0){
//          printf("%d ",A[i]);
//       }
//    }
// }



// // Time and space analysis 
// // To find only one duplicate element in an array --> the most effective method
// #include<Stdio.h>
// int main(){
//     int n;
//     int arr[100];
//     printf("Enter the value of n");
//     scanf("%d",&n);
//     for(int i=0; i<n; i++){
//         printf("\nEnter the element of arr[%d]",i);// the number must be in sequence
//         scanf("%d",&arr[i]);
//     }
//     for(int i=0; i<n; i++){
//         printf("%d\t",arr[i]);
//     }
//     printf("\n");

//     int sum = 0;
//     for(int i=0; i<n; i++){
//         sum += arr[i];
//     }
//     int SUM = n*(n-1)/2;
    
//     int diff = sum - SUM;
//     printf("The repeated number is %d",diff);
//     return 0;
// }
