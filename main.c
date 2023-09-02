#include <stdio.h>  // Standard I/O
#include <stdlib.h>  // Standard Library
#include <string.h>  // String operations
#include <stdbool.h>  // Boolean types

// Function declaration
void myFunction(int x, float y);

// Function declaration
void myFunctionByReference(int *x, float *y);

int main() {
    printf("Hello, World!\n");

    // Variable Initialization and Assignment
    int a = 1;
    float b = 2.0;
    char c = 'c';
    bool d = true;  // Requires #include <stdbool.h>

    // If-Else Statement
    if (a == 1) {
        printf("a equals 1\n");
    } else {
        printf("a does not equal 1\n");
    }

    // Switch Statement
    switch (a) {
        case 1:
            printf("a is 1\n");
            break;
        default:
            printf("a is not 1\n");
            break;
    }

    // For Loop
    for (int i = 0; i < 10; i++) {
        printf("Loop: %d\n", i);
    }

    // While Loop
    int counter = 0;
    while (counter < 5) {
        printf("Counter: %d\n", counter++);
    }

    // Do-While Loop
    counter = 0;
    do {
        printf("Do-While Counter: %d\n", counter++);
    } while (counter < 5);

    // Arrays
    int arr[5] = {1, 2, 3, 4, 5};

    // Pointers
    int *ptr = &a;

    // Strings
    char str1[] = "Hello";
    char *str2 = "World";

    // String Concatenation (Requires #include <string.h>)
    char combined[20];
    strcpy(combined, str1);
    strcat(combined, " ");
    strcat(combined, str2);
    printf("Combined String: %s\n", combined);

    // Function Call
    myFunction(a, b);
    myFunctionByReference(&a, &b);

    // Memory Allocation (Requires #include <stdlib.h>)
    int *dynamicArr = (int *) malloc(5 * sizeof(int));
    if (dynamicArr == NULL) {
        fprintf(stderr, "Memory allocation failed\n");
        return 1;  // Non-zero return indicates an error
    }

    // Free allocated memory
    free(dynamicArr);

    return 0;
}

// Function definition
void myFunction(int x, float y) {
    printf("In myFunction: x = %d, y = %.2f\n", x, y);
}

// Function definition
void myFunctionByReference(int *x, float *y) {
    printf("In myFunctionByReference: x = %d, y = %.2f\n", *x, *y);
}
