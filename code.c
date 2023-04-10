// USING PRE-BUILT FUNCTIONS

#include<stdio.h>
#include<string.h>
#include <ctype.h>
int main() {
    char password[50];
    int upper = 0, lower = 0, number = 0, special = 0;
    int i;

    printf("Enter your password: ");
    scanf("%s", password);

    for (i = 0; i<strlen(password); i++) {
        if (isupper(password[i])) {
            upper = 1;
        } else if (islower(password[i])) {
            lower = 1;
        } else if (isdigit(password[i])) {
            number = 1;
        } else if(password[i]=='!' || password[i]=='@' || password[i]=='#' || password[i]=='$' || password[i]=='%' || password[i]=='*'){
            special = 1;
        }
    }

    if (upper && lower && number && special) {
        printf("Password is valid.\n");
    } else {
        printf("Password is invalid.\n");
    }

    return 0;
}




// ALTERNATIVE METHOD

#include<stdio.h>
#include<string.h>
int main() {
    char password[50];
    int upper = 0, lower = 0, number = 0, special = 0;
    int i;

    printf("Enter your password: ");
    scanf("%s", password);

    for (i = 0; i<strlen(password); i++) {
        if (password[i]>'A' && password[i]<'Z') {
            upper = 1;
        } else if (password[i]>'a' && password[i]<'z') {
            lower = 1;
        } else if (password[i]>'0' && password[i]<'9') {
            number = 1;
        } else if(password[i]=='!' || password[i]=='@' || password[i]=='#' || password[i]=='$' || password[i]=='%' || password[i]=='*'){
            special = 1;
        }
    }

    if (upper && lower && number && special) {
        printf("Password is valid.\n");
    } else {
        printf("Password is invalid.\n");
    }

    return 0;
}
