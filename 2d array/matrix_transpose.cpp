#include<iostream>


using namespace std;

int main()
{
    int n;
    cin>>n;

    int arr[n][n];

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin>>arr[i][j];
        }
    }

    cout<<"Defalt matrix"<< endl;

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout<<arr[i][j]<<" ";
        }

        cout<<"\n";
    }

    

    for(int i=0; i<n ; i++)
    {
        for(int j = i ; j< n ; j++)
        {
            int temp = arr[i][j];
            arr[i][j] = arr[j][i];
            arr[j][i] = temp;
         }
    }

    // cout<<"Transposed Matrix" << endl;

    cout<<"---------------------------"<<endl;

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout<<arr[i][j]<<" ";
        }

        cout<<"\n";
    }


}