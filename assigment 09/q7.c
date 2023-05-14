#include <stdio.h>

int main() {
    float unitCharges, totalBill;
    int units;

    printf("Enter the electricity unit charges: ");
    scanf("%f", &unitCharges);

    if (unitCharges < 0) {
        printf("Invalid unit charges\n");
        return 0;
    }

    units = (int) unitCharges;

    switch(units) {
        case 0 ... 50:
            totalBill = unitCharges * 0.5;
            break;

        case 51 ... 150:
            totalBill = 50*0.5 + ((unitCharges - 50) * 0.75);
            break;

        case 151 ... 250:
            totalBill = 50*05+ 100*0.75+ ((unitCharges - 150) * 1.20);
            break;

        default:
            totalBill = 50*05+ 100*0.7+100*1.20 + ((unitCharges - 250) * 1.50);
    }

    totalBill = totalBill + (totalBill * 0.2);

    printf("Total electricity bill: %.2f\n", totalBill);

    return 0;
}
