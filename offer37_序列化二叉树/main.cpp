#include<iostream>
#include<string>
using namespace std;
class Solution {
public:
	string convertToTitle(int number)
	{
		string ans;
		while (number > 0) {
			--number;
			ans += number % 26 + 'A';
			number /= 26;
		}
		reverse(ans.begin(), ans.end());
		return ans;
	}


};
int main() {
	int number = 765;
	Solution *sol = new Solution;
	sol->convertToTitle(number);
	delete sol;
	return 0;
}