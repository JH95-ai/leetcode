#include<iostream>
#include<string>
#include<map>
#include<vector>
#include<unordered_map>
#include<unordered_set>
#include<algorithm>
using namespace std;
class TimeMap {
public:
	/** Initialize your data structure here. */
	unordered_map<string, vector<pair<int, string>>> m;

	TimeMap() {}

	void set(string key, string value, int timestamp) {
		m[key].emplace_back(timestamp, value);
	}

	string get(string key, int timestamp) {
		auto &pairs = m[key];
		// ʹ��һ���������� value ���ַ�������ȷ���� pairs �к��� timestamp �������Ҳ���ش��� timestamp ��λ��
		pair<int, string> p = { timestamp, string({ 127 }) };
		auto i = upper_bound(pairs.begin(), pairs.end(), p);
		if (i != pairs.begin()) {
			return (i - 1)->second;
		}
		return "";
	}
};
int main() {
	TimeMap *sol = new TimeMap;
	string key_set = "foo";
	string value_set = "bar";
	int time_set = 1;
	sol->set(key_set, value_set, time_set);
	string key_get = "foo";
	int time_get = 1;
	string temp;
	temp=sol->get(key_get,time_get);
	//cout << result;
	delete sol;
	return 0;
}