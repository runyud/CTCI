//
//
//  CTCI questions
//  1.2 Check Permutation
//
//

#include <iostream>
#include <unordered_map>
#include <string>

using namespace std;

bool isPermutation(string str1, string str2){
	if(str1.size() != str2.size()){
		return false;
	}
	unordered_multimap<char, int> u;
	for(int i = 0; i < str1.size(); i++){
		u.insert(pair<char, int> (str1[i], i));
	}
	for(int i = 0; i < str2.size(); i++){
		u.insert(pair<char, int> (str2[i], i));
	}
	for(auto elem : u){
		if(u.count(elem.first) % 2 != 0){
			return false;
		}
	}
	return true;
}
int main(){
	if(isPermutation("hello", "oexll")){
		cout << "true" << endl;
	}
	else{
		cout << "false" << endl;
	}
	return 0;
}
