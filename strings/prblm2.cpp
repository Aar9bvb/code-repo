/*
    To form the biggest number from the numeric string

    ex: "5  4  1  2  3 " -----------> "5 4 3 2 1"
     

*/

#include<iostream>
#include<string>
#include<algorithm>


using namespace std;

int main()
{
   string str = "1234567";
   
   sort(str.begin(), str.end(), greater<int>());

   cout << str << endl;
   
   return 0; 
}