#include <stdio.h>
#include <string.h>

//hello world

//int main()//������
//{
//	printf("hello world");//����Էֺŷָ�
//	return 0;//�޷���ֵ
//}//������Դ����ŷָ�


//˫б��ΪC++ע��

/*int a = 10;
int
advd
C����ע�ͣ���֧��Ƕ�ף��������׸��Ǹܼ�����
*/


//ת���ַ�

//int main()
//{
//	printf("hello \nworld\n");//��б��nΪ���з�
//	printf("hello \tworld\n");//��б��tΪˮƽ�Ʊ��
//	printf("hello \bworld\n");//��б��bΪ�˸��
//	printf("hello \rworld\n");//��б��rΪ�س���
//	printf("hello \\world\n");//��ʾԭ��
//	printf("%c\n", 'a');
//	printf("hello \"world\n");
//	printf("%d\n", strlen("a\b\t.c\32\x32"));//��б��t��ʾһ���Ʊ����ͬ����˸��
//	//��б��ooo��ʾ�����֣����˽����㣬һ����λ����Ӧ��ASCII��ֵ����\32��ʾ26��Ӧ��ASCII��ֵΪ��
//	//��б��xhh��Xhh����ʾ�����֣���ʮ�������㣬һ����λ����Ӧ��ASCII��ֵ����\x65��ʾ101��Ӧ��ASCII��ֵΪe
//	printf("\32\n");
//	printf("\x65\n");
//}


//��������

//int main()
//{
//	//����
//	printf("��������\n");
//	int a = 10, b = -5;//Ĭ���з���
//	signed int x = 10, y = -5;//�з������ͣ��ĸ��ֽ�
//	unsigned int a1 = 10, b2 = -5;
//	long x1 = 10, y1 = -5;//�����ͣ��ĸ��ֽ�
//	short x2 = 10, y2 = -5;//�����ͣ������ֽ�
//	printf("%d %d\n", a, b);
//	printf("%d %d\n", x, y);
//	printf("%d %d\n", x1, y1);
//	printf("%d %d\n", x2, y2);
//	printf("%d %d %d\n", sizeof(a), sizeof(x1), sizeof(x2));
//
//
//	//������ͬ��
//	
//
//	//�ַ���ͬ��
//	
//
//	//������
//	char arr1[] = "abc";
//	char arr2[] = { 'a', 'b', 'c','\0'};//\0�����볤��
//	//�ַ�����\0Ϊ��β��־(��0�����ý�β��־�������볤��
//	printf("%d\n", strlen(arr1));//strlen�᷵���ַ����ĳ��ȣ����3
//	printf("%d\n", strlen(arr2));//���3
//
//	return 0;
//}



//������

