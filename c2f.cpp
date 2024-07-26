// input a number of Celsius , output Fahrenheit number
#include <iostream>
#include <math.h>
using namespace std;
int main() {
    float c;
    //float a;
    //float b;
    float f;
    cout << "hello man how many degrees is it rn\n";
    cin>>c;
    cout << "Oh shoot. That's in celsius. As a proud American, a lover of Andrew Jackson, and a person who sneakily hides fireworks in their garage for July 4th, I must convert it to our dear Fahrenheit.\n";
  //  a= c/5;
//    b= a*9;
    f= (c/5)*9+32;
    cout<<"... uh I'm gonna grab my calculator real quick...Ah! It's "<< f;
    return 0;
}
