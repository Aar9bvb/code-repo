#include<iostream>

using namespace std;

int main()
{
    // int a = 10;
    // int *p;
    // p = &a;

    //cout<<*p<<endl;  //  expected output 10
    // cout<<p<<endl;   // expected output address of a 
    // cout<<&a<<endl;  // expected output address of a 

    int arr[3]={10,20,30};
    cout<<arr[0]<<endl; // 10 will be the output 

    int *p = arr;
    cout<<*p<<endl; // expected output shld be 10

    // for printing the array elements using pointers concepts 

    cout<<"---------------------"<<endl;

    for(int i =0;i<3;i++)
    {
        cout<<*(p+i)<<endl;

    }

    cout<<"---------------------"<<endl;


     for(int i =0;i<3;i++)
    {
        cout<<*(arr+i)<<endl;

    }


}