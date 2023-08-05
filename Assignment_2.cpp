#include <iostream>
// find addition and substraction of two times
using namespace std;
class time2;
class time1
{
    int h, m, s;

public:
    void set()
    {
        cout << "Enter the 1st time: as hh mm ss" << endl;
        cin >> h >> m >> s;
    }
    void out()
    {
        cout << "1st time:" << endl;
        cout << h << " " << m << " " << s << endl;
    }
    friend void sum(time1, time2);
    friend void dif(time1, time2);
};
class time2
{
    int h, m, s;

public:
    void set()
    {
        cout << "Enter the 2nd time: as hh mm ss" << endl;
        cin >> h >> m >> s;
    }
    void out()
    {
        cout << "2nd time:" << endl;
        cout << h << " " << m << " " << s << endl;
    }
    friend void sum(time1, time2);
    friend void dif(time1, time2);
};
void sum(time1 obj1, time2 obj2)
{
    int H, M, S;
    H = obj1.h + obj2.h;
    M = obj1.m + obj2.m;
    S = obj1.s + obj2.s;
    if (S > 60)
    {
        int m = S / 60;
        int rem = S % 60;
        M = M + m;
        S = rem;
    }
    if (M > 60)
    {
        int h = M / 60;
        int rem = M % 60;
        H = H + h;
        M = rem;
    }

    cout << "sum of time:" << H << ":" << M << ":" << S << endl;
}
void dif(time1 obj1, time2 obj2)
{
    int H, M, S;
    H = obj1.h - obj2.h;
    M = obj1.m - obj2.m;
    S = obj1.s - obj2.s;

    if (M < 0)
    {
        H = H - 1;
        M = 60 + M;
    }
    if (S < 0)
    {
        M = M - 1;
        S = 60 + S;

        
    }

    cout << "difference of time:" << H << ":" << M << ":" << S << endl;
}
int main()
{
    time1 obj1;
    time2 obj2;
    obj1.set();
    obj1.out();
    obj2.set();
    obj2.out();
    sum(obj1, obj2);
    dif(obj1, obj2);
    return 0;
}