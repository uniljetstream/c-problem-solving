#include <iomanip>
#include <ios>
#include <iostream>

int main(int argc, char *argv[])
{
    long double a, b;
    std::cin >> a >> b;
    std::cout << std::fixed << std::setprecision(9) << a / b;
    return 0;
}
