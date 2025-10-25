#include <stdio.h>
#include <math.h>
int main(){

// Write a program to display the following series 1 5 10 15 20 25.....

    // int i,n, term = 1;
    // printf("How many numbers you want to print = ");
    // scanf("%d", &n);
    // for(i=1; i<=n; i++){
    //     printf("%d ",term);
    //     if(i==1){
    //         term+=4;
    //     }
    //     else{
    //         term +=5;
    //     }
    // }

// Write a program to display the Fibonacci series 0 1 1 2 3 5 8 13...

    // int i,n, a=0,b=1, sum;
    // printf("Enter how many numbers you want = ");
    // scanf("%d", &n);
    // for (i=1; i<=n; i++){
    //     printf("%d ", a);
    //     sum = a+b;
    //     a = b;
    //     b = sum;
        
    // }

// Write a program that takes ten numbers as input and display the odd numbers only
    // int num;
    // printf("Enter 10 numbers = ");
    // for(int i=1; i<=10; i++){
    //     scanf("%d", &num);

    //     if(num%2 != 0){
    //         printf("%d ", num);
    //     }
    // }

// Write a program to find whether a given number is prime or not

    // int num, i, flag;
    // printf("Enter a number to check prime or not = ");
    // scanf("%d", &num);

    // if(num<=1){ // prime number is only defined for positive integers
    //     printf("%d is not a Prime number", num);
    // } else{
    //     for (i = 2; i < num; i++){
    //         if(num%i == 0){
    //             flag = 1;
    //             break;
    //         }
            
    //     }  
        
    //     if(flag == 1){
    //         printf("%d is not a Prime number", num);
    //     } else{
    //         printf("%d is a Prime number", num);
    //     }

    // }

// Write a program that will print the positive integers only among given up to 20 numbers
   
    // int num;
    // printf("Write upto 20 numbers to get positive numbers only (enter 0 to stop).\n= ");
    
    // for (int i = 1; i <= 20; i++){
    //     scanf("%d", &num);

    //     if(num>0){
    //         printf("%d ", num);
    //     }
    // }

    // printf("\n");

// Write a program to convert decimal to binary number

    // int num, i = 0, binary[32];
    // printf("Enter a Decimal number = ");
    // scanf("%d", &num);
    // int temp = num;

    // if (num == 0){
    //     printf("0");
    // } 
    // else{
    //     while(num>0){
    //         binary[i] = num % 2;
    //         num = num / 2;
    //         i++;
    //     }
    //     printf("Binary of %d is = ", temp);

    //     for (int j = i - 1; j >= 0; j--){
    //         printf("%d", binary[j]);
    //     }
    //     printf("\n");
    // }

// Write a program to convert binary to decimal number
    // int numb, k=0, rem, sum = 0;
    // printf("Enter a binary number = ");
    // scanf("%d", &numb);
    // int temp2 = numb;

    // while(numb>0){
    //     rem = numb % 10;
    //     sum = sum + rem * (int)pow(2, k);
    //     numb = numb / 10;
    //     k++;
    // }
    // printf("Decimal of %d is = %d", temp2, sum);
    // printf("\n");



    return 0;
}