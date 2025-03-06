#include <stdio.h>

int main() {

    int res, x = 1;

    while (x <= 10)
    {
        res = 2 * x;
        printf("%d\n", res);
        x = x + 1;
    }
    
    return 0;  // End the program with a status code of 0 (no errors)
    
}