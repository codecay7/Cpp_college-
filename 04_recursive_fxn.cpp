//factorial
//----------------------------------------------------------------
#include <iostream>
int fact(int n)
{
    if (n <= 1)
        return 1;
    else
        return n * fact(n - 1);
}
int main()
{
    int x;
    x = fact();
    std::cout << "x: " << x << "\n";

    return 0;
}