
// Title: Armstrong number (Without Return With Arguments)
#include <stdio.h>
#include <math.h>

void checkArmstrong(int num) {
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

    if (result == num) {
        printf("%d is an Armstrong number.\n", num);
    } else {
        printf("%d is not an Armstrong number.\n", num);
    }
}

int main() {
    int num;
    
    printf("Enter an integer: ");
    scanf("%d", &num);
    
    checkArmstrong(num);
    return 0;
}
