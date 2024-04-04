#include <iostream>

int fibonacci(int n) {
    if (n <= 1) {
        return n;
    } else {
        return fibonacci(n - 1) + fibonacci(n - 2);
    }
}

int main() {
    int n;
    std::cout << "Enter the value of n: ";
    std::cin >> n;

    if (n < 0) {
        std::cout << "Invalid input. Please enter a non-negative integer." << std::endl;
    } else {
        for (int i = 0; i < n; i++) {
            std::cout << fibonacci(i) << " ";
        }
        std::cout << std::endl;
    }

    return 0;
}

/*

To check if an integer n is a part of the fibonacci numbers sequence, the code for that using recursion is given below:-

#include <iostream>

bool isFibonacci(int n, int a = 0, int b = 1) {
    if (n < 0) {
        return false;
    }
    if (n == a) {
        return true;
    }
    if (n < a) {
        return false;
    }
    return isFibonacci(n, b, a + b);
}

int main() {
    int n;
    std::cout << "Enter a number to check if it's in the Fibonacci sequence: ";
    std::cin >> n;

    if (isFibonacci(n)) {
        std::cout << n << " is in the Fibonacci sequence." << std::endl;
    } else {
        std::cout << n << " is not in the Fibonacci sequence." << std::endl;
    }

    return 0;
}

*/