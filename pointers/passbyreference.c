// In C programming, the concepts of "pass by value" and "pass by reference" refer to how arguments
//  are passed to functions, and they have important implications for how those functions can modify 
//  the values of the original variables. Here are the basic differences:

// Pass by Value:

// In pass by value, a copy of the actual parameter (the value) is passed to the function.
// The function works with the copy, and any modifications made to the parameters inside the
//  function do not affect the original variables outside the function.

// Pass by Reference:

// In pass by reference, the memory address (reference) of the actual parameter is passed to the function.
// This means the function can directly access and modify the original variables outside the function.
// Pointers are commonly used to implement pass by reference in C.

void modifyValue(int x) {
    x = x + 1;
}

int main() {
    int num = 5;
    modifyValue(num);
    // 'num' remains unchanged because it was passed by value
    return 0;
}

void modifyReference(int *x) {
    *x = *x + 1;
}

int main() {
    int num = 5;
    modifyReference(&num);
    // 'num' is modified because it was passed by reference
    return 0;
}
