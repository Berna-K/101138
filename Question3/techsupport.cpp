#include <iostream>
using namespace std;

int main()
{
//variables    
float Payepercent = 25;
float salary = 10000;

//calculation
float deduction = (Payepercent/100) * salary;
float newsalary = 10000 - deduction;

//output
cout<<"Your salary is "<<newsalary<<" after the PAYE deduction of " <<deduction<<endl;
return 0;

}