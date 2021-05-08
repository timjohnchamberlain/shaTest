
#include <iostream>

// version 1 SW with a bug

void foo(int a)
{
    std::cout << "Result: " << a+1 <<"\n";
}
int main()
{
    std::cout << "function call should say 1\n";
    foo(1);
}
