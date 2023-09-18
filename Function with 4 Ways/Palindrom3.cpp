
// Title: Palinddrome or Not (Without Return With Arguments)
#include <stdio.h>

int checkPalindrome() {
    int num, reversedNum = 0, originalNum, remainder;

    printf("Enter an integer: ");
    scanf("%d", &num);

    originalNum = num;

    while (num != 0) {
        remainder = num % 10;
        reversedNum = reversedNum * 10 + remainder;
        num /= 10;
    }

    if (originalNum == reversedNum) {
        printf("%d is a palindrome.\n", originalNum);
        return 1;
    } else {
        printf("%d is not a palindrome.\n", originalNum);
        return 0;
    }
}

int main() {
    checkPalindrome();
    return 0;
}
