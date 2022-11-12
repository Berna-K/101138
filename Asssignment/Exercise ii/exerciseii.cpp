#include <iostream>
using namespace std;


int main()
{
//declaring and initialising variables    
int base = 10, height = 7, hypotenuse = 12;

//delcaring and formulating
int perimeter = base+height+hypotenuse;
int area = (float)1/2*(base*height);

//output
cout<<"The perimeter of your triangle is "<<perimeter<<"\nAnd the area of your triangle is "<<area<<endl;
return 0;
}