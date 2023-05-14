#include <stdio.h>

int main() {
    int marks[5];
    int i, totalMarks = 0;
    float averageMarks;

    // Input marks for 5 subjects
    printf("Enter marks for 5 subjects:\n");
    for (i = 0; i < 5; i++) {
        printf("Subject %d: ", i + 1);
        scanf("%d", &marks[i]);
        totalMarks += marks[i];
    }

    // Calculate average marks
    averageMarks = (float)totalMarks / 5;

    // Check if the candidate passed or failed
    if (averageMarks >= 33) {
        printf("Congratulations! You passed the examination.\n");
    } else {
        printf("Sorry! You failed the examination.\n");
    }

    return 0;
}
