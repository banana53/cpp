// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int main() {
    int x;
    int y;
    int i;
    int j;
    
    cout << "whats x\n";
    cin >> x;
    cout << "whats y\n";
    cin >> y;

    for(j=0; j<=x; j++){
            printf("%2d ", j);  
    }   
        
    for(i=1; i<=y; i++){
        printf("\n%2d ", i);  
        for(j=1; j<=x; j++){
            printf("%2d ", i*j);  
        }    
    }

    return 0;
}