//int add(int a, int b)
//{
//	int c = a + b;
//	return c;
//}
//int main()
//{
//	int x = 100;
//	int y = 200;
//	int sum = 0;
//	sum = add(x, y);
//	printf("%d\n", sum);
//	sum = add(100, 349);
//	printf("%d\n", sum);
//	return 0;
//}
//int main()
//{
//	int arr[] = { 1,2,3,4,5 };
//	printf("%d\n", arr[3]);
//	int i = 0;
//	while (i < 5)
//	{
//		printf("%d\n", arr[i]);
//		i++;
//	}
//	return 0;
//}
//int Add(int u, int v)
//{
//	int z = 0;
//	z = u + v;
//	return z;
//}
//int main()
//{
//	//��Ŀ��������һ������������˫Ŀ��������ͬ������Ŀ������
//
//	int a = 9;//��������ʼ��
//	int b = 0;
//	//���������
//	printf("����������\n");
//	printf("%d\n", a + 2);//�ӷ������11
//	printf("%d\n", a - 2);//���������7
//	printf("%d\n", a % 2);//ȡ�ࣨģ���㣩�����1
//	printf("%d\n", a / 2);//ȡ�̣����4
//	printf("%d\n", a * a);//�˷������81
//
//	a = 9;//��ֵ
//	b = 0;
//	//λ������
//	printf("λ������\n");
//	printf("%d\n", a << 2);//������������λ�����36
//	printf("%d\n", a >> 1);//������������λ�����4����ȥ��С�����֣�
//	printf("%d\n", a & b);//��λ�루1001��0000��0000�������0��
//	printf("%d\n", a | b);//��λ��1001��0000��1001�������9��
//	printf("%d\n", a ^ b);//��λ���1001��0000��1001�������9��
//	//������Բ���洢���֣������ֵĲ��������ڲ��룬��������Ϊԭ�룬��������Ϊԭ��ȡ�����ټ�һ�����棩
//	printf("%d\n", ~a);//������λȡ����00000000000000000000000000001001��ԭ��Ĳ��룬ԭ�뱾����
//	                                 //11111111111111111111111111110110����λȡ����Ĳ��룩��
//	                                 //10000000000000000000000000001010���ɲ���õ���ԭ�룬ԭ��ķ����һ��
//	                                 //�����-10��
//	printf("%d\n", ~(-a));//������λȡ����11111111111111111111111111110111��ԭ��Ĳ��룬ԭ��ķ����һ����
//	                                    //00000000000000000000000000001000����λȡ����Ĳ��룩��
//	                                    //00000000000000000000000000001000���ɲ���õ���ԭ�룬���뱾��
//	                                   //�����-10��
//
//
//	a = 9;
//	b = 0;
//	//�߼�������
//	printf("�߼�������\n");
//	printf("%d\n", !a);//�߼��������0
//	printf("%d\n", a && b);//�߼��룬���0
//	printf("%d\n", a || b);//�߼������1
//
//	a = 9;
//	b = 0;
//	//�Ƚϲ�����
//	printf("�Ƚϲ�����\n");
//	printf("%d\n", a > b);//���1
//	printf("%d\n", a < b);//���0
//	printf("%d\n", a >= b);//���1
//	printf("%d\n", a <= b);//���0
//	printf("%d\n", a == b);//���0
//	printf("%d\n", a != b);//���1
//
//	a = 9;
//	b = 0;
//	//��ֵ������
//	printf("��ֵ������\n");
//	printf("%d\n", a = 5);//��ֵ�����5
//	printf("%d\n", a += 2);//a=a+2�����7
//	printf("%d\n", a -= 1);//a=a-1�����6
//	printf("%d\n", a *= 2);//a=a*2�����12
//	//ͬ����/=��%=��
//	printf("%d\n", a++);//�����ټ�һ�����12
//	printf("%d\n", ++a);//�ȼ�һ���ã����14
//	//ͬ����a--,--a
//
//
//	//����������
//	printf("����������\n");
//
//	printf("sizeof������\n");
//	//sizeof�����ֽ�
//	int c = 1;
//	printf("%d\n", sizeof(int));//����ռ�ڴ��С�����4
//	printf("%d\n", sizeof c);//����ռ�ڴ��С��������ʡ�����ţ����������򲻿�ʡ�ԣ����4
//	printf("%d\n", sizeof(c));//����ռ�ڴ��С�����4
//	//���������sizeof����
//	int arr[10] = { 1,2,3 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	printf("%d\n", sz);//������Ԫ�ظ��������10
//	printf("%d\n", sizeof(arr));//����ռ�ڴ��С,������Ԫ�����ʹ�С����Ԫ�ظ��������40
//
//	printf("ǿ������ת��������\n");
//	//ǿ������ת����������������ʹ��
//	int d = (int)3.14;//ǿ�ƽ�3.14תΪ���Ͳ���ȥС������
//	printf("%d\n", d);//���3
//
//	printf("����������\n");
//	//����������
//	int x = 5;
//	int y = 4;
//	int max = 0;
//	max = (x > y ? x : y);//?ǰΪ�ж����������򷵻�:ǰ��ֵ�����򷵻�:���ֵ
//	printf("max = %d\n", max);//���max = 5
//
//	printf("���Ų�����\n");
//	//���Ų�����
//	int a1 = 2, a2 = 3;
//	printf("%d %d\n", a1, a2);
//
//	printf("�±������\n");
//	//�±����ò�����
//	int arrx[] = { 1,2,3 };
//	printf("%d\n", arrx[1]);//ȡ�������±�Ϊ1��Ԫ��
//
//	printf("�������ò�����\n");
//	//�������ò�����
//	int sum = Add(3, 4);//����������������ǰ�����ż��������ò�����
//	printf("%d\n", sum);//���7
//
//	printf("& * . ->������\n");
//	//&������ *������ ��ָ�룬.������ ->���������ṹ��
//	return 0;
//}



//�ؼ���

