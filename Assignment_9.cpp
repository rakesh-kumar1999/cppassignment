/*Write a C++ program using pure abstract class*/
#include <iostream>
using namespace std;

class Numbers // abstract class
{
public:
    virtual void Read() = 0;   // pure virtual function
    virtual void Result() = 0; // pure virtual function
};
class Sum : public Numbers   // concrete class
{
    float a, b;

public:
    void Read()
    {
        cout << "Enter two Numbers for sum: ";
        cin >> a >> b;
    }
    void Result()
    {
        cout << "Sum of " << a << " and " << b << " is " << a + b << endl;
    }
};
class Product : public Numbers // concrete class
{
    float a, b;

public:
    void Read()
    {
        cout << "Enter two Numbers for product:";
        cin >> a >> b;
    }
    void Result()
    {
        cout << "Product of " << a << " and " << b << " is " << a * b << endl;
    }
};
int main()
{
    cout << "Size of Numbers = " << sizeof(Numbers) << endl;
    cout << "Size of Sum = " << sizeof(Sum) << endl;
    cout << "Size of Product = " << sizeof(Product) << endl;
    Sum obj1;
    Product obj2;
    obj1.Read();
    obj2.Read();
    obj1.Result();
    obj2.Result();
    return 0;
}