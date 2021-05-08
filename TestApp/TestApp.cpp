
#include <iostream>

// version 2 SW without a bug

void foo(int a)
{
    std::cout << "Result: " << a <<"\n";
}
int main()
{
    std::cout << "function call should say 1\n";
    foo(1);
}
