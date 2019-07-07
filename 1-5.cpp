//
//
//  CTCI questions
//  1.5 One Away
//
//

#include <iostream>
#include <string>

using namespace std;

bool OneAway(string str1, string str2){
	int size = (str1.length() > str2.length()) ? str1.length() : str2.length();
	int small = (str1.length() < str2.length()) ? str1.length() : str2.length();
	if(size - small > 1){
		return false;
	}
	int ctr = 0;
	//check insertion and deletion
	for(int i = 0; i < size; i++){
		for(int j = 0; j < size; j++){
			if(str1[i] == str2[j]){
				ctr++;
			}
		}
	}

	//check swap
	int sctr = 0;
	for(int i = 0; i < size; i++){
		if(str1[i] != str2[i]){
			sctr++;
		}
	}
	/*cout << sctr << endl;
	cout << ctr << endl;*/
	if(sctr <= 1 || ctr - 1 == size || ctr + 1 == size){
		return true;
	}
	return false;
}

int main(){
	string str1 = "pale";
	string str2 = "bake";
	if(OneAway(str1, str2)){
		cout << "true" << endl;
	} else{
		cout << "false" << endl;
	}
}