#include <iostream>
#include <map>
#include <string>
#include <set>
#include <vector>

// Return an integer that represents (a * b) % n without using the % operator
int CalculateModOfProduct(int a, int b, int n)
{

}

int main(int argc, char *argv[])
{
    std::cout << CalculateModOfProduct(2, 3, 4) << "\t(expected: 2)" << std::endl;
    std::cout << CalculateModOfProduct(1, 5, 2) << "\t(expected: 1)" << std::endl;
    std::cout << CalculateModOfProduct(9, 1, 5) << "\t(expected: 4)" << std::endl;

    return EXIT_SUCCESS;
}
