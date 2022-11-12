#include <iostream>
using namespace std;


int main()
{
//declaring variables    
string firstname, lastname, fullname, favouritemeal, favouritemovie;;

//requesting input
cout<<"Enter your first name"<<endl;
cin>>firstname;

cout<<"Enter your last name"<<endl;
cin>>lastname;

cout<<"Enter your favourite meal"<<endl;
cin>>favouritemeal;

cout<<"Enter your favourite movie"<<endl;
cin>>favouritemovie;

fullname = firstname + " "+ lastname;

//output
cout<<"Your first name is "<<firstname<<endl; 
cout<<"Your last name is "<<lastname<<endl; 
cout<<"Your full name is "<<fullname<<endl; 
cout<<"Your favourite meal is "<<favouritemeal<<endl; 
cout<<"Your favourite movie is "<<favouritemovie<<endl;

return 0;
}