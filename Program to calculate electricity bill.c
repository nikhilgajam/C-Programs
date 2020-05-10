#include <stdio.h>

int main(){

    float units_consumed, current_meter_readings, previous_meter_readings, bill_amount, rate_per_unit;

    printf("Electricity Bill Calculation Program\n\n");

    printf("Enter current meter(month) reading: ");
    scanf(" %f", &current_meter_readings);

    printf("Enter previous meter(month) reading: ");
    scanf(" %f", &previous_meter_readings);

    units_consumed = current_meter_readings - previous_meter_readings;

    printf("\n==> Units Consumed = %.2f <==\n\n", units_consumed);

    if(units_consumed >= 1 && units_consumed <= 100){
        rate_per_unit = 1.50;

        bill_amount = units_consumed * rate_per_unit;

    }else if(units_consumed >= 101 && units_consumed <= 300){
        rate_per_unit = 2.00;

        bill_amount = units_consumed * rate_per_unit;

    }else if(units_consumed >= 301 && units_consumed <= 500){
        rate_per_unit = 2.50;

        bill_amount = units_consumed * rate_per_unit;

    }else{
        rate_per_unit = 3.25;

        bill_amount = units_consumed * rate_per_unit;
    }

    printf("==> Bill Amount = %.2f Rupees <==\n", bill_amount);

    return 0;

}
