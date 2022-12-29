#define maxsize 100
//顺序栈定义
typedef struct {
	int data[maxsize];
	int top;
}Sqstack;
//链栈定义
typedef struct LNode {
	int data;
	struct LNode *next;
}LNode;
//顺序队列定义
typedef struct {
	int data[maxsize];
	int head;
	int tail;
}SqQueue;
//链式队列
//链结点
typedef struct QNode {
	int data;
	struct QNode *next;
}QNode;
//链式队列
typedef struct {
	QNode *front;
	QNode *rear;
}LiQueue;