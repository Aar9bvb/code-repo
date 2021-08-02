#include <iostream>
#include <vector>

using namespace std;

int main()
{
  // Intialization of vectors and accessing them in diffrent ways 

  // vector <int> test(3); output is intialized to 0
  // vector <int> test(3,100); output is intialized to all 100 
   // vector <int> test{100,200,300,400};
    // cout<<"1st index is at 0:"<< test[0] << endl;
    // cout<<"1st index is at 1:"<< test[1] << endl;
    // cout<<"1st index is at 2:"<< test[2] << endl;
    // cout<<"1st index is at 3:"<< test[3] << endl;


    // using at methods 
    //cout<<test.at(2)<<endl; 

    // pushback  is used to add an element to the intialized vector
    // test.push_back(80);
    // cout<<test.at(4);
    

    // 
    // vector<char> vowels{'a','b','c','d','e'};
    // for(int i=0;i<5;i++)
    // {
    //     cout<<vowels[i]<<endl;
    //     cout<<endl;
    // }
      

      // 2d vector 
      // vector<vector<int>> movie
      // {
      //     {1,3,5,7},
      //     {1,2,3,4},
      //     {2,3,4,5},
      // };

      // cout<< "\n Here is the movie rating of the #1 user "<<endl;
      // cout<<movie[0][0]<<endl;
      // cout<<movie[0][1]<<endl;
      // cout<<movie[0][2]<<endl;
      // cout<<movie[0][3]<<endl;

      // cout<< "\n Here is the movie rating of the #2 user "<<endl;
      // cout<<movie[1][0]<<endl;
      // cout<<movie[1][1]<<endl;
      // cout<<movie[1][2]<<endl;
      // cout<<movie[1][3]<<endl;

      // cout<< "\n Here is the movie rating of the #3 user "<<endl;
      // cout<<movie[2][0]<<endl;
      // cout<<movie[2][1]<<endl;
      // cout<<movie[2][2]<<endl;
      // cout<<movie[2][3]<<endl;

      /*
           Iterators are used for following ways 

           1. at() is used to give the elements at the index at any elements  
      */

      vector <int> age{100,200,300};
      for(auto i=0;i<3;i++)
      {
        cout<<age.at(i)<<endl;
      }

      cout<<"\nThe size of the vector is: " << age.size()<<endl;
      cout<<endl;

      cout<<"\n Enter the new updated vector elements ";
      cin>>age.at(0)>>age.at(1)>>age.at(2);

      cout<<"------------------------------"<<endl;
      for(auto i=0;i<3;i++)
      {
        cout<<age.at(i) <<endl;
      }

      return 0;

}