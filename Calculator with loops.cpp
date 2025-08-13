#include<iostream>
#include<string>
#include<windows.h>
using namespace std;

int main(){
	int ch, num1, num2, r;
	char s;
	cout<<"CALCULATOR"<< endl;
	cout<<"By Menti"<< endl<< endl;
	
	while(true){
		cout<<"1. Addition \n"<<
		"2. Substraction \n"<<
		"3. Multiplication \n"<<
		"4. Division \n"<<
		"5. Exit \n \n"<<
		"What do you like to do "<< endl;
		
		cin>> ch;
		if(ch == 5){
			break;
		}
			
			cout<<"Enter a number: "<< endl;
			cin>> num1;
			cout<<"Enter another number: "<< endl;
			cin>> num2;
			
			if(ch == 1){
				r = num1 + num2;
			}
			else if(ch == 2){
				r = num1 - num2;
			}
			else if(ch == 3){
				r = num1 * num2;
			}
			else if(ch == 4){
				r = num1 / num2;
			}
			cout<<"The result is: "<< r<< endl<< endl;
	}
	cout<<"Thanks for using my calculator"<< endl;
	
	system("PAUSE");
}
