#include <iostream>
using namespace std;
int main()
{
	bool x,y;
	cout <<"Enter first boolean value: "<<endl;
	cin >>x;
	cout<<"Enter second boolean value: "<<endl;
	cin>> y;
	cout<<"the output of and operator: "<<(x && y) <<endl;
	cout<<"the output of OR operator is : " <<(x || y)<<endl;
	cout <<"the output of NOT operator on x is :" <<(!x)<<endl;
	cout <<"the output of NOT operator on y is :" <<(!y)<<endl;

// part b

	int a;
	int b;
	cout<< "input two integers: "<<endl;
	cin>>a;

	cin>>b; 
	cout<<"a<b  "<< (a<b) <<endl;
	cout<<"a>b  "<< (a>b) <<endl;
	cout<<"a<=b  "<< (a<=b )<<endl;
	cout<<"a>=b  "<< (a>=b) <<endl;
	
}

