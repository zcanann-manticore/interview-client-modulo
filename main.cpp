#include <iostream>
#include <map>
#include <string>
#include <set>
#include <vector>

// Return an integer that represents (a * b) % n without using the % operator
int CalculateModOfProduct(int a, int b, int n)
{
    return 0;
}

int main(int argc, char *argv[])
{
    std::cout << CalculateModOfProduct(2, 3, 4) << "\texpected: " << (2 * 3) % 4 << std::endl; // expected: 2
    std::cout << CalculateModOfProduct(1, 5, 2) << "\texpected: " << (1 * 5) % 2 << std::endl; // expected: 1
    std::cout << CalculateModOfProduct(9, 1, 5) << "\texpected: " << (9 * 1) % 5 << std::endl; // expected: 4

    return EXIT_SUCCESS;
}
