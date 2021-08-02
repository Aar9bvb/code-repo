#include<iostream>


using namespace std;

int main()
{
    int m,n;
    cin>>m>>n;

    int arr[m][n];
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin>>arr[i][j];
        }
    }

    cout<<"Defalt matrix"<< endl;

     for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout<<arr[i][j]<<" ";
        }

        cout<<"\n";
    }

    int r_start=0; // row_start intialize  to zero
    int r_end = m-1;
    int c_start = 0;
    int c_end = n-1;

    cout<<"Spiral Order Traversal"<< endl;

    while (r_start <= r_end && c_start <= c_end) 
    {
        // for row_start
        for(int col = c_start; col <= c_end; col++)
        {
            cout<<arr[r_start][col]<<" ";
        }

        r_start++;

        // for col_end 
        for(int row = r_start; row <= r_end; row++ )
        {
            cout<<arr[row][c_end]<<" ";
        }

        c_end--;
        // for r_end
        for(int col = c_end; col >= c_start; col--)
        {
            cout<<arr[r_end][col]<<" ";
        }

        r_end--;

        for(int row = r_end; row >= r_start; row-- )
        {
            cout<<arr[row][c_start]<<" ";
        }
        c_start++;
    }
    
}