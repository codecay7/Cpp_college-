/*
#include <iostream>
using namespace std;
class Student
{
public:
    string name;
    int age;
    bool gender;
    //all are showing state of the student
};
int main()
{
    Student yash;
    yash.name = "YASH";
    return 0;
}

#include <iostream>
using namespace std; 
class Student
{
public:
    string name;
    int age;
    bool gender;

};
int main()
{
    Student yash;
    yash.name = "YASH";
    yash.age =20;
    yash.gender =1;

    Student kanika;
    kanika.name = "KANIKA";
    kanika.age =19;
    kanika.gender =0;

    return 0;}
*/
#include <iostream>
using namespace std;
class KG{
 private: int p;
 private: int q;

 public: void setP(int input)
    {
        p = input;
        q = p / 2; 
    }
};
int main(){

KG obj;
obj.setP(10);

cout << "finalizing..."<<endl;
    return 0;
}
