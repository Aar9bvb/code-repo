/*
    Return the minimum index of the repeating numbers of an array 
    Example [2,3,3,4]

    Output is : 3 
*/
#include<bits/stdc++.h>

using namespace std ;

int main()
{
    int n;
    cin>>n;

    int a[n];

    for(int i =0;i<n ;i++)
    {
        cin>>a[i];
    }

    const int N = 1e6+2;

    int idx[N];
    for(int i =0;i<N;i++)
    {
        idx[i] = -1;
    }

    int minidx = INT_MAX;

    for(int i=0;i<n;i++)
    {
        if(idx[a[i]] != -1)
        {
            minidx = min(minidx,idx[a[i]]);
        }
        else
        {
            idx[a[i]] = i;    
        }
    }

    if(minidx == INT_MAX)
    {
        cout<<"-1"<<endl;
    }
    else 
    {
        cout<< minidx <<"th index "<<endl; 
    }


    return 0 ;




}