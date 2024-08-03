// Input an integer array, output the product of the array.
#include <iostream>
using namespace std;
int main() {
    int x;
    int y;
    int i;
    cout << "Size of array?\n";
    cin >> x;
    int arr[x];
    cout << "What is your number\n";
    for (i=0; i<x; i++){
        cin>>arr[i];
    }
    
    for(i=0, y=1; i<x; i++){
        //y=y*(arr[i]);
        y*=arr[i];
        cout<<"index="<<i<<" y="<<y<<"\n";
    }
    cout<<"the product is "<<y;
    return 0;
}