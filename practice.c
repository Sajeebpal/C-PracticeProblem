#include <stdio.h>

#include <math.h>

int main(){


// Write a program to write the texts
    // printf("I am a student of CSE.\n");
    // printf("This is my first program. I am enjoying it.");

// write a program  to evaluate the following expression exp = e + (b-c*d)/e; 

    // int b, c, d, e, exp;
    // printf("Write the values of b, c, d, e =  ");
    // scanf("%d %d %d %d", &b, &c, &d, &e);
    // exp = e + (b-c*d)/e;
    // printf("result is = %d", exp);

// write a programme to calculate the area of a circle
    // float radius, area;
    // const float PI = 3.1416;
    // printf("Enter the radius of the circle to calculate its area = ");
    // scanf("%f", &radius);
    // area = PI * radius * radius;
    // printf("Circle's area is = %.2f", area);

// Write program to find the square root and power of a given number

    // int num;
    // printf("Write a number to find its power and square root = ");
    // scanf("%d", &num);
    // printf("Square root of %d is = %.2f\n", num, sqrt(num) );
    // printf("Power of %d is = %.2f", num, pow(num, 2) );

// Write a program to swap the values of two variable
    // int a = 1;
    // int b = 2;
    // int temp;
    // temp = a;
    // a=b; // doesn't effect the temp's value
    // b=temp;
    // printf("a = %d and b = %d\n", a,b);

    // or

    // int p=5, q=4;
    // p = p+q;
    // q = p-q;
    // p = p-q;
    // printf("p = %d and q = %d\n", p, q);

    // or (only for non-zero value)

    // int m = 10, n = 20;
    // m = m*n;
    // n = m/n;
    // m = m/n;
    // printf("m = %d and n = %d", m, n);

// Write a program to convert celsius to fahrenheit

    // float celsius, fahrenheit;
    
    // printf("Write Celsius temp. to get in Fahrenheit unit = ");
    // scanf("%f", &celsius);
    // fahrenheit = (celsius/5)*9+32;
    // printf(" Fahrenheit temp. of %.1f is = %.2f%c F ",celsius, fahrenheit, 248); // ASCII of degree is 248;

// Take an integer number and display as float numbers

    // int num;
    // printf("Enter a integer Number = ");
    // scanf("%d", &num);
    // printf("Float Number of %d is = %.2f",num, (float)num);

//Takes time in minutes and output the time in hr, mins;

    // int mins, hours, remains;
    // printf("Write time in minutes = ");
    // scanf("%d", &mins);
    // hours = mins / 60;
    // remains = mins % 60;
    // printf("%d minutes = %d Hours and %d minutes", mins, hours, remains);

//Find the largest among three numbers (using if else statement) or ( if else ladder statement);

    // int a,b,c;
    // printf("write three numbers to find the biggest number = ");
    // scanf("%d %d %d", &a, &b, &c);

    // if(a==b & a==c){
    //     printf("the numbers are equal");
    // }
    // else if(a>b && a>c){
    //     printf("%d is the greatest number", a);
    // }
    // else if(b>c && b>a){
    //     printf("%d is the greatest number", b);
    // }
    // else{
    //     printf("%d is the greatest number", c);
    // }

//Find the largest among three numbers (using nested if else statement);

    // int a,b,c;
    // printf("write three numbers to find the biggest number = ");
    // scanf("%d %d %d", &a, &b, &c);

    // if(a>b){
    //     if(b>c){
    //         printf("%d is greatest", a);
    //     }
    //     else{
    //         printf("%d is greatest", c);
    //     }
    // }
    // else{
    //     if(b>c){
    //         printf("%d is greatest", b);
    //     }
    //     else{
    //         printf("%d is greatest", c);
    //     }
    // }

// Write a program to find the middle of three numbers

    // int a,b,c;
    // printf("write three numbers to find the middle number = ");
    // scanf("%d %d %d", &a, &b, &c);
    // // if (a==b && a==c)
    // //     printf("The numbers are equal");
    // // else{
    //     if(a>b){
    //         if(b>c){
    //             printf("%d is the middle number", b);
    //         }
    //         else if(a>c){
    //             printf("%d is the middle number",c);
    //         }
    //         else{
    //             printf("%d is the middle number", a);
    //         }
    //     }else{
    //         if(b<c){
    //             printf("%d is the middle number", b);
    //         }
    //         else{
    //             printf("%d is the middle number", c);
    //         }
    //     }

    // // }

// Takes 3 numbers as input and display them in ascending order

    // int a, b, c;
    // printf("Write 3 integers to see their ascending order = ");
    // scanf("%d %d %d", &a, &b, &c);

    // if(a>b){
    //     if (b>c){
    //         printf("%d %d %d", c, b, a);
    //     } else if (a>c){
    //         printf("%d %d %d", b, c, a);
    //     }
    //     else{
    //         printf("%d %d %d", b, a, c);
    //     }
    // } else{
    //     if(b<c){
    //         printf("%d %d %d",a, b, c);

    //     }else if(a<c){
    //         printf("%d %d %d",a, c, b);
    //     }
    //     else{
    //         printf("%d %d %d",c, a, b);
    //     }
    // }

    //through swapping variables 
    //What needs to be true at the end? ANS: a <= b <= c
    
        // int a, b, c, temp;
        // printf("Write 3 integers to see their ascending order = ");
        // scanf("%d %d %d", &a, &b, &c);
        // if(a>b){
        //     temp = a;
        //     a = b;
        //     b = temp; // took the small number to variable a 
        // }
        // if(a>c){
        //     temp = a;
        //     a=c;
        //     c=temp; // took the small number to variable a 
        // }
        // if(b>c){
        //     temp = b;
        //     b = c;
        //     c = temp; // took the small number to variable b
        // }
    
        // printf("Ascending order is = %d %d %d", a, b, c); // a will be lowest, b is second lowest
        
// Takes a number as input and display the respective letter grade as output;

    // int num;
    // printf("Write a number to see its respective letter = ");
    // scanf("%d", &num);
    // char letter = num;
    // printf("Respective letter of %d is = %c", num, letter);

//A year is leap year or not.  1 year = 365.2422 days;
    // int year;
    // printf("Enter a year to check if it's a Leap Year = ");
    // scanf("%d", &year);

    // if(year%4 == 0 && year%100 != 0){
    //     printf("%d is a Leap Year", year);
    // }
    // else if(year%400 == 0){
    //     printf("%d is a Leap Year", year);
    // }
    // else{
    //     printf("%d is not a Leap Year", year);
    // }

    //or

    // if( year%4==0 && (year%100 != 0 || year%400 == 0)){
    //     printf("%d is a Leap Year!", year);
    // }else{
    //     printf("%d is not a Leap Year", year);
    // }


// Check  a given number is even and odd
    // int number;
    // printf("Write a number to check even / odd = ");
    // scanf("%d", &number);

    // if(number%2 == 0){
    //     printf("%d is a even number.", number);

    // }
    // else{
    //     printf("%d is a odd number.", number);
    // }

// a Given character is alphabet or not
    // char inputCharacter;
    // printf("Write a character to check if a Alphabet? = ");
    // scanf("%c", &inputCharacter);

    // if((inputCharacter>='A' && inputCharacter<='Z') || (inputCharacter>=97 && inputCharacter<=122)){
    //     printf("%c is an Alphabet", inputCharacter);
    // }
    // else{
    //     printf("%c is not an Alphabet", inputCharacter);
    // }

// Find the roots of a Quadratic equation
    // int a, b, c;
    // printf("Write the co-efficient of {ax^2+bx+c=0} quadratic equation = ");
    // scanf("%d %d %d", &a, &b, &c);
    

    // float Discriminant = b*b - 4*a*c;
    // if (a == 0){
    //         printf("%dx + %d = 0 is not a Quadratic equation",b, c);
    //     }
    // else if(Discriminant<0){
    //     printf("Roots are complex.\nTry again");
    // }
    // else{
    //     float root1 = (-b+sqrt(Discriminant))/(2.0*a);
    //     float root2 =(-b-sqrt(Discriminant))/(2.0*a);
    
    //     printf("Roots of %dx^2 + %dx + %d = 0 are x= %.2f, %.2f", a, b, c, root1, root2);

    // }


// Write a program to input used electricity unit and calculate total electricity bill;
// for first 50 units Taka 0.5/unit
// for next 100 units Taka 1.00/unit
// for next 100 units Taka 1.50/unit
// for unit above Taka 2.00/unit

    // int usedUnit;
    // printf("Enter your total electricity unit = ");
    // scanf("%d", &usedUnit);
    // float p1, totalBill;

    // if (usedUnit>=250){
    //     p1 = (usedUnit - 250)*2;
    //     totalBill = p1+25+100+150;
    //     printf("Electricity bill is = %.2f", totalBill);
    // } 
    // else if(usedUnit>=150){
    //     p1 = (usedUnit - 150)*1.5;
    //     totalBill = p1 + 25 +100;
    //     printf("Electricity bill is = %.2f", totalBill);
    // }
    // else if (usedUnit>=50){
    //     p1 = (usedUnit - 50)*1;
    //     totalBill = p1 + 25;
    //     printf("Electricity bill is = %.2f", totalBill);

    // }
    // else{
    //     totalBill = usedUnit*0.5;
    //     printf("Electricity bill is = %.2f", totalBill);

    // }
   

// Workers in a factory work for 8 hours a day and get monthly 20000. write a program that takes number of working hours of a worker per day as input. Find how many hours he works as overtime. Calculate the amount of bonus he receives: 5% bonus for 2 hours overtime daily, 7% bonus for 4 hours overtime daily, 10% bonus for 6 hours overtime daily, otherwise 0%

    // int workHrs,overHrs = 0;
    // float bonus;
    // printf("Write daily work hours of the worker = ");
    // scanf("%d", &workHrs);
    // overHrs = workHrs - 8;
    // if(overHrs ==2){
    //     bonus = 0.05*20000;
    //     printf("Receive Bonus = %.2f Tk", bonus);
    // }
    // else if(overHrs ==4){
    //     bonus = 0.07*20000;
    //     printf("Receive Bonus = %.2f Tk", bonus);
    // }
    // else if(overHrs == 6){
    //     bonus = 0.1*20000;
    //     printf("Receive Bonus = %.2f Tk", bonus);

    // }else{
    //     printf("Receive Bonus = 0Tk");

    // }

// takes weekday number to display weekday name using switch

    // int weekDayNo;
    // printf("Write weekday No (1-7) = ");
    // scanf("%d", &weekDayNo);

    // switch(weekDayNo){
    //     case 1:
    //     printf("Saturday");
    //     break;
    //     case 2:
    //     printf("Sunday");
    //     break;
    //     case 3:
    //     printf("Monday");
    //     break;
    //     case 4:
    //     printf("Tuesday");
    //     break;
    //     case 5:
    //     printf("Wednesday");
    //     break;
    //     case 6:
    //     printf("Thursday");
    //     break;
    //     case 7:
    //     printf("Friday");
    //     break;
    //     default:
    //     printf("Write correct weekday number between 1 to 7");

    // }


// whether a given number is even or odd using switch statement
    // int num;
    // printf("Write a number to check Even or Odd = ");
    // scanf("%d", &num);

    // switch(num%2 ==0){
    //     case 1:
    //     printf("%d is a even number", num);
    //     break;

    //     case 0:
    //     printf("%d is a odd number", num);
        
    // }

// Implement a basic calculator using switch statement INPUT: Operator and two operands OUTPUT: Calculated result

    // float num1, num2;
    // char operator;
    // printf("write the first operand = ");
    // scanf("%f", &num1);
    // printf("write the Second operand = ");
    // scanf("%f", &num2);
    // printf("write the operator (+, -, *, /) = ");
    // scanf(" %c", &operator);

    // switch(operator){
    //     case '+':
    //     printf("Result is = %.2f",  num1 + num2);
    //     break;
    //     case '-':
    //     printf("Result is = %.2f", num1 - num2);
    //     break;
    //     case '*':
    //     printf("Result is = %.2f", num1 * num2);
    //     break;

    //     case '/':
    //     if(num2 != 0)
    //         printf("Result is = %.2f", num1 / num2);
    //     else{
        //     printf("%.2f can not be divided by 0", num1);
        // }
        
        // // case '%': // % doesnot work for float numbers.
        // // printf("Result is = %.2f", num1 % num2);
        
        
    // }

// Write a program to implement a basic calculator with the following menu
// 1. for Addition
// 2. for Substraction
// 3. for Multiplication
// 4. for Division

    // int menuNum;
    // float num1, num2;
    // printf("Enter two numbers to calculate = ");
    // scanf("%f %f", &num1, &num2);
    // printf("Operations available:\n\t1. For Addition\n\t2. For substraction\n\t3. For Multiplication\n\t4. For Division\n");
    
    // // scanMenu:
    // printf("Write the operation number = ");
    // scanf("%d", &menuNum);
    // if(menuNum == 1){
    //     printf("Sum is = %.2f", num1+num2);
    // }
    // else if (menuNum == 2){
    //     printf("Substraction value is = %.2f", num1-num2);
    // }
    // else if(menuNum == 3){
    //     printf("Multiplication is = %.2f", num1*num2);
        
    // }
    // else if (menuNum == 4){ // need to check the denominator if it zero
    //     printf("Division is = %.2f", num1/num2);
    // }
    // else{
    //     printf("Choose correct operation number :(\n");
    //     // goto scanMenu;

    // }

// Write a program to display a multiplication table of a number using goto statement
    // int num, i=1;
    // printf("Write a number to print its multiplication table = ");
    // scanf("%d", &num);

    // multiTable:
    // printf("%d x %d = %d\n", num, i, num*i);
    // i++;

    // if(i<=10)
    //     goto multiTable;

// Write a program to add the numbers from 1 to 10 and find their avg
    // int i, sum = 0;
    // for(i=1; i<=10; i++){
    //     sum+=i;
    // }
    // printf("Sum of first 10 natural number = %d\n", sum);
    // float avg =(float)sum/10; //sum is in float now. therefor float/int = float
    // printf("Avg of first 10 natural numbers = %.2f", avg);

// Write a program that adds the even numbers and odd numbers between 10 and 30;
    // int i, evenSum= 0, oddSum = 0;
    // for(i=10; i<=30; i++){
    //     if(i%2 == 0){
    //         evenSum+=i;
    //     }
    //     else{
    //         oddSum+=i;
    //     }
    // }
    // printf("Sum of even Numbers between 10 to 30 is = %d\n", evenSum);
    // printf("Sum of Odd Numbers between 10 to 30 is = %d", oddSum);

// Display reverse of a given number

    // int num, revNum=0;
    // printf("Enter a number to get its reverse number = ");
    // scanf("%d", &num);
    // int temp = num;

    // while(num){
    //     revNum = revNum*10 + num%10;
    //     num /=10;
    // }
    // printf("Reverse num is = %d\n", revNum);

    // //checking the number if a palindrome number or not

    // if(temp == revNum){
    //     printf("%d is a palindrome number", temp);
    // }
    // else{
    //     printf("%d is not a palindrome number", temp);
    // }












    return 0;
}