//Tax calculator program
#include<iostream>
#include<string>
using namespace std;

int main(){
	double x;
	cout<<"Enter The Sale: "<< endl;
	cin>> x;
	cout<<"The state tax is: "<<x * 0.04<< endl;
	cout<<"The county tax is: "<<x * 0.02<< endl;
}
