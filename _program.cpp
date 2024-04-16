#include <iostream>
class sample
{
    int m, n;
public:
 sample(int x, int y)
    {
        m = x;
        n = y;
    }
 sample(sample &ob)
    {
        m = ob.m;
        n = ob.n;
    }
void Disp()
    {
        std::cout << "m:" << m << "\n";
        std::cout << "n:" << n << "\n";
    }};
int main()
{   sample s(10, 15);
    sample s1 = s;
    s.Disp();
    s1.Disp();
return 0;
}