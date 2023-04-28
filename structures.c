//                                 STRUCTURES



// general declaration of a struct
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


// // tpyedef can be used to name mltiple pointers 
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



// // array in structures
// #include<stdio.h>
// #include<string.h>
// int main(){
//     typedef struct cricketer{
//         int age;
//         int runs;
//         float avg_runs;
//         char name[20];
//     }c;
//     c arr[5];
//     for(int i=0; i<3; i++){
//          printf("enter the name\n");
//         scanf(" %[^\n]s",arr[i].name);
//         printf("enter the age ");
//         scanf("%d",&arr[i].age);
//         printf("Enter the runs  ");
//         scanf("%d",&arr[i].runs);
//         printf("Enter average runs ");
//         scanf("%f",&arr[i].avg_runs);
       
//         printf("\n");
//     }
//     for(int i=0; i<3; i++){
//         printf("Name : %s\n",arr[i].name);
//         printf("Age : %d\n",arr[i].age);
//         printf("Runs : %d\n",arr[i].runs);
//         printf("Average runs : %f\n",arr[i].avg_runs);
//         printf("\n\n");
        
//     }
// }




// // feature in structure
// #include<stdio.h>
// #include<string.h>
// int main(){
//     typedef struct pokemon{
//         int hp;
//         int attack;
//         char name[15];
//         char tier;
//     }p;
//     p a,b,c;
//     a.attack = 69;
//     a.hp = 100; 
//     a.tier = 'A';
//     strcpy(a.name, "Pokemon");
//     b = a; // here we have created a deep copy
// }


// // comparing two structures
// #include<Stdio.h>
// #include<string.h>
// #include<Stdbool.h>

// int main(){
//     typedef struct date{
//         int day;
//         int month;
//         int year;
//     }date;
//     date a,b;
//     a.month = 3;
//     a.day = 24;
//     a.year = 2004;

//     b.day = 14; 
//     b.month = 12;
//     b.year = 2004;
     
//     bool flag = true;
//     if(a.day != b.day) flag = false;
//     if(a.year != b.year) flag = false;
//     if(a.month != b.month) flag = false;

//     if(flag == true) printf("dates a & b are same");
//     if(flag == false) printf("dates a & b are different ");
//     return 0;
// }





// // Nesting in structures

// #include<Stdio.h>
// #include<String.h>

// int main(){
//     typedef struct pokemon{
//         int speed;
//         int hp;
//         char name[15];
//         int attack;
//         char tier;
//     }p;
//     typedef struct legendary_pokemon{
//         p normal;
//         char ability[15];
//     }lp;
//     lp a;
//     typedef struct god_pokemon{
//         lp legendary;
//         int special_attack;
//     }gp;
    
//     gp b;
//     b.special_attack = 300;
//     b.legendary.normal.hp = 500;
//     printf("The special attack is: %d\n",b.special_attack);
//     printf("The hp is: %d\n",b.legendary.normal.hp);


//     a.normal.attack = 29;
//     strcpy(a.ability,"pressure");
//     printf("%s\n",a.ability);
//     printf("%d",a.normal.attack);
//     return 0;
// }






// // structures infunctions 
// // Global declaration of functions must be done
// // Structure are passed by value
// #include<Stdio.h>
// #include<String.h>
// typedef struct pokemon{
//         int speed;
//         int hp;
//         char name[15];
//         int attack;
//         char tier;
//     }p;

// void print(p a){
//     printf("%d\n",a.attack);
//     printf("%d",a.hp);
//     return;
// }

// int main(){
//     p a;
    
//     a.hp = 100;
//     a.attack = 400;
//     print(a);
    
//     return 0;
// }





// // Check of two students are in same branch or not
// #include<Stdio.h>
// #include<string.h>
// #include<Stdbool.h>

// typedef struct student{
//     int marks;
//     char name[20];
//     char department[30];
// }student;
//  bool check(student a, student b){
//     if(a.department == b.department)
//     return true;
//     else return false;
//  }

// int main(){
//     student a,b;
//     strcpy(a.department,"CSE");
//     strcpy(b.department, "ECE");
//     check(a,b);
//     if(check(a,b) == true) printf("Both are in same branch");
//     else printf("Both are not in same branch");
//     return 0;
// }


// // pointers in structures

// #include<Stdio.h>
// #include<String.h>
// typedef struct pokemon{
//         int speed;
//         int hp;
//         char name[15];
//         char tier;
//         int attack;
//     }p;

// int main(){
//     p pikachu;
//     p* x = &pikachu;
//     printf("%p\n",&pikachu);
//     pikachu.speed = 300;
//     pikachu.hp = 100;
//     strcpy(pikachu.name,"pikachu");
//     pikachu.attack = 400;
//     pikachu.tier = 'A';
//     printf("%p\n",&pikachu.speed);
//     printf("%p\n",&pikachu.hp);
//     printf("%p\n",&pikachu.name);
//     printf("%p\n",&pikachu.tier);
//     printf("%p\n",&pikachu.attack);
   
   
    
//     return 0;
// }




// // Changing values using pointers

// #include<Stdio.h>
// #include<String.h>
// typedef struct pokemon{
//         int speed;
//         int hp;
//         char name[15];
//         char tier;
//         int attack;
//     }p;

// void change(p* p){
//   (*p).attack = 200;
//   (*p).hp = 150;
//   p->speed = 400;
//   // here (*p).something = p->something
//   return;
// }

// int main(){
//     p pikachu;
//     pikachu.attack = 90;
//     pikachu.hp = 100;
//     pikachu.speed = 300;
//     printf("%d\n",pikachu.speed);
//     printf("%d\n",pikachu.hp);
//     printf("%d\n",pikachu.attack);

//    change(&pikachu);

//     printf("%d\n",pikachu.speed);
//     printf("%d\n",pikachu.hp);
//     printf("%d\n",pikachu.attack);
   
    
//     return 0;
// }





// // Another way to declare structures

// #include<Stdio.h>
// #include<string.h>

// int main(){
//  typedef struct pokemon{
//     int hp;
//     int attack;
//     int speed;
//     char tier;
//     char name[20];
//  }pokemon;

//  pokemon pikachu = {100,200,250,'A',"Pikachu"};
//  printf("%d\n",pikachu.hp);
//  printf("%d\n",pikachu.attack);
//  printf("%d\n",pikachu.speed);
//  printf("%c\n",pikachu.tier);
//  printf("%s\n",pikachu.name);
//  return 0;

// }



// // unions
// #include<stdio.h>
// #include<String.h>
// int main(){
//     typedef union pokemon{
//     int hp;
//     int attack;
//     int speed;
//     char tier;
//     char name[20];
//  }pokemon;
// // pokemon pikachu = {100,200,250,'A',"Pikachu"};
// pokemon pikachu;
//  pikachu.hp = 100;
//  pikachu.attack = 200;
//  pikachu.speed = 250;
//  pikachu.tier = 'A';
//  strcpy(pikachu.name,"Pikachu");

//  printf("%d\n",pikachu.hp);
//  printf("%d\n",pikachu.attack);
//  printf("%d\n",pikachu.speed);
//  printf("%c\n",pikachu.tier);
//  printf("%s\n",pikachu.name);
//  return 0;

// }

