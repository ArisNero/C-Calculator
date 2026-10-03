#include <stdio.h>
#include <math.h>
double number1,number2;
char binary,octal,operation;
bool CalculatorOn=true;

void Continue(){
    char make_another_operation;
    printf("\n");
    printf("Would you like to make another operation?(Y/n)");
    getchar();
    make_another_operation=getchar();
    if(make_another_operation=='n') CalculatorOn=false;
}

int main()
{
    //Intro message
    printf("Welcome to my calculator\n");
    printf("How will this work:You will type two real numbers and choose what operation to do. The process will repreat until you close the calculator by typing 'n' when asked if you would like to make another operation \n");
    do{
    //Choose the numbers
    printf("Choose number 1 = ");
    scanf("%lf", &number1);
    printf("\n");
    printf("Choose number 2 =");
    scanf("%lf", &number2);
    printf("\n");

    //Choose operation
    printf("What operation would you like to do? (+,-,/,%,*)\n");
    getchar();
    operation=getchar();
    if(operation=='+')
     {  printf("The result is:");
        printf("%f",number1+number2);
        Continue();
     }
     else if(operation=='-')
     {
        printf("The result is:");
        printf("%f",number1-number2);
        Continue();
     }
     else if(operation=='/')
     {
        printf("The result is:");
        printf("%f",number1/number2);
        Continue();
     }
     else if(operation=='%')
     {
        printf("The result is:");
        printf("%f",fmod(number1,number2));
        Continue();
     }
     else if(operation=='*')
     {
        printf("The result is:");
        printf("%f",number1*number2);
        Continue();
     }
    }while(CalculatorOn==true); 

    return 0;

}