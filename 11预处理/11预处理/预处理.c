#include "add.h"


//Ԥ�������뻷����.c
// ���루��������
//		Ԥ����.i����include�����ݼ��룬�ո��滻ע�ͣ�define�������滻��
//		����.s����C���뷭��Ϊ�����룩
//		���.o���ѻ�����ת��Ϊ�������룩
// ���ӣ���������.exe����Ԥ������ļ�������һ��
//���У����л������������ڴ棬�ɲ���ϵͳ �� �ֹ����� �� ��ִ�д�������ֻ���ڴ�
					//����ִ�п�ʼ����main����
					//����ִ�л��������ʱ��ջ�洢�����ľֲ������ͷ��ص�ַ��ͬʱҲ��ʹ�þ�̬���������ھ�̬��
					//������ֹ��������������Ҳ����������ֹ��


//__STDC__

//int main()
//{
//	//printf("%s\n", __FILE__);
//	//printf("%d\n", __LINE__);
//	//printf("%s\n", __DATE__);
//	//printf("%s\n", __TIME__);
//	int i = 0;
//	int arr[10] = { 0 };
//	FILE* pf = fopen("log.txt", "w");
//	for (i = 0; i < 10; i++)
//	{
//		arr[i] = i;
//		fprintf(pf, "file:%s line:%d date:%s time:%s\n", __FILE__, __LINE__, __DATE__, __TIME__);
//		printf("%s\n", __FUNCTION__);
//	}
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

//Ԥ����ָ��:#��ͷ�����ú�ʱ���滻�������滻��

//#define����ı�ʶ�����ϸ��滻��������Ҫ�ӷֺţ�������������ĸ��д����ȫ����д

//#define MAX 20
//#define STR "haha"
//#define reg register
//#define do_forever for(;;)
//int main()
//{
//	reg int a;
//	printf("%d\n", MAX);
//	printf("%s\n", STR);
//	do_forever;
//	return 0;
//}



//#define����ĺ꣬�����б�������Ҫ�����ֽ��ڣ��ϸ��滻
//�����Ӷ������ʹ����ȷ
//�ַ������������ݲ����滻
//���п��԰��������궨������ݣ��������Գ��ֵݹ�

//#define SQUARE(X) ((X)*(X))
//#define MAX 10

//void Print(int a)
//{
//	printf("the value of a is %d\n", a);
//}
//int main()
//{
//	//int ret = SQUARE(MAX+MAX);
//	//printf("%d\n", ret);
//
//	int a = 10;
//	int b = 20;
//	//printf("the value is %d\n", a);
//	Print(a);
//	Print(b);//�޷���ӡ��the value of b is 20
//
//	return 0;
//}



//�ַ�������Ȼ����

//int main()
//{
//	printf("hello world\n");
//	printf("hel"  "lo " "world\n");//�ַ�����Ȼ������һ��
//	return 0;
//}



//�Ѻ�������뵽�ַ�����#����

//#define PRINT(X) printf("the value of " #X " is %d\n",X)
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	PRINT(a);
//	PRINT(b);
//	return 0;
//}



//�ӷ���Ƭ�δ�����ʶ������CAT(X,Y) X##Y ʹCAT(X,Y)��ʾΪX,Y��Ӧ��ʵ������

//#define CAT(X,Y) X##Y
//
//int main()
//{
//	int class1 = 2020;
//	printf("%d\n", class1);
//	printf("%d\n", CAT(class, 1));
//	return 0;
//}



//�������õĺ꣬������Ҫʹ�ô��и����õĲ���
//������������޹�
//���ڴ�������Сʱ��ģ���ٶȷ������
//���������һЩ�����޷����������飬�紫��Ĳ�����ĳ�����ͣ������ڼ򻯴��룩
//���ʹ�ú꽫ִ�ж�δ����滻�����ʹ�ú����������ͬһ�������룬�ڴ�������ʱ������Ӵ����ģ
//���ǲ��ɵ��Եģ������κ������ܴ��ڵ�����
//����ܴ�����������ȼ������⵼�³������
//����ʹ�ô������õĲ���ʱ������������Ԥ��Ľ��

