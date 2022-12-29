#include<iostream>
#include<vector>
#include<unordered_map>
#include<Windows.h>
using namespace std;
class Solution {
public:
	int numBusesToDestination(vector<vector<int>>& routes, int source, int target) {
		if (source == target)
			return 0;
		int n = routes.size();
		vector<vector<int>>edge(n, vector<int>(n));
		unordered_map<int, vector<int>>rec;
		for (int i = 0; i < n; i++)
		{
			for (int site:routes[i])
			{
				for (int j : rec[site])
				{
					edge[i][j] = edge[j][i] = true;
				}
				rec[site].push_back(i);
			}
		}
		if (routes.size()==1)
		{
			for (int i = 0; i < routes.size(); i++) {
				for (int j = 0; j < routes[0].size(); j++)
				{
					if (source==routes[i][j] &&target==routes[i][j])
					{
						return 1;
					}					
				}
			}
		}
		return -1;
	}
};
int main() {
	vector<vector<int>> points(2, vector<int>(3, 0));
	int x[2][3] = {
		{ 1,2,7 },
		{3,6,7}
	};
	for (int i = 0, m = 0; i <points.size(), m<2; i++, m++)
	{
		for (int j = 0, n = 0; j < points[0].size(), n<3; j++, n++)
		{
			points[i][j] = x[m][n];
		}
	}

	Solution sol;
	int result;
	int source = 1;
	int target = 2;
	result = sol.numBusesToDestination(points,source,target);
	cout << result << endl;
	return 0;
}