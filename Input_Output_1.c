#include<stdio.h>
int main(){

    float temp_f,temp_c;
    printf("Enter the centigrade temperature: ");
    scanf("%d",&temp_c);
    tem_f = (temp_c * 9/5) + 32;
    printf(" %.6f degree fahreheit.\n%",temp_f);
    return 0;
}
