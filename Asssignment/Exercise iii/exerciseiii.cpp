#include <iostream>
using namespace std;


int main()
{
//declaring variables    
int buyingprice, sellingprice, profit;

//requesting input
cout<<"Enter your buying price for the car in KES"<<endl;
cin>>buyingprice;
cout<<"Enter your selling price for the car in KES"<<endl;
cin>>sellingprice;

//Initiating and formulating
profit=sellingprice-buyingprice;

//output
cout<<"Your profit for selling the vehicle is KES "<<profit<<endl;
return 0;
}