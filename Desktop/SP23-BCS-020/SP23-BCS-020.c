#include <stdio.h>

int main(void)
{
    int hrs_worked, rate_hrs, salary, sum = 0, avg, i, max;
    for (i = 1; i <= 10; i++)
    {
        printf("Enter the number of working hours of %d employee : ", i);/*printing no or hrs*/
        scanf("%d", &hours_worked);
        if (max < hours_worked)
        {
            max = hrs_worked;
        }

        printf("Enter the rate per hour of %d employee : ", i);/*prinitng rate of hrs*/
        scanf("%d", &rate_hrs);
        /* code for the program*/
        while (rate_hrs != 0)/*loop*/
        {
            /* code for program */
            if (rate_hrs >= 500 && rate_hrs <= 5000)
            {
                salary = hours_worked * rate_hrs;
                break;
            }
            else
            {
                printf("Error.\nEnter again : ");

             scanf("%d", &rate_hrs);
            }
        }

        printf("Salary of %d employee = %d\n", i, salary);/*printing salary*/
        sum += salary;/*sum o salaries*/
    }
    printf("Max = %d\n", max);/*prinitng max no*/
    printf("Sum = %d\n", sum);/*prinitng sum*/
    avg = sum / 10;/*average*/
    printf("Average = %d", avag);/*printing avg*/
}
return 0;/*end*/
}
