#include<iostream>
#include<vector>
#include<algorithm>
#include<set>
using namespace std;

class Solution {
public:
	int maxSubArray(vector<int>& nums) {
		if (nums.size()==0)
		{
			return 0;
		}
		int num = 0;
		int greatnum = 0x80000000;
		for (int i = 0; i < nums.size(); i++)
		{
			if (num<=0) 
				num = nums[i];
			else 
				num += nums[i];
			if (num>greatnum)
			{
				greatnum = num;
			}

		}
		return greatnum;
	}
};
int main() {
	vector<int> num1{ -2,1,-3,4,-1,2,1,-5,4 };
	Solution *sol = new Solution;
	int result;
	result = sol->maxSubArray(num1);
	cout << result << endl;
	delete sol;
	system("pause");
	return 0;
}