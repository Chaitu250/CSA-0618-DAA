#include <stdio.h>
#include <string.h>
#include <ctype.h>


int isNumberPalindrome(int num) 
{
    int reversed = 0, original = num;

    while (num > 0) {
        int remainder = num % 10;
        reversed = reversed * 10 + remainder;
        num /= 10;
    }

    
    if (original == reversed) {
        return 1;
    } else {
        return 0;
    }
}
