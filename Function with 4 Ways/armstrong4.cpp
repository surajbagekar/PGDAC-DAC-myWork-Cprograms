
// Title: Armstrong number (With Return With Arguments)
#include <stdio.h>
#include <math.h>

int isArmstrong(int num) {
    int originalNum, remainder, n = 0, result = 0;

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

    return result == num;
}

int checkArmstrong(int num) {
    if (isArmstrong(num)) {
        printf("%d is an Armstrong number.\n", num);
        return 1;
    } else {
        printf("%d is not an Armstrong number.\n", num);
        return 0;
    }
}

int main() {
    int num;

    printf("Enter an integer: ");
    scanf("%d", &num);
    
    checkArmstrong(num);
    return 0;
}
