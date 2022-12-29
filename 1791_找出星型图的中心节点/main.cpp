#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
    int findCenter(vector<vector<int>>& edges) {
        int temp = edges[0][0];
        if ((edges[0][0] == edges[1][0]) || (edges[0][0] == edges[1][1]))
        {
            return edges[0][0];
        }
        else if ((edges[0][1] == edges[1][0]) || (edges[0][1] == edges[1][1]))
        {
            return edges[0][1];
        }
        else
        {
            return 0;
        
        }     
    }
};



int main() {
    vector<vector<int>>temp= { { 1,2 }, { 5,1 }, { 1,3}, { 1,4 } };
    Solution sol;
    int result;
    result=sol.findCenter(temp);
    cout << result << endl;
	return 0;
}