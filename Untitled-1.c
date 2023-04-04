#include<Stdio.h>
#include<stdlib.h>

void sum(int n){
    float sum = 0;
    float j, k;
    for(int i=1; i<=(n+2); i++){
        if(i%2 == 0){
        sum = sum -(float)1/i;
        }
        if(i%2 != 0){
        sum = sum + (float)1/i;
        }
        if(i == n){
            printf("sum of first %d terms is %f\n",i,sum);
             j = sum;
        }
        if(i == (n+1)){
            printf("sum of first %d terms is %f\n",i,sum);
            k = sum;
        }
    }
    printf("sum of first %d terms is %f\n",n+2,sum);
    float avg = (j + k + sum)/3;
    printf("the average of all three is %f",avg);
}

int main(){
    int N; 
    printf("enter the value of N\n");
    scanf("%d",&N);
    if(N<=0){
        printf("Invalid input");
        exit(0);
    }
    sum(N);
}