#include <iostream>
using namespace std;

int main()
{
//variables    
float Farenheit =0;

//conversion formula
float Celsius = 5.0/9.0*(Farenheit-32.0);

cout<<"Please enter your temperature in degrees farenheit "<<endl;
cin>>Farenheit;

cout<<"Your temperature in celsius is equal to "<<Celsius<<endl;
return 0;

}