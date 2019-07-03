//
//
//  CTCI questions
//  1.3 URLify
//
//

#include <iostream>
#include <string>
#include <cstring>

using namespace std;

string URLify(string str, int len){
	for(int i = len - 1; i >= 0; i--){
		if(str[i] == ' '){
			str.replace(i, 1, "%20");
		}
	}
	return str;
}

int main(){
	string str1 = "Mr John Smith";
	string str2 = URLify(str1, 13);
	cout << str2 << endl;
	return 0;
}