#include <stdio.h>

int main() {
    int day;

    printf("Enter the day number (1-7): ");
    scanf("%d", &day);

    switch (day) {
        case 1:
            printf("Monday: Hello, it's the beginning of a new week!\n");
            break;
        case 2:
            printf("Tuesday: Welcome to another productive day!\n");
            break;
        case 3:
            printf("Wednesday: Happy hump day! You're halfway through the week!\n");
            break;
        case 4:
            printf("Thursday: Keep pushing, the weekend is almost here!\n");
            break;
        case 5:
            printf("Friday: TGIF! Have a fantastic day!\n");
            break;
        case 6:
            printf("Saturday: Enjoy your weekend and relax!\n");
            break;
        case 7:
            printf("Sunday: It's a perfect day to recharge and prepare for the week ahead!\n");
            break;
        default:
            printf("Invalid day number.\n");
            break;
    }

    return 0;
}
