#include <iostream> 
using namespace std;
//Input score(0-100), output rank (A,B,C,D,E,F) 
int main() {
int x;
    cout << "Idiot! What's your score!\n";
    cin>>x;
    cout<<"WHAT YOU GOT A "<<x;
if (x<60){
    cout<<"\nTHATS AN F";
}    
else if(x<70){
    cout<<"\nTHATS A D";
}
else if(x<80){
    cout<<"\nTHATS A C";
}
else if(x<90){
    cout<<"\nTHATS A B";
}
else{
    cout<<"\nTHATS AN A";
}

return 0;

}