/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
using namespace std;

int fun()
{
    string name;
    int age;
    float weight;
    cout<<"Enter your name"<<endl;
    cin>>name;
    cout<<"Enter your age"<<endl;
    cin >> age ;
    cout<<"\n Enter your weight"<<endl;
    cin >> weight;
    
    cout<<"\n Hello";
    cout<<name ;
    cout<<"Welcome to the blood donation camp";
    
    if (age>=18)
    {
        if(weight>=50)
        {
        cout<<"You are eligible to vote"<<endl;
        }
        
        else
        {
            cout<<"You are not eligible to vote due to underweight"<<endl;
            
        }
    }
    else
    {
        cout<<"You are not eligible to vote"<<endl;
    }
    return 0;
}    
    
int main()
{
    fun();
    cout<<"Thank you for voting";
    return 0;
}
