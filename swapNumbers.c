#include <stdio.h>

int main(){
    
    int num1 = 10, num2 = 20;
    
    printf("Before swapping the value of num1 is %d\n",num1);
    printf("Before swapping the value of num2 is %d\n",num2);
    
    num1 = num1 + num2 ;
    num2 = num1 - num2 ;
    num1 = num1 - num2 ;
    
    printf("After swapping the value of num1 is %d\n",num1);
    printf("After swapping the value of num2 is %d\n",num2);
    
    return 0;
}
