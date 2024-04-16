#include <iostream>
using namespace std;

class Shape
{
public:
    virtual void calculateArea() = 0;
};

class Circle : public Shape
{
public:
    void calculateArea() override {}
};

class Rectangle : public Shape
{
public:
    void calculateArea() override {}
};

int main()
{

    Shape* shape1 = new Circle();
    shape1->calculateArea();

    Shape* shape2 = new Rectangle();
    shape2->calculateArea();

   


    return 0;
}
