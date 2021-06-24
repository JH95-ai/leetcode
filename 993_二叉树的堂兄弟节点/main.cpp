#include<iostream>
#include<vector>
#include<string>
#include <utility>
#include<map>
#include<tuple>
using namespace std;
struct TreeNode {
	int val;
	TreeNode *left;
	TreeNode *right;
};
class Solution {
private:
	// x ����Ϣ
	int x;
	TreeNode* x_parent;
	int x_depth;
	bool x_found = false;

	// y ����Ϣ
	int y;
	TreeNode* y_parent;
	int y_depth;
	bool y_found = false;

public:
	void dfs(TreeNode* node, int depth, TreeNode* parent) {
		if (!node) {
			return;
		}

		if (node->val == x) {
			tie(x_parent, x_depth, x_found) = tuple{ parent, depth, true };
		}
		else if (node->val == y) {
			tie(y_parent, y_depth, y_found) = tuple{ parent, depth, true };
		}

		// ��������ڵ㶼�ҵ��ˣ��Ϳ�����ǰ�˳�����
		// ��ʹ����ǰ�˳����������µ�ʱ�临�Ӷ�Ҳ������Ӱ��
		if (x_found && y_found) {
			return;
		}

		dfs(node->left, depth + 1, node);

		if (x_found && y_found) {
			return;
		}

		dfs(node->right, depth + 1, node);
	}

	bool isCousins(TreeNode* root, int x, int y) {
		this->x = x;
		this->y = y;
		dfs(root, 0, nullptr);
		return x_depth == y_depth && x_parent != y_parent;
	}
};


int main() {
	TreeNode root =[ 1,2,3,null,4,null,5 ];
	Solution sol;
	bool result;
	result = sol.isCousins(temp);
	cout << result << endl;
	return 0;
}