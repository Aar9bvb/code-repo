#include<iostream>

using namespace std;

int main()
{
    // largest word in a sentence

    int n;
    cin>>n;
    cin.ignore();

    char arr[n+1];
    cin.getline(arr,n);
    cin.ignore();

    int i =0;
    int currL = 0, maxL =0;
    int st = 0,maxst=0;

    while(1)
    {
        if(arr[i]==' ' || arr[i]== '\0' ){     // if space and end of the statement is encountered maxL is updated to corrL;

            if(currL>maxL){          
                maxL = currL;
                maxst = st;
            }

        currL = 0;    
        st = i+1;
        }
        else
        {
             currL++;

        }
           

        if(arr[i]== '\0')
            break;
        
        i++;
    }

    cout<<maxL<<endl;
    cout<<"The largest element found is:"<<endl; // for printing the largest word 
    for(int i =0;i<maxL;i++){
        cout<<arr[i+maxst];
    }

    return 0;
}