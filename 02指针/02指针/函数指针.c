#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <assert.h>
#include <Windows.h>
#include <time.h>


//����ָ�뱻�ض��壬����������ֵ����ʱ����������Ҫ����(*fname)��

//int add(int x, int y)
//{
//	return x + y;
//}
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	printf("%d\n", add(a, b));//���30
//	printf("%p\n", &add);//ȡ������ַ,&add����Ϊint(*)(int,int)
//	printf("%p\n", add);//ȡ������ַ������һ����ͬ����add����Ϊint (int,int)
//	 
//	 
//	int (*p)(int, int) = &add;//����pΪ����ָ��
//	int(*p1)(int, int) = add;//��&addЧ����ͬ�Ҳ��������棬˵�����������Ǻ�����ַ
//	 
//	 
//	printf("%p\n", p);
//	printf("%d\n", (*p)(a, b));//�����õõ����������30
//	printf("%d\n", p(a, b));//�������ÿ�ֱ�ӵ��ú���
// 
//	printf("%d\n", (**p)(a, b));//�������*Ч�����䣬��ò�Ҫ��ôд
//	//��������ַ���Ǻ�����
//
//
//
//	//int arr[10] = { 1,3,4,6,7,8,9,10};
//	//int* parr1 = arr;//�õ�������(��Ԫ�ص�ַ)�������ú�Ϊ������Ԫ��
//	//int* parr4 = &arr;
//
//	////int(*parr2)[10] = &arr;//�õ������ַ�������������������ú�Ϊ������(��Ԫ�ص�ַ)���ٽ����õõ�������Ԫ��
//	////int(*parr3)[10] = arr;//Ч����&arr��ͬ���������棬˵���������������ַ����һ���£�ͬ�ϱ��������
//
//
//	//printf("%d\n", *arr);
//	//printf("%d\n", *parr1);
//	//printf("%d\n", *parr4);
//	////printf("%d\n", **parr2);
//	////printf("%d\n", **parr3);
//
//
//	//printf("%d\n", arr[5]);
//	//printf("%d\n", parr1[5]);
//	//printf("%d\n", parr4[5]);
//
//	//printf("%d\n", *(parr1+5));
//	////printf("%d\n", (*parr2)[5]);
//	////printf("%d\n", *((*parr2)+5));
//
//
//	//��֪����������Ĳ��
//	//fun:ȡ��ַ������pfun1�뺯����pfun2�ȼۣ����Ǻ�����ַ�����ɽ����ã��򲻽����ã�
//	// ��fun==pfun1=pfun2�������߱��������ʱ���������ţ�
//	//arr:ȡ��ַ������parr1��������parr2���ȼۣ�ǰ��ʱ�����ַ����������ã�������ʱԪ�ص�ַ�����ܽ����ã�
//	// ��arr==parr2==*parr1�����������������ţ�
//
//
//	return 0;
//}



//������Ȥ�Ĵ��룬ע����⣡����

// (  * (  void(*)()  ) 0 ) ();
// void(*)()						Ϊ����ָ��
// (  void(*)()  )					Ϊǿ������ת����תΪ����ָ�룬ָ��ָ��ĺ������޲Σ�����ֵΪvoid
// (  void(*)()  ) 0				��0ǿ��תΪΪ����ָ��
// * (  void(*)()  ) 0				�����õ�ַΪ0�ĺ���ָ�룬�õ�����
// (  * (  void(*)()  ) 0 ) ()		���ú���
//����0תΪ����Ϊvoid(*)()�ĺ���ָ�룬�ٽ�����0��ַ���õ��õ�ַָ��ĺ�������ú���

// void( * signal( int, void(*)(int) ) ) (int);
// void(*)(int)									Ϊ����ָ��
// signal( int, void(*)(int)					signal�����Ĳ�������Ϊint��void(*)(int)
//												������ָ��ָ��ĺ����Ĳ���Ϊint������ֵΪvoid��
// void( * signal( int, void(*)(int) ) ) (int)	���������ķ���ֵ����Ϊvoid(*)(int)
//												ע����������ֵΪ����ָ��ʱ��������Ҫ����(*fname(arg...))��
//������һ��signal���������������Ϊint��void(*)(int)������ֵ����Ϊvoid(*)(int)
// 
//�򻯸ô���
//typedef void(*pfun)(int);//ע�⺯��ָ����ض�����һ�������ͬ���ض��������Ҫ����(*newfname)z��
//pfun signal(int, pfun);
