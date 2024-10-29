#include<stdio.h>



int main() 
{
    int max_of_three,num1, num2, num3;
    
    printf("Enter three numbers: ");
    scanf("%d %d %d", &num1, &num2, &num3);
    
    int maximum = max_of_three(num1, num2, num3);
    printf("The maximum number is: %d\n", maximum);
    if ((num1 == num2 && num1 > num3) || (num1 == num3 && num1 > num2) || (num2 == num3 && num2 > num1)) {
        printf("Two or more numbers are equal and greater than the third number.\n");
    } else if (num1 == num2 && num1 == num3) {
        printf("All three numbers are equal.\n");
    } else {
        printf("No two numbers are equal and greater than the third number.\n");
    }
return 0;
}
