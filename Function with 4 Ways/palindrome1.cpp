// Title: Palinddrome or Not (Without Return Without Arguments)
#include <stdio.h>

void Palindrome() {
    int num, revnum = 0, originalNum, remainder;

    printf("Enter an integer: ");
    scanf("%d", &num);

    originalNum = num;

    while (num != 0) {
        remainder = num % 10;
        revnum = revnum * 10 + remainder;
        num /= 10;
    }
    if (originalNum == revnum) {
        printf("%d is a palindrome.\n", originalNum);
    } else {
        printf("%d is not a palindrome.\n", originalNum);
    }
}

int main() {
    Palindrome();
    return 0;
}
