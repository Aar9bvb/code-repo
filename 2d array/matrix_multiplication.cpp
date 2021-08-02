#include<iostream>


using namespace std;

int main()
{
    int n,m,k;
    cin>>m>>k>>n;

    int a1[m][k];

    int a2[k][n];

    for(int i=0; i<m; i++)
    {
       for(int j=0;j<k;j++)
       {
           cin>>a1[i][j];
       }
    }

    cout<<"Matrix 1:"<<endl;

     for(int i=0; i<m; i++)
    {
       for(int j=0;j<k;j++)
       {
           cout<<a1[i][j]<<" ";
       }
       cout<<"\n";
    }

    cout<<"---------------------"<<endl;

    cout<<"Matrix 2"<<endl;

    for(int i=0; i<k; i++)
    {
       for(int j=0;j<n;j++)
       {
           cin>>a2[i][j];
       }
    }

      for(int i=0; i<k; i++)
    {
       for(int j=0;j<n;j++)
       {
           cout<<a2[i][j]<<" ";
       }
       cout<<"\n";
    }

    int a3[m][n];
    for(int i =0 ; i<m;i++)
    {

        for(int j =0; j<n; j++)
        {
            a3[i][j] = 0;
        }
    }

    for(int i=0; i<m ; i++)
    {
        for(int j =0;j<n ; j++)
        {
            for(int l =0 ;l<k;l++)
            {
                a3[i][j] += a1[i][l]*a2[l][j];
            }
        }
    }
    
    cout<<"-----Matrix 3: " <<endl;
    
    for(int i =0 ;i<m ;i++)
    {
        for(int j =0 ;j<n ;j++){
               cout<<a3[i][j]<<" ";

        }
        
        cout<<"\n";  
    }

    return 0;


}