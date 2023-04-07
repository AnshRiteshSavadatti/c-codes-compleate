//                                 STRUCTURES



// general diclaration of a struct
// #include<Stdio.h>
// int main(){
//     struct students{
        
//         float per;
//         int roll;
//     };
//     struct students ansh;
//     ansh.per = 100;
//     ansh.roll = 1409;
//     printf("%d\n",ansh.roll);

//     struct students sakshi;
//     printf("enter the percentage :");
//     scanf("%f",&sakshi.per); 
//     sakshi.roll = 1426;
//     printf("%f",sakshi.per);
// }






// // create a structure which stores a book name, price, and pages
// #include<stdio.h>
// #include<string.h>

// int main(){
//     struct book{
//         char name[50];
//         int pages;
//         float price;
//     };
    
//      struct book book1;
//     char a[50] = "Rich dad poor dad";
//     strcpy(book1.name,a);
//     book1.pages = 200;
//     book1.price = 200;
//     printf("%s",book1.name);
//     return 0;
// }






// create a structure type person which stores name, salary and age as attributes

// #include<stdio.h>
// #include<string.h>

// int main(){
//     struct person{
//         char name[50];
//         int age;
//         int salary;
//     }a,b;
//     a.age = 45;
//     a.salary = 456677;
//     strcpy(a.name, "name1");
//     printf("%s\n",a.name);

//     b.age = 45;
//     b.salary = 456677;
//     strcpy(b.name,"name2");
//     printf("%d",b.salary);

//     return 0;
// }



// typedef function -----> can change the name of identefiers

// #include<stdio.h>
// typedef float f;
// int main(){
//     int a = 2;
//     f b = 23.23;
//     printf("%f",b);
    
//     return 0;
// }






// // use fo type def in structrues
// #include<stdio.h>
// #include<string.h>

// int main(){
//     typedef struct pokemon{
//         int speed;
//         int health;
//         char name[50];
//     }p;
//     p p1;
//     p1.health = 100;
//     p1.speed = 350;
//     strcpy(p1.name, "pikachu");
//     return 0;
// }


// // tpyedef can be used to name miltiple pointers 
// #include<stdio.h>
// typedef int* intp;
// int main(){
//     int a = 3, b = 5;
//     //int* x = &a, y = &b; // this genetares error
//     // we cannot declare poiters the way we did here
//     //we can use typedef here
//     intp  x = &a, y = &b;
//     printf("%p\n%p",x,y);
//     return 0; 
// }



// array in structures
#include<stdio.h>
#include<string.h>
int main(){
    typedef struct cricketer{
        int age;
        int runs;
        float avg_runs;
        char name[20];
    }c;
    c arr[5];
    for(int i=0; i<3; i++){
         printf("enter the name\n");
        scanf(" %[^\n]s",arr[i].name);
        printf("enter the age ");
        scanf("%d",&arr[i].age);
        printf("Enter the runs  ");
        scanf("%d",&arr[i].runs);
        printf("Enter average runs ");
        scanf("%f",&arr[i].avg_runs);
       
        printf("\n");
    }
    for(int i=0; i<3; i++){
        printf("Name : %s\n",arr[i].name);
        printf("Age : %d\n",arr[i].age);
        printf("Runs : %d\n",arr[i].runs);
        printf("Average runs : %f\n",arr[i].avg_runs);
        printf("\n\n");
        
    }
}