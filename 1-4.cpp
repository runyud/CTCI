//
//
//  CTCI questions
//  1.4 Palindrome Permutation
//
//

#include <iostream>
#include <unordered_map>
#include <string>
#include <cctype>
#include <algorithm>

using namespace std;

bool PalinPerm(string str){
	for (int i=0; i < str.length(); i++){
        transform(str.begin(), str.end(), str.begin(), ::tolower);
	}
	unordered_multimap<char, int> u;
	for(int i = 0; i < str.length(); i++){
		if(str[i] != ' '){
			u.insert(pair<char, int> (str[i], i));
		}
	}
	int counter = 0;
	int size = u.bucket_count();
	for(int i = 0; i < size; i++){
		if(u.bucket_size(i) % 2 != 0){
			counter++;
		} 
	}
	if(counter > 1){
		return false;
	} 
	return true;
}

int main(){
	if(PalinPerm("Tact Coa")){
		cout << "true " << endl;
	} else{
		cout << "false " << endl;
	}
	return 0;
}