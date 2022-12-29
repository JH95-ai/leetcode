#include <iostream>
using namespace std;
void reverse(int R[],int l,int r) {
	int i, j;
	int temp;
	for (i=l,j=r; i < j; ++i,--j)
	{
		temp = R[i];
		R[i] = R[j];
		R[j] = temp;
	}
}
void ROC(int R[],int n,int p) {
	if (p <= 0 || p >= n) {
		cout << "Error" << endl;
	}
	else
	{
		reverse(R, 0, p - 1);
		reverse(R, p, n - 1);
		reverse(R, 0, n - 1);
	}
}
int main() {
	int i;
	int p, n;
	int R[50];
	cin >> p;
	cin >> n;
	for (i = 0; i <= n - 1; ++i)
		cin >> R[i];

	ROC(R, n, p);
	for (i = 0; i <= n - 1; i++)
		cout << R[i] << " ";
	cout << endl;
	cout << R << endl;
	return 0;
}