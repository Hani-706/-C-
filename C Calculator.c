#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<stdlib.h>
#define KEY "Enter the calculator operation you want to do:"
void addition();
void subtraction();
void multiplication();
void division();
void modulus();
void power();
int factorial();
void calculator_operation();

int main()
{
    int x=1;
    char calc_oprn;
    calculator_operation();
    while(x)
    {
        printf("\n");
        printf("%s",KEY);
        calc_oprn=getche();
        switch(calc_oprn)
        {
            case '+':addition();
                     break;
            case '-':subtraction();
                     break;
            case '*':multiplication();
                     break;
            case '/':division();
                     break;
            case '?':modulus();
                     break;
            case '!':factorial();
                     break;
            case '^':power();
                     break;
            case 'h':
            case 'H':calculator_operation();
                     break;
            case 'q':
            case 'Q':exit(0);
                     break;
            case 'C':
            case 'c':system("cls");
                     calculator_operation();
                     break;
            default:system("cls");
            printf("\n**********you have entered unavailable option");
            printf("********\n");
            printf("\n*********please enter any one of below available");
            printf("options********\n");
                        calculator_operation();
        }
    }
}
void calculator_operation()
{
    printf("\n     welcome to c calculator\n\n");
    printf("*********press 'q'or 'Q' to quit");
    printf("the program *******\n");
    printf("******Press 'h' or 'H' to display ");
    printf("below options******\n\n");
    printf("enter 'c' or 'C' to clear the screen and");
    printf("Display available option\n\n");
    printf("Enter + symbol for addition\n");
    printf("Enter - symbol for subtraction\n");
    printf("Enter * symbol for multiplication\n");
    printf("Enter / symbol for division\n");
    printf("Enter ? symbol for modulus\n");
    printf("Enter ! symbol for factorial\n");
    printf("Enter ^ symbol for power\n");
}
void addition()
{
    int n,total=0,k=0,number;
    printf("\nEnter the number of elements you want to add");
    scanf("%d",&n);
    printf("Please enter %d numbers one by one:\n",n);
    
    while(k<n)
    {
        scanf("%d",&number);
        total=total+number;
        k=k+1;
    }
    printf("Sum of %d numbers=%d",n,total);
}
void subtraction()
{
    int a,b,c=0;
    printf("\nPlease enter first number");
    scanf("%d",&a);
    printf("Please enter second number\n");
    scanf("%d",&b);
    c=a-b;
    printf("\n%d-%d=%d",a,b,c);
   
}
void multiplication()
{
    int a,b,c=0;
    printf("\nPlease enter first number");
    scanf("%d",&a);
    printf("Please enter second number\n");
    scanf("%d",&b);
    c=a*b;
    printf("\n%d*%d=%d",a,b,c);
   
}
void division()
{
    int a,b,c=0;
    printf("\nPlease enter first number");
    scanf("%d",&a);
    printf("Please enter second number\n");
    scanf("%d",&b);
    c=a/b;
    printf("\n%d/%d=%d",a,b,c);
   
}
void modulus()
{
    int a,b,c=0;
    printf("\nPlease enter first number");
    scanf("%d",&a);
    printf("Please enter second number\n");
    scanf("%d",&b);
    c=a%b;
    printf("\nModulus of entered numbers=%d\n",c);
   
}
void power()
{
    double a,num,p;
    printf("\nPlease enter first number");
    scanf("%lf",&a);
    printf("Please enter power\n");
    scanf("%lf",&num);
    p=pow(a,num);
    printf("\n %lf to the power %lf =%lf\n",a,num,p);
   
}
int factorial()
{
    int fact=1,i,num;
    printf("\n Enter a number to find factorial:");
    scanf("%d",&num);
    if(num<0)
    {
        printf("\n please enter a positive number to");
        printf("find factorial and try again");
        printf("\n Factorial can't be found for negative");
        printf("Values,it can be positive or zero\n");
        return 1;
    }
    for(i=0;i<=num;i++)
    fact=fact*i;
    printf("\n");
    printf("Factorial of entered number %d is:%d\n",num,fact);
    return 0;
}
