#include <iostream>

using namespace std;

class student_details
{
private:
    char Name[30];
    int roll;
    float s1, s2, s3, s4, s5, s6;

public:
    void Assign()
    {
        cout << "Enter name and roll_no of the student respectively" << endl;
        cin.getline(Name, 30);
        cin >> roll;
        cout << "\nEnter all 6 subjects marks properly" << endl;
        cin >> s1 >> s2 >> s3 >> s4 >> s5 >> s6;
    }
    void display()
    {
        cout << "\nName= " << Name << "\nRoll = " << roll << "\nsubject-1 = " << s1 << "\nsubject-2 = " << s2 << "\nsubject-3 = " << s3 << "\nsubject-4 = " << s4 << "\nsubject-5 = " << s5 << "\nsubject-6 = " << s6;

    }
    void Total_Average_mark();
};
void student_details::Total_Average_mark()
{
    float Total = (s1 + s2 + s3 + s4 + s5 + s6);
    float average = Total / 6;
    cout << "\ntotal mark = " << Total << "\naverage mark = " << average;
}
int main()
{
    student_details student;
    student.Assign();
    student.display();
    student.Total_Average_mark();
    return 0;
}