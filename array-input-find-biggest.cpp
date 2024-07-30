// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
//Input an integer array, output the biggest element in array.
int main() {
    int i;
    int array_num;
    int biggest;
//    w=0;
    cout<<"what is the size of the array\n";
    cin>>array_num;
    int arr[array_num];
    cout<<"what is your number\n";
    for(i=0; i<array_num; i++){
        cin >> arr[i];
    }
    
    for(i=1,biggest=arr[0]; i<array_num; i++){
        if(biggest<arr[i])
        biggest=arr[i];
    }
    cout<<"\n the biggest element is: "<<biggest;
    return 0;
}