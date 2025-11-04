#include <stdio.h>

int main()
{

    // // Decimal to binary
    // int num, bin[30], i=0;
    // printf("Write a integer decimal number = ");
    // scanf("%d", &num);

    // while(num){
    //     bin[i] = num % 2;
    //     num /= 2;
    //     i++;
    // }
    // printf("Binary is = ");
    // for (int j = i - 1; j >= 0; j--){
    //     printf("%d", bin[j]);
    // }
    // printf("\n");

    // //fibonacci series
    // int a = 0, b = 1, sum, n;
    // printf("Enter how many term you want to print = ");
    // scanf("%d", &n);

    // for (int i = 1; i <= n; i++)
    // {
    //     printf("%d ", a);
    //     sum = a + b;
    //     a = b;
    //     b = sum;
    // }

    // // write a program to display the following pyramid
    // // 1
    // // 1 2
    // // 1 2 3
    // // 1 2 3 4
    // // 1 2 3 4 5

    // int n;
    // scanf("%d", &n);

    // for (int i = 1; i <= n; i++){
    //     for (int j = 1; j <= i; j++){
    //         printf("%2d ", j);
    //     }
    //     printf("\n");
    // }



    // // write a program to display the following pyramid
    // //         1
    // //       1 2
    // //     1 2 3
    // //   1 2 3 4
    // // 1 2 3 4 5

    // int n;
    // scanf("%d", &n);

    // for (int i = 1; i <= n; i++)
    // {
    //     for (int s = (n-i)*3; s >=1; s--){
    //         printf(" ");
    //     }
    //     for (int j = 1; j <= i; j++)
    //     {
    //         printf("%2d ", j);
    //     }
    //     printf("\n");
    // }

    // Write a program to display the following pyramid
    //         1
    //        1 2
    //       1 2 3
    //      1 2 3 4
    //     1 2 3 4 5

    int n;
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        for (int s = (n-i); s >=1; s--){
            printf(" ");
        }
        for (int j = 1; j <= i; j++)
        {
            printf("%d ", j);
        }
        printf("\n");
    }

}