#include <stdio.h>
#include <stdlib.h>

#define  PAYRATE 12.00
int main()
{
    printf("Hello world!\n");

    double hours;
    double grossPay;
    double netPay;
    double tax;

    printf("Enter how many hours you worked \n");
    scanf("%lf",&hours);


    if(hours <= 40){
        grossPay = hours * PAYRATE;
         printf("Your gross pay is  %lf \n",grossPay);
    }
    else{
        grossPay = 40 * PAYRATE;
        double overTime = (hours - 40) * (PAYRATE * 1.5);
        grossPay += overTime;
        printf("Your gross pay is  %lf \n",grossPay);
    }

    if(grossPay <= 300){
        tax = grossPay * 0.15;
        printf("Taxed paid is %lf\n",tax);
    }

    else if(grossPay > 300 && grossPay <= 450){
        tax = grossPay * 0.20;
        printf("Taxed paid is %lf \n",tax);
    }

    else{
        tax = grossPay *  0.25;
        printf("Taxed paid is %lf\n",tax);
    }

    netPay = grossPay - tax;
    printf("The amount deposited into your account is %lf",netPay);

return 0;
}
