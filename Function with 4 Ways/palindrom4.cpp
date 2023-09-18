// Title: Palinddrome or Not (With Return With Arguments)
#include <stdio.h>

int isPalindrome(int num) {
    int reversedNum = 0, originalNum, remainder;

    originalNum = num;

    while (num != 0) {
        remainder = num % 10;
        reversedNum = reversedNum * 10 + remainder;
        num /= 10;
    }

    return originalNum == reversedNum;
}

void checkPalindrome(int num) {
    if (isPalindrome(num)) {
        printf("%d is a palindrome.\n", num);
    } else {
        printf("%d is not a palindrome.\n", num);
    }
}

int main() {
    int num;

    printf("Enter an integer: ");
    scanf("%d", &num);

    checkPalindrome(num);
    return 0;
}
