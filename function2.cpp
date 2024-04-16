#include <iostream>
using namespace std;
int sum(int a, int b)
{
    int sum = a + b;
    cout << "sum: " << sum << endl;
    return sum;
}
int main()
{
    int t;
    t = sum(3, 4);

    return 0;
}