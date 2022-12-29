#define maxsize 100
typedef struct
{
	int data[maxsize];
	int length;
}Sqlist;

int LocateElem(Sqlist L, int x)
{
	int i;
	for (i = 1; i <= L.length;++i)
		if( x<L.data[i])
		{
			return i;
		}		
	return i;
}
void insert(Sqlist &L, int x) {
	int i;
	int p;
	p = LocateElem(L, x);
	for (i = L.length; i >= p; --i) {
		L.data[i + 1] = L.data[i];
	}
	L.data[p] = x;
	++(L.length);
}