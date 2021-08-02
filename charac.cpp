// Function for testing the character 
// Function for testing the character base 
/*

     isalpha(c)  True if c is a letter 
     isalnum(c)  true if c is a letter or digit 
     isdigit(c)   true if c is a digit 
     islower(c)    true if c is a lower case letter 
     isprint(c)   true if c is a printable character 
     ispunc(c)    true if c is upper case letter
     isspace(c) true if c is a whitespace 

     tolower(c)  returns lowercase of c 
     toupper(c)  returns uppercase of c 

*/

#include <bits/stdc++.h>
#include <cctype>  // for c-style string functions
#include <cstring>  // for character-based functions 

/*
   c style strings properties 


   * contigous in memory
   * implemented as an array character 
   * terminated by the null charater 
   * null character with a value 0
   * Referred to as zero or null terminated strings  
   
   String literal 

   * sequence of characters in double quotes e.g . "Frank"
   * constant
   * terminated with a null character 
  
*/


using namespace std;

int main()
{
    // declaring the chars 

    char firstName[20]{};
    char lastName[20]{};
    char fullName[50]{};
    char temp[50]{};

//    cout<<firstName; // Will show garbage value 
//     cout<<"Enter your 1st name:";
//     cin>>firstName;

//     cout<<"Enter your last name:";
//     cin>>lastName;

//     cout<<" --------------- "<< endl;
//     cout<< "Hello your first name is " << firstName << " and your last name is " << lastName<<endl; 

    // cout<<strlen(firstName)<<endl;
    // cout<<strlen(lastName)<<endl;

    // strcpy(fullName,firstName);
    // strcat(fullName," ");
    // strcat(fullName,lastName);

    // cout<<"Your full name is "<<fullName <<endl;
    

    // cout<<"--------------------"<<endl;
    cout<<"Enter your full Name:";
    cin.getline(fullName,50);
    cout<<"Your full name is : "<< fullName << endl;




}