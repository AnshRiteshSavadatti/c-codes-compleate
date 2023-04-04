o.h>
#include<stdlib.h>

int main(){
    int n;
    printf("the value of n ");
    scanf("%d",&n);
    float a = 100;
    for(int i=1; i<=n; i++){
        printf("%f\n",a);
        a /= 2;
    }
}