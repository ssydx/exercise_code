#include <stdio.h>
#define X 20;//�����е�Xȫ���滻Ϊ20
#define MAX(X, Y) (X > Y ? X : Y)//�����е�MAX(X, Y)�滻Ϊ(X > Y ? X : Y)



//#define

//int main()
//{
//	int a = X;
//	int x = 10, y = 20;
//	printf("a = %d\n", a);//���20
//	int max = MAX(x, y);
//	printf("max = %d\n", max);//���20
//	return 0;
//}




//��̬�������ⲿ����

//int g_val = 2020;//ȫ�ֱ���
//static int g_val1 = 2020;//����static���޷��������ļ�ʹ��
//
//int Add(int x, int y)
//{
//	int z = x + y;
//	return z;
//}
//
//static int Add1(int x, int y)
//{
//	int z = x + y;
//	return z;
//}