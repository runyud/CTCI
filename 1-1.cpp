//
//
//  CTCI questions
//  1.1 IsUnique
//
//

#include <iostream>
#include <unordered_map>
#include <string>

using namespace std;

bool isUnique(string word) {
	unordered_map<char, int> u;
	for (char elem : word)
	{
		auto result = u.insert(pair<char, int>(elem, 1));
		if (result.second == false){
			result.first->second++;
		}
	}
	for (auto it = u.begin(); it != u.end(); it++)
	{
		if (it->second > 1){
			return false;
		}
	}
	return true;
}
int main(){
	if (isUnique("paddle")){
		cout << "true" << endl;
	}
	else {
		cout << "false" << endl;
	}
	return 0;
}
