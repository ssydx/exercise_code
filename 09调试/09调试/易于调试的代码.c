#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <assert.h>

//1��������������2bug�٣�3Ч�ʸߣ�4�ɶ��Ժã�5��ά���Ժã�6ע����ȫ��7�ĵ���ȫ
//coding���ɣ�1ʹ��assert��2����ʹ��const��3�������õı�����4��ӱ�Ҫ��ע�ͣ�5������������


//assert��ʹ�ã�����ͷ�ļ�

//int main()
//{
//	//int num = 10;
//	int num = 20;
//	assert(num == 10);//���Գ�����������У����������ֹ������
//	printf("%d\n", num);
//}

//const��ʹ��

//int main()
//{
//	//const int num = 10;
//	//int* p = &num;
//	//*p = 20;//��Ȼnum��const���Σ�����Ȼ���޸ģ�ʵ���ǷǷ���
//
//	//const int num = 10;
//	//const int* p = &num;//constҲ����ָ�����޷���num�����޸��ˣ�����*����ߣ���������ָ�����ָ��ı������޸�
//						  //Ҳ������*p
//	//*p = 20;
//
//	//const int num = 10;
//	//int* const p = &num;//����*�Ҳ಻�����ƶ�num���޸�
//	//*p = 20;
//	//int n = 100;
//	//p = &n;//���Ƶ���ָ�����������޸ģ�Ҳ������p
//	//printf("%d\n", num);
//
//	return 0;
//}



//ģ��ʵ��strcpy������
//1�Ż����룬2ʹ�ö��ԣ�3ʹ��const��4����ֵ�Ա���ʽ����

//void my_strcpy(char* dest, char* src)//��ԭʼ�Ĵ��룬6��
//{
//	while (*src != '\0')
//	{
//		*dest = *src;
//		dest++;
//		src++;
//	}
//	*dest = '\0';
//}

//void my_strcpy(char* dest, char* src)
//{
//	while (*src != '\0')
//	{
//		*dest++ = *src++;//�򻯺�����
//	}
//	*dest = '\0';
//}

//void my_strcpy(char* dest, char* src)//�Ż�ѭ���壡������7��
//{
//	while (*dest++ = *src++)//���ɵ��ж�����
//							//��*src��������ֵ����*dest���ٸ�����
//							//����ֵ��*dest���㣨'\0'�������ѭ��  \0��ASCIIΪ0
//							//�����ȸ�ֵ���жϣ�������һ��ѭ���Ѿ���\0��ֵ��*dest
//							//��õĵط���ʡ�������յ�����һ��\0
//	{
//		;//ѭ������
//	}
//}

//void my_strcpy(char* dest, char* src)
//{
//	if (dest != NULL && src != NULL)//�����ָ�뵼�³����������ʹ�����׷���
//	{
//		while (*dest++ = *src++)
//		{
//			;
//		}
//	}
//}

//void my_strcpy(char* dest, char* src)//ʹ�ö��ԣ�8��
//{
//	assert(dest !=NULL && src!=NULL);//����ָ��ǿգ����������·������������򷵻ش�����Ϣ
//	while (*dest++ = *src++)
//	{
//		;
//	}
//}

//void my_strcpy(char* dest,const char* src)//ʹ�ó������ƣ�9��
//{										  //�����޸�Դ�ַ���
//	assert(dest != NULL && src != NULL);
//	while (*dest++ = *src++)
//	{
//		;
//	}
//}

//char* my_strcpy(char* dest, const char* src)//ʹ��char*��Ϊ����ֵ���ͣ�������10��
//{											//����Ŀ���ַ�������ʼ��ַ����ʵ����ʽ����
//	char* ret = dest;//����Ŀ���ַ�������ʼ��ַ
//	assert(dest != NULL && src != NULL);
//	//��srcָ����ַ���������destָ��Ŀռ䣬����\0
//	while (*dest++ = *src++)
//	{
//		;
//	}
//	return ret;//����Ŀ���ַ�����ʼ��ַ
//}
//
//int main()
//{
//	char arr1[] = "hello world";
//	char arr2[] = "###############";
//	//my_strcpy(arr2, arr1);
//	//printf("%s\n", arr2);
//	printf("%s\n", my_strcpy(arr2, arr1));
//	return 0;
//}



//�ַ�������

//int my_strlen(const char *str)//const+int
//{
//	assert(str != NULL);//assert
//	int count = 0;
//	while (*str++ != '\0')//�����Ż�
//	{
//		count++;
//	}
//	return count;
//}
//
//int main()
//{
//	char arr[] = "abc def";
//	printf("%d\n", my_strlen(arr));
//
//	return 0;
//}
