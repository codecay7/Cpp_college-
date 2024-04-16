#include <iostream>
using namespace std;
int main()
{
    int  y;
    cout << "enter year to know leap year or not" << endl;
    cin >> y;
    if (y % 4 == 0)
    {
        cout << "  leap year" << endl;
    }
    else
    {
        cout << " leap year " << endl;
    }

    return 0;
}

/*

#include <iostream>
int main()
{
    int i;
    std::cout << "enetr i to get whether given no. is even ot odd"
              << "\n";
    std::cin >> i;
    if (i % 2 == 0)
    {
        std::cout << "given no. is even"
                  << "\n";
    }
    else
    {
        std::cout << "given no. is odd"
                  << "\n";
    }
    return 0;
}
*/