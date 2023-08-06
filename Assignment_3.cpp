/*Write a C++ program to read N employees name, gender, post, and salary in an array of
object called EMP. Then display all the details*/
#include <iostream>
#include <iomanip>
using namespace std;
class Employees
{
private:
    char Name[30], post[10], gender;
    float salary;

public:
    void Assign()
    {
        //cin.getline(Name, 30);
        cin >>Name>> gender >> post >> salary;
    }
    void Display()
    {
        cout << setw(20) << Name << setw(15) << post << setw(15) << gender << setw(10) << salary << endl;
    }
};
int main()
{
    int n;
    cout << "How many employee details to be input? " << endl;
    cin >> n;
    Employees EMP[n];
    for (int i = 0; i < n; i++)
    {
        cout << "Enter Employee_no." << i + 1 << " Name,Gender,post and salary : " << endl;
        EMP[i].Assign();
    }
    for (int i = 0; i < n; i++)
    {
        cout<<endl << setw(20) << "Name" << setw(15) << "Post" << setw(15);
        cout << "Gender" << setw(10) << "Salary" << endl;
        for (i = 0; i < n; i++)
            EMP[i].Display();
    }
    return 0;
}