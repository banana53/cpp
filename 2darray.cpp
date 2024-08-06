// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int main() {
    int i;
    int j;
    int arr[4][3]={
    {5,6,7},
    {6,5,4},
    {5,4,3},
    {8,9,6}
    
    };
    for(j=0; j<3;j++){
        cout<<"\n";
        for(i=0; i<4; i++){
            cout<<arr[i][j]<<" ";

        }
    }
    
    return 0;
}