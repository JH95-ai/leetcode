#include<iostream>
#include<vector>
#include<algorithm>
#include<set>
#include"windows.h"
using namespace std;

class Solution {
public:
	int maxFrequency(vector<int>& nums, int k) {
		sort(nums.begin(), nums.end());
		int max = 0, tempnum = 0;
		for (int i = 0,j=0; j < nums.size(); j++)
		{
			while (nums[j] * (j - i) - tempnum > k)
			{
				tempnum -= nums[i++];
			}
			tempnum += nums[j];
			max = max(max, j - i + 1);
		}
		return max;
	}
};
int main() {
	vector<int> num1{ 1,4,8,13};
	Solution *sol = new Solution;
	int result;
	int k=5;
	result = sol->maxFrequency(num1,k);
	cout << result << endl;
	delete sol;
	system("pause");
	return 0;
}