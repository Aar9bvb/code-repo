/*  This is just pass by value so the original value of a do not change 
     however pass by refrence work with the help of pointers .

#include<iostream>

using namespace std;


void increment(int a ){
    a++;
}

int main()
{
    int a = 2;
    increment(a);
    cout<<a<<endl;

    return 0;

}

*/

#include <iostream>

using namespace std;

void increment(int *a)
{
    (*a)++;
}

int main()
{
    int a=2;
    int *p = &a;
    increment(p);
    cout<<a<<endl;

    return 0;
}