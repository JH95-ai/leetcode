void sort_list(int L[], int R[], int m, int n, int total[]) {
	int x,y,z,temp;
	for (x = 1; x <= m + n; ++x) {
		for (y = 1; y <= m; ++y) {
			for (z = 1; z <= n; ++z) {
				if (L[y] <=R[z]) {
					total[x] = L[y];
				}
				else {
					total[x] = R[z];
				}
			}
		}
	}
}