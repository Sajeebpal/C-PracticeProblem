#include <stdio.h>


int main(){
// if we do not know how many times the code will run, then we will use WHILE loop
    // int i = 0;
    // while(i<10){
    //     printf("%d. Love you!!\n", i+1);
    //     i++;
    
    // }

// FInding reversed Number of a  number
    // int num, revNum = 0;
    // printf("Write a number to get it reversed number = ");
    // scanf("%d", &num);
    // while(num){
    //     revNum = revNum*10 + num%10;
    //     num = num/10;
    // }

    // printf("Reversed no is = %d", revNum);

// Printing Natural number series
    // for(int i=1; i<=10; i++){
    //     printf("%d \t", i);
    // }

// Printing Multiplication table
    // int num;
    // scanf("%d", &num);
    // for(int i = 1; i<=10; i++){
    //     printf("%d x %d = %d\n", num, i, num*i);
    // }

// Printing the elements of a second dimensional array
// int nums[3][3] = {{1, 2, 3}, {4, 5, 6}, {7,8, 9}};
// int length = sizeof(nums);

// for(int i=0; i<=2; i++){

//     for(int j=0; j<=2; j++){
//         printf("%d ", nums[i][j]);

//     }
//     printf("\n");
// }


// String 

// char string[] = "Hello world";
// printf("%zu\n", sizeof(string)/sizeof(string[0]));
// printf("%s", string);

int num;
char name;

scanf("%d %c", &num, &name);
printf("You have entered %d and %c", num, name);

}