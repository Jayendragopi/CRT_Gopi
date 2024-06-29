// Online C compiler to run C program online
#include <stdio.h>

int main() {
    int score;
    

    printf("Enter the student's score (0-100): ");
    scanf("%d", &score);
    

    if(score < 0 || score > 100) {
        printf("Invalid score. Please enter a score between 0 and 100.\n");
        return 1;
    }
    

    switch(score / 10) {
        case 10:
            printf("grade is:A\n");
            break;
        case 9:
            printf("grade is: A\n");
            break;
        case 8:
            printf("grade is: B\n");
            break;
        case 7:
            printf("grade is: C\n");
            break;
        case 6:
            printf("grade is: D\n");
            break;
        default:
            printf("grade is: F\n");
    }

    return 0;
}