//#define MAX(X,Y) ((X)>(Y)?(X):(Y))
//
//int main()
//{
//	//int a = 0;
//	//int b = a + 1;
//	//int c = ++a;//������
//
//	int a = 10;
//	int b = 11;
//	int max = MAX(a++, b++);//a=11 b=12 a=11(������ֵ˳��ı�û�л����ٴ�++�� b=13(��Ȼִ��++�����ȸ�ֵ��++��
//	printf("%d\n", max);//12
//	printf("%d\n", a);//11
//	printf("%d\n", b);//13
//
//	return 0;
//}

//int Max(int x, int y)
//{
//	return (x > y ? x : y);
//}
//
//int Max2(float x, float y)
//{
//	return (x > y ? x : y);
//}
//
//#define MAX(X,Y) ((X)>(Y)?(X):(Y))
//
//int main()
//{
//
//
//	float c = 3.0f;
//	float d = 4.0f;
//	float max1 = MAX(c, d);//ֱ�ӷ���ִ��
//	float max2 = Max2(c,d);//���ں������úͷ��صĿ������ú������úͷ��صĴ����ʵ��ִ�д�������ʱ�����
//	printf("%f\n", max1);
//	printf("%f\n", max2);
//
//	return 0;
//}

//#undef ����  ����ʹ�������Ĵ��벻�ܸú��Ӱ��



//�����ж��壬��Ԥ����ʱָ��ĳ��Դ�ļ�δ����ı�����ֵ



//��������ָ��

//#ifdef ���ƣ�#endif

//#define A//����
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,0 };
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		arr[i] = 0;
//#ifdef A//������ִ�У�����ִ��
//		printf("%d ", arr[i]);
//#endif//������������ָ��
//	}
//	return 0;
//}

//#if defined(����)��#endif   �ȼ���ifdef   ����ʵ�ʿ�ʡ�Ե�Ҫ�����ո�

//#define A
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,0 };
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		arr[i] = 0;
//#if defined(A)
//		printf("%d ", arr[i]);
//#endif
//	}
//	return 0;
//}

//#ifndef ���ƣ�#endif

//#define A
//int main()
//{
//#ifndef A
//	printf("haha\n");
//#endif
//	return 0;
//}

//#if !defined(����)��#endif

////#define A
//int main()
//{
//#if !defined(A)
//	printf("haha\n");
//#endif
//	return 0;
//}

//����Ƕ��ʹ��

//#if �������ʽ��#endif

//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,0 };
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		arr[i] = 0;
//#if 0//Ϊ0��ִ�У�������ִ��
//		printf("%d ", arr[i]);
//#endif//������������ָ��
//	}
//	return 0;
//}

//#if �������ʽ��#elif �������ʽ��#else��#endif

//#define A 4
//int main()
//{
//#if A==2
//	printf("haha\n");
//#elif A==2
//	printf("hehe\n");
//#else
//	printf("hihi\n");
//#endif
//	return 0;
//}



//ͷ�ļ�����
//#include <��ͷ�ļ�> ��ֱ���ڱ�׼λ�ò��ң���ͷ�ļ�Ҳ������˫���ŵ��ή��Ч��
//#include "�Զ���ͷ�ļ�"�����ڹ���Ŀ¼�²��ң����Ҳ�����ȥ��������׼λ�ò���


////����ͷ�ļ��ظ�����
//int main()
//{
//	printf("%d\n", Add(2, 5));
//	return 0;
//}



//#pragma once   #pragma pack()



//offsetof��ʹ�ã�ģ��ʵ�֣�

//#define OFFSETOF(struct_name, member_name) ((int)&(((struct_name*)0)->member_name))
////��0ǿ��ת��Ϊ�ṹ��ָ�룬�ٷ���0��ַָ��ĳ�Ա��ȡ�ó�Ա�ĵ�ַ����󽫵�ַǿ��ת��Ϊ����
//typedef struct
//{
//	char c1;
//	int a;
//	char c2;
//}S;
//int main()
//{
//	//S s;
//	printf("%d\n", offsetof(S, c2));
//	printf("%d\n", OFFSETOF(S, c2));
//	return 0;
//}