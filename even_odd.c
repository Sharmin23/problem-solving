#include<stdio.h>
int main(){
int num;
printf("Enter a num numbers:");
scanf("%d",&num);

    if(num % 2 == 0){
        printf("the number is even");
    }
    else{
        printf("the number is odd");
    }
    return 0;

}
