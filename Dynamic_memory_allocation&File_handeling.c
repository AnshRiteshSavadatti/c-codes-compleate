/*
                          File handling
*/

//   Preprocessor
//   #include is called as preprocessor
//   <stdio.h>  is called header file


// Macros and Macros function
// #include<Stdio.h>
// #include<stdlib.h>
// #define pi 3.14159265359 // This is called macros

// int main(){
//     printf("%d\n",pi);
//     printf("%f\n",pi);
//     printf("%.11f\n",pi);
//     printf("%Lf\n",pi);
//    return 0;
// }



//Macros function
// #include<Stdio.h>
// #include<stdlib.h>
// #define pi 3.14159265359
// #define area(r)(pi*r*r)  // This is called macros function

// int main(){
//   printf("%f",area(10));
//    return 0;
// }

//Switch Statement
// #include<Stdio.h>
// int main(){
//     int n;
//     printf("Enter the value of n : (1-7) ");
//     scanf("%d",&n);
//     switch(n){
//         case 1:
//         printf("Monday");
//         break;
        
//         case 2:
//         printf("Tuesday");
//         break;
        
//         case 3:
//         printf("Wednesday");
//         break;
        
//         case 4:
//         printf("Thursday");
//         break;
        
//         case 5:
//         printf("Friday");
//         break;
        
//         case 6:
//         printf("Saturday");
//         break;
        
//         case 7:
//         printf("Sunday");
//         break;
//         default:
//         printf("Invalid Input");
//         break;
//     }
// }





//Size of every datat type
// #include<Stdio.h>
// #include<stdbool.h>

// int main(){
//     int n = sizeof(int);
//     printf("%d\n",n);

//     int n1 = sizeof(float);
//     printf("%d\n",n1);
    
//     int n2 = sizeof(bool);
//     printf("%d\n",n2);

//     int n3 = sizeof(double);
//     printf("%d\n",n3);
                           
//     int n4 = sizeof(char);      
//     printf("%d\n",n4);
//     return 0;       
// }                   
                                                   
                      
                                          
  


// // Dynamic memory allocation
// #include<Stdio.h>
// #include<Stdlib.h>
// int main(){
//     int* ptr = (int *)malloc(100*sizeof(int));
//     printf("%d\n",*ptr);
//     printf("%p\n",ptr);
//     ptr++;
//     printf("%d\n",*ptr);
//     printf("%p\n",ptr);
    
//     printf("\n\n");

//     int* ptr2 = (int*)calloc(10,sizeof(int));
//     printf("%d\n",*ptr2);
//     printf("%p\n",ptr2);
//     ptr2++;
//     printf("%d\n",*ptr2);
//     printf("%p\n",ptr2);
//     free(ptr);
//     free(ptr2);
// }


// // Take n integers as input 
// #include<stdio.h>
// #include<Stdlib.h>

// int main(){
//     int n;
//     printf("Enter the number of integers: ");
//     scanf("%d",&n);
//     int* ptr = (int*)malloc(n*sizeof(int));
//     for(int i=0; i<n; i++){
//         printf("Enter the %d number ",i+1);
//         scanf("%d",(ptr+i));
//     }

//         for(int i=0; i<n; i++){
//         printf("%d\n",*(ptr+i));
//     }
//     free(ptr);
//     return 0;
// }



// // realloc --> Will dynamically change the memory allocated
// #include<Stdio.h>
// #include<Stdlib.h>
// int main(){
//     int* ptr = (int*)malloc(10*sizeof(int));
//     printf("%p\n",ptr);
//     ptr = realloc(ptr,11*sizeof(int));
//     printf("%p\n",ptr);
//     free(ptr);
//     return 0;
// }