#include <stdio.h>
#include<math.h>

int main() {

    float value, rate;
    int years;

    printf("The initial mortgage value: \n");
    scanf("%f", &value);

    printf("The mortgage rate: \n" );
    scanf("%f", &rate);

    printf("How many years: \n");
    scanf("%d", &years);

    printf("For a mortgage of %.2f for %d years and interest rate of %.2f \n", value, years, rate);

    float monthly_rate = (rate/100)/12;
    int x = years * 12;
    float frml = pow(1 + monthly_rate, x);
    float p = value * (monthly_rate * frml) / (frml - 1);

    float interestRate = value*monthly_rate;

    int i;
    for ( i = 1; i <= x ; ++i) {

        value = value + interestRate - p;
        interestRate = value * monthly_rate;

        printf("%d        %.2f \n", i, value);
    }

    return 0;



}
