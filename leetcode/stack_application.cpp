#define maxsize 100
int match(char exp[], int n) {
	char stack[maxsize];
	int top = -1;
	int i;
	for (i = 0; i <= n; ++i) {
		if (exp[i] == '(') {
			stack[++top] = '(';
		}
		if (exp[i] == ')') {
			if (top == -1) {
				return 0;
			}
			else
				top--;
		}
	}
	if (top == -1) {
		return 1;
	}
	else
		return 0;
}
