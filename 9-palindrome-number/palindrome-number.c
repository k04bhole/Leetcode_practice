#include <stdbool.h>

bool isPalindrome(int x) {
    // Negative numbers are never palindromes
    if (x < 0) {
        return false;
    }

    long original = x;
    long reversed = 0;

    // Standard loop to reverse the full number
    while (x > 0) {
        reversed = (reversed * 10) + (x % 10);
        x /= 10;
    }

    // If the reversed number matches the original, it's true
    return original == reversed;
}
