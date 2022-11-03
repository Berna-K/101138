
#include <iostream>
using namespace std;

int main()
{
//variables     
float pie = 3.141592;
int radius = 0;
int height = 0;

//input request
cout<<"Please enter two values for the height and radius "<<endl;
//inputs
cout<<"height"<<endl;
cin>>height;
cout<<"radius"<<endl;
cin>>radius;
//formula
float area = 2*pie*radius*height+2*pie*radius*radius;
float volume = pie*radius*radius*height;
//output
cout<<"The volume of your cylinder is "<<volume<<" and the area of your cylinder is "<<area<<endl;
return 0;
}