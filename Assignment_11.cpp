/*Write a C++ program to find largest and smallest of ‘n’ numbers using function template*/
#include<iostream>
using namespace std;
template<class T>
void show(T *Arr,int n)
{
    for(int i=0;i<n;i++)
        cout<<Arr[i]<<" ,";
}

template<class T>
T largest(T *Arr,int n)
{
    T lar=Arr[0];
    for(int i=0;i<n;i++)
    {
        if(lar<Arr[i])
        {
            T temp=lar;
            lar=Arr[i];
            Arr[i]=lar;
        }
    }
    return lar;
}
template<class T>
T smallest(T *Arr,int n)
{
    T sml=Arr[0];
    for(int i=0;i<n;i++)
    {
        if(sml>Arr[i])
        {
            T temp=sml;
            sml=Arr[i];
            Arr[i]=sml;
        }
    }
    return sml;
}

int main()
{
    int arr1[5]={7,2,11,3,15},ilarge,ismall;
    cout<<"Integer array elements:"<<endl;
    show(arr1,5);
    ilarge=largest(arr1,5);
    ismall=smallest(arr1,5);
    cout<<"\nLargest element in integer array: "<<ilarge<<"\nSmallest element in integer array: "<<ismall<<endl;
    float arr2[5]={2.7,3.8,3.2,1.1,7.7},flarge,fsmall;
    cout<<"\nFloating array elements:"<<endl;
    show(arr2,5);
    flarge=largest(arr2,5);
    fsmall=smallest(arr2,5);
    cout<<"\nLargest element in floating array: "<<flarge<<"\nSmallest element in floating Array: "<<fsmall<<endl;
    return 0;
}