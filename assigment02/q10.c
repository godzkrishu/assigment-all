#include <stdio.h>

int main() {
    float cp, sp, profit, loss, profit_percentage, loss_percentage;

    // Input the cost price and selling price
    printf("Enter the cost price: ");
    scanf("%f", &cp);
    printf("Enter the selling price: ");
    scanf("%f", &sp);

    // Calculate profit or loss
    if (sp > cp) {
        profit = sp - cp;
        profit_percentage = (profit / cp) * 100;
        printf("Profit: %.2f\n", profit);
        printf("Profit percentage: %.2f%%\n", profit_percentage);
    } else if (cp > sp) {
        loss = cp - sp;
        loss_percentage = (loss / cp) * 100;
        printf("Loss: %.2f\n", loss);
        printf("Loss percentage: %.2f%%\n", loss_percentage);
    } else {
        printf("No profit, no loss.\n");
    }

    return 0;
}
