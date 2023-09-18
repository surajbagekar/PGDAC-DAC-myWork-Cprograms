// Title: Armstrong number (With Return Without Arguments)
#include <stdio.h>
#include <math.h>

int checkArmstrong() {
    int num, originalNum, remainder, n = 0, result = 0;

    printf("Enter an integer: ");
    scanf("%d", &num);

    originalNum = num;

    while (originalNum != 0) {
        originalNum /= 10;
        ++n;
    }

    originalNum = num;

    while (originalNum != 0) {
        remainder = originalNum % 10;
        result += pow(remainder, n);
        originalNum /= 10;
    }

    if (result == num) {
        printf("%d is an Armstrong number.\n", num);
        return 1;
    } else {
        printf("%d is not an Armstrong number.\n", num);
        return 0;
    }
}

int main() {
    checkArmstrong();
    return 0;
}
