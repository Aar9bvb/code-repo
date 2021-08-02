#include <bits/stdc++.h>

using namespace std;

int main()
{
    vector<int> num{1,2,3,4};
    int target;
    cin>>target;

    for(auto i=0;i<4;i++)
    {
        for(auto j = i+1;j<4;j++)
        {
            if(num[i]+num[j]==target)
            {
                cout<<"["<<i<<","<<j<<"]"<<endl;
            }
            
        }
    }


}