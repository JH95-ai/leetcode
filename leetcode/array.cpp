#define maxsize 100
//¾ØÕóµÄ×ªÖÃ
void trsmat(int A[][maxsize], int B[][maxsize], int m, int n) {
	for (int i = 0; i < m; ++i) {
		for (int j = 0; j < n; ++j) {
			B[j][i] = A[i][j];
		}
	}
}
//¾ØÕóÏà¼Ó
void addmat(int A[][maxsize], int B[][maxsize], int C[][maxsize], int m, int n) {
	int i, j;
	for (i = 0; i < m; ++i) {
		for (j = 0; j < n; ++j) {
			C[i][j] = A[i][j] + B[i][j];
		}
	}
}
//¾ØÕóÏà³Ë
void mutmat(int C[][maxsize], int A[][maxsize], int B[][maxsize], int m, int n, int k) {
	int i, j, h;
	for (i = 0; i < m; ++i) {
		for (j = 0; j < n; ++j) {
			C[i][j] = 0;
			for (h = 0; h < k; ++h) {
				C[i][j] += A[i][h] * B[h][j];
			}
		}
	}
}

//Ï¡Êè¾ØÕó
typedef struct {
	int val;
	int i, j;
}Trimat;