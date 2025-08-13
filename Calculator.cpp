#include<iostream>
using namespace std;

int main(){
	int num1, num2, result;
	char s;
	cout<<"Enter a number: "<< endl;
	cin>> num1;
	cin.clear();
	cin.ignore(10000000, '\n');
	cout<<"Enter another number: "<< endl;
	cin>> num2;
	cout<<"Select a symbol, +  -  *  /"<< endl;
	cin>> s;
	switch(s){
		case '+':result = num1 + num2;
		cout<<"The result is: "<< result<< endl;
		break;
		case '-':result = num1 - num2;
		cout<<"The result is: "<< result<< endl;
		break;
		case '*':result = num1 * num2;
		cout<<"The result is: "<< result<< endl;
		break;
		case '/':result = num1 / num2;
		cout<<"The result is: "<< result<< endl;
		break;
		default:cout<<"You can choose only the symbols above.";
		break;
	}
}
