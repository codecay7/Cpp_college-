//[1]implicit
//----------------------------------------------

#include <iostream>
int main()
{
    int i;
    char ch;
    std::cout << "enter any character"
              << "\n";
    std::cin >> ch;

    i = ch; // implicit

    std::cout << " ascii value is:" << i << "\n";
    return 0;
}


// explicit type conversion(casting)
//---------------------------------------------------
#include <iostream>
int main()
{
    int a, b;
    float x;

    std::cout << "enter the value of a and b"
              << "\n";
    std::cin >> a >> b;

    // x=a/b------->  NOT PERFECT
    x = (float)a / b; //---------->EXPLICIT TYPE

    std::cout << "result: "
              << x << "\n";
    return 0;
}