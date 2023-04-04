/*
            strings----> is 1 dimensional array of characters terminated with null characters 
*/



// printing the address of the arrays
// #include<stdio.h>
// int main(){
//     char arr[4] ={'a', 'b', 'c', 'd'};
//     for(int i =0; i<4; i++){
//         printf("%p\n",arr[i]);              //    %p is format specefier for address
//                                            //    hexa decimal system is present in c
//     }
//     return 0;
// }


//   remem bering the ASCII VALUES
//  A----> 65;       Z----->90     
//  a ---->97;       z----->122
// '0'---->48;       '9'----->57
//  
//type casting
//char ch = 'a'
// int x = (int)ch;


// printing the ASCII value
//  by type casting
// #include<stdio.h>
// int main(){
//     char ch = 'A';
//     int x = (int)ch;
//     printf("%d ",x);
// }
// // null charecter -----> \0 ------>0

// printing a string
// #include<stdio.h>
// int main(){
//     char arr[] = "Ansh Ritesh Savadatti\0";  // agar \0 nahi denge to bhi code chalega kyu ke computer automatically \0 add karta
//     int i=0;
//     while(arr[i] != '\0'){
//         printf("%c",arr[i]);
//         i++;
//     }
// }




// %s is format specifer to print a string ----> must use  #include<string.h>
// puts(str)---> to print a string;
// above str is the name of array;



// taking string as input and printing it
// #include<Stdio.h>
// #include<string.h>
// int main(){
//     char str[100];
//     scanf("%s",str);  // if we use scanf only the first word will be considered
//     printf("your input is :%s",str);
// }


// taking input of string using gets() function
// #include<Stdio.h>
// #include<string.h>
// int main(){
//     char str[100];
//     gets(str); // entire string will be printed
//     printf("your input is :%s",str);
// }

// #include<Stdio.h>
// #include<string.h>
// int main(){
//     char str[100];
//     gets(str); // entire string will be printed;
//     puts(str); // puts automaticallty gives a \n as well;
// }