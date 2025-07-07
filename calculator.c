#include<stdio.h>
int main()
{
	double num1,num2,result;
	int choice;

	printf("simple calculator\n");
	printf("1.addition\n");
	printf("2.subtration\n");
	printf("3.mutilication\n");
	printf("4.division\n");
	printf("enter your choice(1-4):");
	scanf("%d",&choice);
            
	printf("Enter first number: ");
    scanf("%lf", &num1);

    printf("Enter second number: ");
    scanf("%lf", &num2);


    switch(choice) {
        case 1:
            result = num1 + num2;
            printf("Result: %.2lf + %.2lf = %.2lf\n", num1, num2, result);
            break;
	case 2:
            result = num1 - num2;
            printf("Result: %.2lf - %.2lf = %.2lf\n", num1, num2, result);
            break;
        case 3:
            result = num1 * num2;
            printf("Result: %.2lf * %.2lf = %.2lf\n", num1, num2, result);
            break;
        case 3:
            result = num1 * num2;
            printf("Result: %.2lf * %.2lf = %.2lf\n", num1, num2, result);
            break;
        case 4:
            if(num2 != 0) {
                result = num1 / num2;
                printf("Result: %.2lf / %.2lf = %.2lf\n", num1, num2, result);
            } else {
                printf("Error: Cannot divide by zero.\n");
            }
            break;
        default:
            printf("Invalid choice. Please select from 1 to 4.\n");
    }

    return 0;
}           
