#include <iostream>

int main() {
    int n;
    std::cin >> n;
    std::cout << n << " ";
    while (n > 1) {
        if (n & 1) { 
            n *= 3;
            n++;
            std::cout << n << " ";
        }
        else {
            n /= 2;
            std::cout << n << " ";
        }
    }
    return 0;
}
