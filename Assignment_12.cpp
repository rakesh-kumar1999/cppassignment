/*Write a C++ program to find largest and smallest of three numbers using class template*/
#include <iostream>
using namespace std;

template <class T>
class LS
{
    T num1, num2, num3;
public:
    void Assign()
    {
        cin>>num1>>num2>>num3;
    }
    void show()
    {
        cout<<"\nYour Three numbers: "<<num1<<" "<<num2<<" "<<num3<<endl;
    }
    void Largest()
    {
        T largest=(num1>num2&&num1>num3)?num1:(num2>num1&&num2>num3)?num2:num3;
        cout<<"The largest number: "<<largest<<endl;
    }
    void Smallest()
    {
        T smallest=(num1<num2&&num1<num3)?num1:(num2<num1&&num2<num3)?num2:num3;
        cout<<"The smallest number: "<<smallest<<endl;
    }
};
int main()
{
    LS<int>obj1;
    LS<float>obj2;
    cout<<"Enter three integers:"<<endl;
    obj1.Assign();
    obj1.show();
    obj1.Largest();
    obj1.Smallest();
    cout<<"Enter three floating numbers:"<<endl;
    obj2.Assign(); 
    obj2.show();
    obj2.Largest();
    obj2.Smallest();

    return 0;
}