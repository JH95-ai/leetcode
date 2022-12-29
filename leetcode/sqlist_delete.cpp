#define maxsize 100
typedef struct {
	int data[maxsize];
	int length;
}Sqlist;
int  listdelete(Sqlist &L, int p, int &e) {
	if (p<1 || p>L.length)
	{
		return 0;
	}
	int i;
	e = L.data[p];
	for (i = p; i < L.length; ++i) {
		L.data[i] = L.data[i + 1];
	}
	--(L.length);
	return 1;
}