// Title: Armstrong number (Without Return Without Arguments)
#include <stdio.h>
#include <math.h>

void ArmStrng() {
    int num, originalNum, rem, n = 0, res = 0;
    
    printf("Enter an integer: ");
    scanf("%d", &num);

    originalNum = num;

    while (originalNum != 0) {
        originalNum /= 10;
        ++n;
    }

    originalNum = num;

    while (originalNum != 0) {
        rem = originalNum % 10;
        res += pow(rem, n);
        originalNum /= 10;
    }

    if (res == num) {
        printf("%d is an Armstrong number.\n", num);
    } else {
        printf("%d is not an Armstrong number.\n", num);
    }
}

int main() {
    ArmStrng();
    return 0;
}