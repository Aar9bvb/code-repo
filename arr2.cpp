#include<iostream>

using namespace std;

int main()
{
    // char vowel[] {'a','e','i','o','u'};
    // cout<<"\nThe first vowel is :"<<vowel[0]<<endl;
    // cout<<"\nThe last vowel is :"<<vowel[4]<<endl;

    // // cin>>vowel[5];  out of bounds dont do this 

    // double hi_temps[]{90.1,89.8,77.5,81.6};
    // for(int i=0;i<4;i++)
    // {
    //     cout<<"\nThe "<<i+1<<" high temperature is :"<< hi_temps[i] <<endl;

    // }

    int test_scores[5]{100,20,50}; // intializes 1,2 and 3 to be 100,20,50 and rest as 0  
    for(int i=0;i<5;i++)
    {
        cout<<"\nThe "<<i+1<<" high temperature is :"<< test_scores[i] <<endl;

    }

    cout <<"\nEnter the 5 test scores: ";
    cin>>test_scores[0];
    cin>>test_scores[1];
    cin>>test_scores[2];
    cin>>test_scores[3];
    cin>>test_scores[4];
    cout<<"--------------------------------------------"<<endl;

    for(int i=0;i<5;i++)
    {
        cout<<test_scores[i];
        cout<<endl;
    }
    

    
    return 0;

}
