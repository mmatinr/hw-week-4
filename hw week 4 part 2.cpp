#include <iostream> 
using namespace std;
main()  { 

int x,y,z; 
float result1,result2,result3;
cout<< "enter the value for x";
cin>> x;
cout<< "enter the value for y";
cin>> y;
cout<< "enter the value for z";
cin>> z;
result1=(x-y)*(x+z);
result2=(x+y+z);
result2=(result2*result2);
result2++;
result3=result1/result2;
cout<< result3; "is your answer";
}