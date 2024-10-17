#include <stdio.h>

int main(){
    int customerID;
    char customerName[50];
    float unitConsumed, chargePerunit,totalBill,surcharge = 0;


    printf("Enter customer ID: ");
    scanf("%d", &customerID);
    printf("Enter Customer Name: ");
    scanf("%s",&customerName);
    printf("Enter Units consumed: ");
    scanf("%f", &unitConsumed);


    if(unitConsumed <= 199) {
        chargePerunit = 1.20;
    }else if (unitConsumed >= 200 && unitConsumed < 400);{
        chargePerunit = 1.50;
    } if (unitConsumed >= 400 && unitConsumed < 600){
        chargePerunit = 1.80;
    }else {
        chargePerunit =2.00;
    }


    totalBill = unitConsumed * chargePerunit;

    if(totalBill > 400) {
       surcharge = 0.15 * totalBill;
       totalBill += surcharge;

    }
    if (totalBill < 100){
        totalBill = 100;
    }
     
     printf("\nElectricityBill:\n");
     printf("Customer ID: %d\n", customerID);
     printf("customer Name: %s\n", customerName);
     printf("Units Consumed: %.2f\n", unitConsumed);
     printf("Charge per Unit: %.2f\n", chargePerunit);
     printf("Total Amount to Pay: kshs%.2f\n",totalBill);



    return 0;


}