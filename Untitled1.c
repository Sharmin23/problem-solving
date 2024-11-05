/* C program to accept two integers and check whether they are equal or not.*/
#include<stdio.h>
int main(){
    int num1, num2;
    printf("Enter two number:");
    scanf("%d %d", &num1,&num2);
    if(num1 == num2){
        printf("The numbers are equal:");
    }
    else{
        printf("The numbers are not equal");
    }
    return 0


}
