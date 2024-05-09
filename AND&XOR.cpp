#include<iostream>
#include<string>

using namespace std;

int main() {
	string str = "Hello World";
	int a = str.length();
	cout<< "Original String : "<<str <<endl<<endl;
	
	for(int i = 0; i < a; i++) {
		char ch = str[i];
		
		char andResult = ch & 127;
		cout<<"character '" <<ch << "' AND 127 : " <<static_cast<int>(andResult) <<endl;
		
		char xorResult = ch ^ 127;
		cout<<"Character '" <<ch << "' XOR 127 : "<<static_cast<int>(xorResult) <<endl;
	}
	
	return 0;
}
