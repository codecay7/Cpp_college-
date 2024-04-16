#include <iostream>
using namespace std;

void print(int i)
{
    cout << " here is int " << i << endl;
}

void print(float p)
{
    cout << " here is float " << p << endl;
}

int main()
{
    print(15);
    print(6.7);
    return 0;
}