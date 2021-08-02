#include <iostream>

using namespace std;

int main()
{
    int n,m;
    cin>>n>>m;

    int arr[m][n];

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin>>arr[i][j];
        }
    }

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<"\n";
    }

    // Searching an element in a 2d array
    cout<<"Enter the element to be searched";
    int x;
    cin>>x;

    bool flag= false;
       for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(arr[i][j]==x)
            {
                cout<<i<<" "<<j<<"\n";
                flag = true;
            }
            
            
        }
    }

    if(flag){
        cout<<"Element is found\n";
    }else{
        cout<<"Element is not found\n";
    }
}