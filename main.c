#include <stdio.h>
#include <stdlib.h>

/*
This is multi Line Comment
Made by Leon Whelan
*/

int main()
{
    puts("Compile and Run this program to see how it works!\n");
    //Main data types
    puts(" ------------------------ ");
    puts("|************************|");
    puts("|*******DATA TYPES*******|");
    puts("|************************|");
    puts(" ------------------------\n ");
    //Ignore the above, this is a title.

    printf("Hello world!\n");
    printf("This is a integer = %d\n", 3);
    printf("This is a float value = %f\n", 3.14159);
    printf("This is a string value = %s\n", "string");
    printf("This is a character value = %c\n", 'c'); //Can only use single quotes!
    printf("This is a hex value = %x\n", 16);

    puts("This is a sentence"); //Prints line without n
    puts("This is another sentence\n");

    //scanf("%s", ); //Input from the user

    //Variables
    puts(" ------------------------ ");
    puts("|***********************|");
    puts("|*******VARIABLES*******|");
    puts("|***********************|");
    puts(" ------------------------\n ");

    int num = 21;
    float pi = 3.14;
    char character = 'a';
    printf("This is an integer %d\n", num);
    printf("This is a float %f\n", pi);
    printf("This is a character %c\n", character);

    //Math Operators
    puts(" ----------------------------- ");
    puts("|*****************************|");
    puts("|*******MATH OPERATIONS*******|");
    puts("|*****************************|");
    puts(" -----------------------------\n ");

    /*
        + (Addition)
        - (Subtraction)
        * (Multiplication)
        / (Division)
        % (Modulus)
    */

    int a = 2, b = 2;
    int sum = a + b;
    printf("The sum of 2 and 2 is: ", sum);


    //If Condition
    puts(" \n-------------------------- ");
    puts("|**************************|");
    puts("|*******IF CONDITION*******|");
    puts("|**************************|");
    puts(" --------------------------\n ");

    int age;
    printf("Please enter your age: ");
    scanf("%d", &age); //Scan the age variable

    if (age >= 18) {
        printf("You can enter");
    } else {
        printf("You are under 18! You cannot continue!");
    }


    //Conditional Operators
    puts(" \n--------------------------------- ");
    puts("|***********************************|");
    puts("|*******CONDITIONAL OPERATORS*******|");
    puts("|***********************************|");
    puts(" -----------------------------------\n ");

    int num1 = 100, num2 = 500;
    int num3;

    //(expression) ? (if true) : (if false)
    num3 = (num1 > num2) ? num2 : num1;
    //if num1 is greater than num2 ? if true return num2 : if false return num1
    printf("Answer = %d",num3);

    //Switch Statements
    puts(" \n--------------------------------- ");
    puts("|***********************************|");
    puts("|*********SWITCH STATEMENTS*********|");
    puts("|***********************************|");
    puts(" -----------------------------------\n ");

    int marks = 80; //Initialise variable

    switch(marks) //Whatever we are trying to measure
    {
        case 80 : //if marks == 80
            printf("You have passed the module!");
            break;
        case 70 : //if marks == 70
            printf("You have not satisfied the grade boundaries to pass the module!");
            break;
        case 50 :
            printf("You will need to resit the test to pass the module!");
            break;
        default : //This is like an ELSE statement
            printf("Grade Unavailable...");
    }




    //Leave this line below as it is to end program
    return 0;
}
