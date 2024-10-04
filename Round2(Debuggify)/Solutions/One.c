#include <stdio.h>
#include "pass.h"
// don't case about header file
// this code only contains syntax and semantic errors

void getPassword(char **password)
{
    *password = SECRET_PASS; // SECRET_PASS is predefined string in header file
}

int main()
{
    char *password;
    getPassword(&password); // Pass the address of the password
    printf("%s\n", password);
    return 0;
}

/**
 * OUTPUT:
 * TuchkiTuyaan
 */
