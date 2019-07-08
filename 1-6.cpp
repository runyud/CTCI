//
//
//  CTCI questions
//  1.5 String Compression
//
//

#include <iostream>
#include <string>

using namespace std;

string strCompress(string str){
	string result;
	int ctr = 1;
	int size = 0;
	char chr = str[0];
	for(int i = 0; i < str.size(); i++){
		if(str[i + 1] == str[i]){
			ctr++;
		}
		else{
			string temp = str[i] + to_string(ctr);
			result += temp;
			size += 2;
			ctr = 1;
		}
	}
	if(size > str.length()){
		return str;
	}
	return result;
}

int main(){
	string str = "bbbaadhh";
	string output = strCompress(str);
	cout << output << endl;
	return 0;
}