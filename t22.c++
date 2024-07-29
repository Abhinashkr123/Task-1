#include<iostream>
using namespace std;
int main()
{
	char op;
	float num1,num2;
	cout<<"Enter the two numbers:";
	cin>>num1>>num2;
	cout<<"Enter the operator:";
	cin>>op;
	switch(op)
	{
		case '+':
		cout<<num1+num2;
		break;
		case '-':
		cout<<num1-num2;
		break;
		case '*':
		cout<<num1*num2;
		break;
		case '/':
		cout<<num1/num2;
		break;
		default:
		cout<<"ERROR! Invalid operator";
	}
	return 0;
}