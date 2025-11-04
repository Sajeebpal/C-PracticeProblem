#include <stdio.h>

int main(){
// Write a program to calculate the factorial of a number

    // int num, factorial = 1;
    // printf("Enter a number to calculate factorial = ");
    // scanf("%d", &num);

    // for (int i = 1; i <= num; i++){
    //     factorial = factorial * i;
    // }
    // printf("%d! is = %d", num, factorial);

// Write a program to find GCD of two given numbers
    // int a, b, i;
    // printf("Enter two numbers to find GCD = ");
    // scanf("%d %d", &a, &b);
    // if(a>b){
    //     int temp = a;
    //     a = b;
    //     b = temp; // b has the grater number
    //     // GCD is lowest than both numbers;
    // }
    // if( a>=0 && b>=0 ){
    //     for (i = b; i >= 1; i--){
    //         if(a%i ==0 && b%i == 0){
    //             printf("GCD of %d and %d is = %d", a, b, i);
    //             break;
    //         }
    //     }
    // }
    // else{
    //     printf("Please! Enter two positive integer");
    // }

// Euclidean algorithm to find GCD and LCM

    // int a, b, rem, init_a, init_b;
    // printf("Enter two numbers to find GCD = ");
    // scanf("%d %d", &a, &b);

    // init_a = a; // For LCM
    // init_b = b; // For LCM
    
    // while (b!=0)
    // {
    //     rem = a % b; // dont need to swap variable
    //     a = b;
    //     b = rem;
    // }
    // printf("GCD is = %d\n", a);
    // printf("LCM is = %d", (init_a* init_b)/a); // a = GCD; // LCM = (original_a * original_b)/GCD



// Write a program to find LCM of two numbers (inefficient for large number)

    // int a, b;
    // printf("Enter two numbers = ");
    // scanf("%d %d", &a, &b);
    // if(a>b){
    //     int temp = a;
    //     a = b;
    //     b = temp; // b has greater number
    // }
    // if(a==0 || b==0){
    //     if(a==0 && b==0){
    //         printf("LCM is Undefined");
    //     } else{
    //         printf("LCM is = 0");    // zero is  a multiple of any number 0/a = 0;
    //     }
    // }
    // else{
    //     for (int i = b; ; i++){
    //         if(i%a == 0 && i%b == 0){
    //             printf("LCM is = %d", i);
    //             break;
    //         }
    //     }

    // }

// 48 No question 

    // int number1, number2, GCD = 1, minimum;
    // printf("Enter two numbers = ");
    // scanf("%d %d", &number1, &number2);
    // if(number1>number2){
    //     minimum = number2;
    // }else{
    //     minimum = number1;
    // }
    // for (int i = 1; i <= minimum; i++){
    //     if(number1%i==0 && number2%i==0){
    //         GCD = i;
    //     }
    // }
    // printf("GCD is = %d", GCD);



return 0;
}