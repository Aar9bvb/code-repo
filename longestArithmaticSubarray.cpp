#include<iostream>  // Google kisckstart challenge 

/*Here we have to output the length of the longest 
 sub array such that the comman diffrence b/w there element is in A.P.

*/

using namespace std;


int main()
{
    int n;
    cin>>n;

    int a[n];

    for(int i =0;i<n;i++)
    {
        cin>>a[i];
    }
    
    int ans = 2; // Minimum subarray length
    int pd = a[1]-a[0]; // initializing the common difference  
    int j=2;   // for interration over j =2 in array 
    int curr = 2;   // length of the current subarray 

    while(j<n)
    {
        if(pd==a[j]-a[j-1])
        {
            curr++;
        }
        else
        {
            pd = a[j] - a[j-1];
            curr = 2;
        }
        ans = max(ans,curr);
        j++;
    }
     cout<<"----------------------"<<endl;
     cout<<ans<<endl;

     return 0 ;
}