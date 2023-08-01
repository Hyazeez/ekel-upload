#include <stdio.h>

// Function to check if a number is a palindrome
int isPalindrome(int number) {
    int perfectnum = number;
    int revnum = 0;

    // Reverse the number
    while (number > 0) {
        int digit = number % 10;
        revnum = revnum * 10 + digit;
        number /= 10;
    }

    // Compare the reversed number with the original number
    if (revnum == perfectnum) {
        return 1; // The number is a palindrome
    } else {
        return 0; // The number is not a palindrome
    }
}

int main() {
    int number;
    char choice;

    printf("\n!!!...Welcome to the Palindrome Number Checker...!!!\n");

    do {
        // Prompt for input and check for errors
        printf("\nPlease enter a number: ");
        if (scanf("%d", &number) != 1) {
            printf("Error:- .....Please enter a valid number.....\n");
            return 1;
        }

        if (isPalindrome(number)) {
            printf("%d is a palindrome number.\n", number);
        } else {
            printf("%d is not a palindrome number.\n", number);
        }

        printf("\nDo you want to check another number? (Y/N): ");
        scanf(" %c", &choice);

    } while (choice == 'Y' || choice == 'y');

    printf("\nThank you for using the Palindrome Number Checker...!!!\n");

    return 0;
}

