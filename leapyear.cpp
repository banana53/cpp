#include <math.h>
#include <iostream>
using namespace std;
int aoog;
int soog;
int poog;
//input a year (0-2024), output leap year or not leap year.
int main() {
int x;
cout<<"Hello man. I'm a time traveller and idk the year because I am that smart. What year is it\n"
;
cin>>x;
cout<<"Oh, thanks. Hey, did you know that ";
//aoog=x%4;
//soog=x%100;
//poog =x%400;

if(x%4==0){
    if(x%100==0){
        if(x%400==0)    {
            cout<<" that year is a leap year?";
        }
        else {
            cout<<"that year is not a leap year?";
        }
    }
    else{
        cout<<" that year is a leap year?";
    }
}
else{
    cout<<" that year is not a leap year?";
}
/*
switch(aoog){
    case(0):
        switch(soog){
            case(0):
                switch(poog){
                    case(0):
                        cout<<" that year is a leap year?";
                        break;
                    default:
                        cout<<"that year is not a leap year?";
                        break;
                }
                break;
                
            default:
            cout<<"that year is a leap year?";
        }
        
        break;
    default:
        cout<<" that year is not a leap year?"; 
        break;
}
*/
return 0;
}