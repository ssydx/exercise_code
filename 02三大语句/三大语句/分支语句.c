#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//if���


//int Max(int a, int b)
//{
//	//���淶
//	if (a > b)
//	{
//		return a;
//	}
//	return b;//ע����ִ��return a;����ִ��return b;
//
//	//�淶
//	if (a > b)
//	{
//		return a;
//	}
//	else
//	{
//		return b;
//	}
//}
//int main()
//{
//	////����֧
//	//int age = 13;
//	//if (age < 18)
//	//	printf("δ����\n");
//
//	////˫��֧
//	//int age = 20;
//	//if (age < 18)
//	//	printf("δ����\n");
//	//else
//	//	printf("����\n");
//
//	////���֧
//	//int age = 34;
//	//if (age < 18)
//	//	printf("δ����\n");
//	//else if (age < 28 && age > 18)//����ʹ��18<age<28���൱��(18<age)<28
//	//	printf("����\n");
//	//else if (age < 60 && age > 28)
//	//	printf("׳��\n");
//	//else
//	//	printf("����\n");
//
//	//�����
//	//int age = 14;
//	//if (age < 18)
//	//{
//	//	printf("δ����\n");
//	//	printf("��ֹ����\n");
//	//}
//	//else
//	//{
//	//	printf("����\n");
//	//	printf("�����к�����\n");
//	//}
//
//	//������䣬ע��if��else��ƥ��
//	//int a = 0;
//	//int b = 2;
//	//if (a == 1)
//	//{
//	//	if (b == 2)
//	//		printf("����\n");
//	//}
//	//else
//	//	printf("�ٺ�\n");//��ʹ�����һ��ifƥ������뽫�ڶ���if������
//
//	//int a = 4, b = 5;
//	//int max = Max(a, b);//����Max����
//	//printf("%d", max);
//	
//	//���ڸ�ֵ�����
//	//int a = 4;
//	//if (a = 6)//�״��
//	//	printf("haha\n");
//	//if (5 == a)//����������Ƚ�ʱ�����������������븳ֵ���
//	//	printf("haha\n");
//
//	////С��ϰ���ж���ż
//	//int a = 16;
//	//if (a % 2)
//	//	printf("����");
//	//else
//	//	printf("ż��");
//
//	////С��ϰ�����1-100������
//	//int i = 1;
//	//while (i < 101)
//	//{
//	//	if (i % 2)
//	//		printf("%d ", i);
//	//	i++;
//	//}
//
//	return 0;
//	}



//switch���

//int main()
//{
//	//int day = 0;
//	//scanf("%d", &day);
//	//switch (day)//��Ҫ�жϵı���������Ϊ����
//	//{
//	//case 1://case������ͳ������ʽ��charҲ���ԣ���ASCII��ֵ��ţ�����ð�ŷָ�
//	//	printf("����һ\n");
//	//	break;//�ɹ��������������������������ִ������󣬰���default
//	//case 2://û��˳��
//	//	printf("���ڶ�\n");
//	//	break;
//	//case 3:
//	//	printf("������\n");
//	//	break;
//	//case 4:
//	//	printf("������\n");
//	//	break;
//	//case 5:
//	//	printf("������\n");
//	//	break;
//	//case 6:
//	//	printf("������\n");
//	//	break;
//	//case 7:
//	//	printf("������\n");
//	//	break;
//	//default:
//	//	printf("��Ч����\n");
//	//}
//
//	////ʡ��break�����
//	//int n = 1;
//	//switch (day)
//	//{
//	//case 1://��ʡ��
//	//	if (n == 1)//��Ƕ���������
//	//		printf("haha\n");
//	//case 2:
//	//case 3:
//	//case 5:
//	//	printf("������\n");
//	//	break;
//	//case 6:
//	//case 7:
//	//	printf("��Ϣ��\n");
//	//	break;
//	//default://��������������ɷ�������λ�ã���÷���ĩβ
//	//	printf("��Ч����\n");
//	//	break;//�����Ҫʡ��break
//	//}
//
//	////С��ϰ
//	//int n = 1;
//	//int m = 2;
//	//switch (n)
//	//{
//	//case 1:
//	//	m++;//m=3
//	//case 2:
//	//	n++;//n=2
//	//case 3:
//	//	switch (n)//��Ƕ��
//	//	{
//	//	case 1:
//	//		n++;
//	//	case 2:
//	//		m++;//m=4
//	//		n++;//n=3
//	//		break;//������ǰѭ��
//	//	}
//	//case 4:
//	//	m++;//m=5
//	//	break;
//	//default:
//	//	break;
//	//}
//	//printf("m = %d, n = %d\n", m, n);//m=5,n=3
//
//	return 0;
//}
