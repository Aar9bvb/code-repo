#include<iostream>
#include<string>
#include<algorithm>


using namespace std;

int main()
{
    /*

    converting the lower case to upper case 
    If the ascii value of 'a' - 'A' is done then we get 32 .
    So by logic we can run a for loop to convert the lower case to upper case 
    */

   string str = "adsfhajsdfi";

   cout <<"Smaller to bigger " << endl;

   for(int i = 0;i< str.size();i++)
   {
       if(str[i] >= 'a' && str[i] <= 'z')
            str[i] -= 32;
   }
    
    cout << str <<endl;


    cout <<" Bigger to smaller " << endl;

    for(int i = 0;i< str.size();i++)
   {
       if(str[i] >= 'a' && str[i] <= 'z')
            str[i] += 32;
   }
    
    cout << str <<endl;

    // the same can also be done through c++ inbuilt function

    string s2 = "fakjlmopqr";

    cout<<"----------Upper----------" <<endl;

    transform(s2.begin(),s2.end(),s2.begin(), ::toupper);

    cout << s2 << endl;

    cout<<"----------Lower----------" <<endl;

    transform(s2.begin(),s2.end(),s2.begin(), ::tolower);

    cout << s2 << endl;
    
    return 0;

}