//void test()
//{
//	int a = 1;//ÿ�α����ö���ʼ��Ϊ1
//	static int b = 1;//���״ε��ó�ʼ��Ϊ1,֮��ֵ���ᱻ����
//	a++;
//	b++;
//	printf("a = %d\n", a);
//	printf("b = %d\n", b);
//}
//int main()
//{
//	//auto�Զ��������Զ������Զ����գ����ֲ�����ǰ��Ĭ����auto
//	
//
//	//const������
//	const int ci = 2;//ʹ�������ɱ�
//
//	// enumö����
//	printf("ö������\n");
//	enum sex//ö�ٳ������ɸı䣬���������ڵ�male�Ȳ��ɱ�
//	{
//		male,//�Զ��Ž�β
//		female,
//		secret,
//	};//�ԷֺŽ�β
//	enum sex s = female;//s�Ǳ���
//	printf("%d\n", male);
//	printf("%d\n", female);
//	printf("%d\n", secret);
//	printf("%d\n", s);
//
//
//	// register�Ĵ�������
//	register int c = 10;//�����a����Ϊ�Ĵ��������������ɱ���������
//
//
//	// static��̬����
//	//����1�����ξֲ�������ʹ�����������ӳ�
//	int i = 0;
//	while (i < 5)//������a = 2��b = 2,3,4,5,6
//	{
//		test();//���ú���
//		i++;
//	}
//	//����2������ȫ�ֱ�����ʹ��������������������ļ�
//	//extern�ⲿ����
//	extern int g_val;//�����ⲿ����
//	extern int g_val1;
//	printf("g_val = %d\n", g_val);//���2020
//	//printf("g_val = %d\n", g_val1);����ʹ��
//	//����3�����κ�����ʹ��������������������ļ�
//	//���ı��˺������������ԣ�������Ȼ�����ⲿ�������ԣ���staticʹ������ڲ��������ԣ�
//	int x1 = 10, y1 = 20;
//	extern int Add(int, int);//�����ⲿ����
//	extern int Add1(int, int);
//	int sum = Add(x1, y1);
//	//int sum1 = Add1(x1, y1);����ʹ��
//	printf("%d\n", sum);//���30
//	//printf("%d\n", sum1);
//
//
//
//	// struct�ṹ����
//	// union��������
//	
//	// typedef���ͱ���
//	typedef unsigned int u_int;//���޷������������
//	u_int x = 10;
//
//	// void������
// 
//	// volatile��ʱ��������
// 
//	// ������������int,short,long,signed,unsigned,float,double,char
//	// ������break,continue,case,default,do,while,for,if,else,goto,return,switch
//	return 0;
//}



//��֧���

//int main()
//{
//	int input = 0;
//	printf("do you like learning?(1/0)>:");
//	scanf("%d", &input);
//	if (input == 1)
//		printf("good");
//	else
//		printf("bad");
//}



// ѭ�����

//int main()
//{
//	int line = 0;
//	printf("hello world");
//	while (line < 20000)
//	{
//		printf("��һ�д���: %d\n", line);
//		line++;
//	}
//	printf("good");
//	return 0;
//}



//ָ��

//int main()
//{
//	//ָ����������������Ͳ�ͬ�в�ͬ����
//	int a = 10;
//	int* p = &a;//int*Ϊ����ָ���ͣ�&ȡ��ַ������������ַ����p
//	printf("a���ڴ��ַΪ%p\n", p);
//	*p = 20;//*�����ò�����,��20����p��ַ�����ڴ棬��a=20
//	printf("%d\n", a);
//	char ch = 'w';
//	char* pc = &ch;
//	*pc = 'q';
//	printf("%c\n", ch);
//	printf("%d\n", sizeof(short*));//ָ���С��32λƽ̨λ4���ֽڣ�64λ��Ϊ8���ֽ�
//	//��debug�ڸı�����
//	double d = 3.14;
//	double* pd = &d;
//	*pd = 5.5;
//	printf("%lf\n", d);
//	return 0;
//}



//�ṹ��

//struct Book
//{
//	char name[20];//�ԷֺŽ�β
//	short price;
//};//�ԷֺŽ�β
//int main()
//{
//	struct Book book = { "C���Գ������",55};
//	printf("bookname: %s\n", book.name);//���Բ�����
//	printf("bookprice: %d\n", book.price);
//	book.price = 35;
//	strcpy(book.name, "C++");//�ַ����鲻��ֱ�Ӹ�ֵ��Ҫͨ����������
//	printf("�޸ĺ�ļ۸�%d\n", book.price);
//	struct Book* pb = &book;//book���ڵ�ַ
//	printf("%s\n", (*pb).name);//�õ�ַ�������ݵ�name����
//	printf("%s\n", pb->name);//ָ���������ָ��pbָ��ĵ�ַ�������ݵ�name����
//	printf("%d\n", pb->price);
//	return 0;
//}