#include <stdio.h>

void main()
{
    int number, divisors_sum = 0;
    char ans = 'Y';
    //Welcome Message
    printf("Welcome to perfect number checker\n");
    //Infinity loop to keep asking him if he wanna check again or no
    for(;;)
    {
        //Checking if he typed Y in the question asking him if he want to check another number.
        if(ans == 'Y' || ans == 'y')
        {
            //Reseting divisors summation
            divisors_sum = 0;
            printf("Enter the number you want to check: ");
            scanf("%d", &number);
            //Looping throught all numbers from 1 to the number he want to check
            for(int i = 1; i < number; i++)
            {
                //If the entered number is divisible by the number of current iteration
                if(number % i == 0)
                {
                    //Saving it with the reset of divisors
                    divisors_sum += i;
                }
            }
            //Checking if the entered number is equal to all divisors summation [perfect number]
            if(number == divisors_sum)
                printf("* %d is a perfect number\n", number);
            else
                printf("-> %d is not a perfect number!\n", number);
            //Asking him if he want to check another number.
            printf("Do you want to check another number?[Y/N] ");
            scanf(" %c", &ans);
            printf("\n");
        }
        //Checking if his answer was No
        else if(ans == 'N' || ans == 'n')
            //Exiting the program
            break;
        else
        {
            printf("You have entered an invalid character please type Y or N: ");
            scanf(" %c", &ans);
        }
    }
}
