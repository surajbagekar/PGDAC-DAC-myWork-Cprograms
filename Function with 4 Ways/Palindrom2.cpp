// Title: Palinddrome or Not (With Return Without Arguments)
#include <stdio.h>

void checkPalindrome(int num) {
    int reversedNum = 0, originalNum, remainder;

    originalNum = num;

    while (num != 0) {
        remainder = num % 10;
        reversedNum = reversedNum * 10 + remainder;
        num /= 10;
    }

    if (originalNum == reversedNum) {
        printf("%d is a palindrome.\n", originalNum);
    } else {
        printf("%d is not a palindrome.\n", originalNum);
    }
}

int main() {
    int num;

    printf("Enter an integer: ");
    scanf("%d", &num);

    checkPalindrome(num);
    return 0;
}
