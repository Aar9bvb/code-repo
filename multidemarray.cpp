// #include <iostream>

// using namespace std;

// int main()
// {
//     /*
//         This programme is to display the 2-d array declaration and 
//     */
//    int two[3][4] = {{1,2,3,4},{5,6,7,8},{9,10,11,12}};
   
//    for(int i=0;i<3;i++)
//    {
//        for(int j=0;j<4;j++)
//        {
//            cout<<two[i][j]<<"\t";
//        }
//        cout<<endl;
//    }
//    return 0;
// }


#include <iostream>

using namespace std;

int main()
{
    int m,n;
    cin>>m>>n;

    int arr[m][n];


    cout<<"Enter the matrix elements:"<<endl;
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n ;j++)
        {
            cin>>arr[i][j];
        }
    }


    cout<<"Matrix displayed"<<endl;
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<"\n";
    }
}