/*
  Isyana is the given the number of visitors at her local theme park on N consecutive days .The number of visitors on the i-th day is Vi .
  A day is record breaking if 

  1) The number of visitor on that day is strictly larger than the number of vissitors in each of the previous day 
  2) Either it is  the last day , or the number of vistors on the day is strictly larger than the number of visitors on the following day 



*/
 
#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin>>n;

    int count= 0;

    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }

    int rb = a[0];
    int j =1;
    while(j<n)
    { 
        if(rb<a[j])
        {
            rb = a[j];
            count++;
        }
        else
        {
            rb = a[0];
        }
        j++;
    }

    cout<<"---------------" << endl;
    cout<< rb <<" "<<count<< endl;
}