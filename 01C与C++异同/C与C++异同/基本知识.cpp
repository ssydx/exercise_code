#include "test.h"

//hello world
//int main(void)
//{
//	cout << "hello world" << endl;//cout�൱��printf(��׼�����),endl�൱��\0
//	cout << "hello world\n";//������ȼ�
//	return 0;
//}

//ע�ͷ�Ϊ����ע�ͣ�/* */���͵���ע�ͣ�//�������õ���ע��

//������ͬC����
//�������������� ������ = ֵ
//�������곣����const���εı���
//#define DAY 7
//int main(void)
//{
//	const int num = 7;
//	cout <<"һ����" << DAY<<"��\n";//ע������д��
//  cout <<"һ����" << num<<"��\n";
//	return 0;
//}

//�ؼ���
//auto static extern const volatile register signed unsigned sizeof typedef
//int short long char float double void enum struct union
//if else switch case default while do break continue goto for
//������bool true false string class friend 
//������const_cast dynamic_cast catch delete explicit export inline mutable namespace new operator
//������private protected public reinterpret_cast static_cast template this throw try typeid typename using
//������virtual wchar_t 

//��������ͨ�ã�������ؼ��ֳ�ͻ���������ַ��»�����ɣ����������ֿ�ͷ�������ִ�Сд

//����������sizeof
//�������ͽ�Ҫ��short<=int<=long<=long long  float<=double ��ͬ������ʵ�ʳ��ȿ��ܲ�ͬ
//int main(void)
//{
//	//����
//	//char c = 'w';//1���ֽڣ�-128~127��ͨ�����ڶ���ASCII�룬����ʹ�ø�ֵ����ֵ���ܵ�����ֲ����
//	//int i = 32768;//4���ֽ�
//	//short s = 32767;//2���ֽڣ�-327678~32767����סѭ��ͼ��+1��0~32767~-32768~-1��
//	//long l = 10;//4���ֽ�
//	//long long ll = 10;//8���ֽ�
//	//cout << c << endl;
//	//cout << i << endl;
//	//cout << s << endl;
//	//cout << l << endl;
//	//cout << ll << endl;
//	//cout << sizeof(c) << endl;
//	//cout << sizeof(i) << endl;
//	//cout << sizeof(s) << endl;
//	//cout << sizeof(l) << endl;
//	//cout << sizeof(ll) << endl;
//	
//	//ʵ�ͣ������ͣ�
//	//ע�⸡����Ĭ��Ϊ˫���ȣ�����һ��С�����������ȱ���ʱ�������ʽת����˫����->�����ȣ�
//	//ͨ����ֵ�����f����ʾֵΪ�����ȣ�������ʽת��
//	//�����ǵ����Ȼ���˫���ȣ�Ĭ�����6λ��Ч���֣������������֣�����C��ͬ������ʱ������ĩβ����
//	//float f = 3.14f;//4���ֽڣ����3.14
//	//double d = 31.1415926;//8���ֽڣ����31.1416
//	//cout << f << endl;
//	//cout << d << endl;
//	//cout << sizeof(f) << endl;
//	//cout << sizeof(d) << endl;
//	////��ѧ�������������ã�n1en2��ʾn1*10^n2
//	//float sf = 3e2;//���300
//	//float sf2 = 3e-2;//���0.03
//	//cout << sf << endl;
//	//cout << sf2 << endl;
//
//	//ASCII��ֵ��aΪ97��AΪ65
//	//char c1 = 'a';
//	//char c2 = 'A';
//	//cout << (int)c1 << endl;//���97
//	//cout << (int)c2 << endl;//���65
//
//	return 0;
//}

//ת���ַ�
//int main(void)
//{
//	cout << "hello world\n";//����
//	cout << "helloooo \tworld"<<endl;//ˮƽ�Ʊ��
//									 //ǰ�����ַ�ȡ4ģ����Ϊ1����3������2����2����ʱ���ո�ʹ�������ӿո�Ϊ4
//								     //ȡ4ģ����Ϊ3����5������0����8����ʱ���ո�ʹ�������ӿո�Ϊ8
//	cout << "hello \\world" << endl;//���\
//
//	cout << "hello \aworld" << endl;//����������
//	return 0;
//}

//�ַ������ַ�������
//int main(void)
//{
//	char str[] = "hello world";
//	string str1 = "hello world";//���ַ��������и����Բ�𣡣���ʹ��ʱ����stringͷ�ļ�
//	const char* ps = "hello world";//C�е��ַ�ָ�뷽ʽ�ڴ˴��в��ָ��������Ϊconst char*
//	cout << str << endl;
//	cout << str1<<endl;
//	cout << ps << endl;
//	cout << sizeof(str) << endl;//���12
//	cout << sizeof(str1) << endl;//���28��һ����ֵ�ֵ����Ϊ��ԭ����C���ַ������鲻ͬ
//	return 0;
//}

//bool��
//int main(void)
//{
//	bool a = true;//�����0���ȼ���true
//	bool b = false;//0�ȼ���false
//	cout << a << endl;//���1
//	cout << b << endl;//���0
//	cout << sizeof(a) << endl;//���1
//	return 0;
//}

//�������루cin���൱��scanf
//int main(void)
//{
//	int a = 0;
//	float b = 0.0f;
//	char c = 'a';
//	bool flag = true;
//	string str = "hello";//ע��string����Ҫ����ͷ�ļ�
//	cout << "����������:>";
//	cin >> a;
//	cout << "�����븡����:>";
//	cin >> b;
//	cout << "�������ַ�:>";
//	cin >> c;
//	cout << "�������ַ���:>";
//	cin >> str;
//	cout << "�����벼��ֵ:>";//������Ϊ�棬ע�ⲻ��ֱ������true��false
//	cin >> flag;
//	cout << a << endl;
//	cout << b << endl;
//	cout << c << endl;
//	cout << str << endl;//ͬ����ֻ������ո�ǰ������
//	cout << flag << endl;//�������1���������0
//	return 0;
//}

//�����ͬC����
//������������Ƚ���������߼��������λ�Ʋ�������λ����������ֵ�����������
//�������ʽ���±���ʣ���Ա���ʣ�->��.�����������ã�ȡ��ַ�������ã�ǿ��ת���������Լ������ű��ʽ
//int main(void)
//{
//	//int a = 10;
//	//int b = 3;
//	//cout << a - b << endl;//�����������ƣ�����һ��Ϊ������ʱ�����������ע��cout����ĸ�����������������
//	//cout << a + b << endl;//�����������ƣ�ͬ��
//	//cout << a / b << endl;//�����������
//	//cout << a / float(b) << endl;//����һ��Ϊ������ʱ���������������ʵֵ��
//	//cout << a * b << endl;//�����������ƣ�ͬ��
//	//cout << a % b << endl;//ע�⣬����������Ϊ����
//
//	//int a = 10;
//	//int b = 11;
//	//int c = a++ * ++b;//c=10*12=120
//	//cout << c << endl;
// 
//	//���಻�ٲ���
//
//	return 0;
//}

//�������
//˳��
//ѡ�� if			if else			if   else if   else		switch case break default
//ѭ�� while		do while		for		break continue goto

//����
//ͬ��һά�����sizeof(arr)��&arr��arr����ָ������Ԫ�ص�ַ
//int main(void)
//{
//	int count = 10;
//	int arr1[10] = { 1,2,3,4,5,6,7,8,9,0 };
//	int sz1 = sizeof(arr1) / sizeof(arr1[0]);
//	int arr2[10] = { 1,2,3,4 };//δ��ʼ����Ԫ��Ĭ�ϳ�ʼ��Ϊ0
//	int sz2 = sizeof(arr2) / sizeof(arr2[0]);
//	int arr3[] = { 1,2,3,4 };
//	int sz3 = sizeof(arr3) / sizeof(arr3[0]);
//	int arr4[10];//δ���г�ʼ��ʱԪ�������ֵ
//	int sz4 = sizeof(arr4) / sizeof(arr4[0]);
//	for (int i = 0; i < sz1; i++)
//	{
//		cout << arr1[i] << " ";
//	}
//	cout << endl;
//	for (int i = 0; i < sz2; i++)
//	{
//		cout << arr2[i] << " ";
//	}
//	cout << endl;
//	for (int i = 0; i < sz3; i++)
//	{
//		cout << arr3[i] << " ";
//	}
//	cout << endl;
//	for (int i = 0; i < sz4; i++)
//	{
//		cout << arr4[i] << " ";
//	}
//	cout << endl;
//	return 0;
//}
//syntax sugar
//int main(void)
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,0 };
//	cout << &arr + 1 << endl;
//	cout << arr + 1 << endl;
//	cout << &arr[0] + 1 << endl;
//	return 0;
//}
//�ҳ�������е����ֵ
//int main(void)
//{
//	int arr[5] = { 300,350,200,400,250 };
//	int max = arr[0];
//	for (int i = 1; i < sizeof(arr)/sizeof(arr[0]); i++)
//	{
//		if (arr[i] > max)
//		{
//			max = arr[i];
//		}
//	}
//	cout << max << endl;
//}
//��������
//void reverse(int* arr, int sz)
//{
//	int left = 0;
//	int right = sz - 1;
//	while (left < right)
//	{
//		int tmp = arr[left];
//		arr[left] = arr[right];
//		arr[right] = tmp;
//		left++;
//		right--;
//	}
//}
//int main(void)
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	reverse(arr, sz);
//	for (int i = 0; i < sz; i++)
//	{
//		cout << arr[i] << " ";
//	}
//	return 0;
//}
//ð������
//void bubble_sort(int* arr, int size)
//{
//	for (int i = 0; i < size - 1; i++)
//	{
//		bool isorder = true;
//		for (int j = 0; j < size - 1 - i; j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				int tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//				isorder = false;
//			}
//		}
//		if (isorder)
//		{
//			break;
//		}
//	}
//}
//int main(void)
//{
//	int arr[10] = { 3,4,2,1,6,9,7,8,5,0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	cout << "����ǰ��";
//	for (int i = 0; i < 10; i++)
//	{
//		cout << arr[i] << " ";
//	}
//	cout << endl;
//
//	bubble_sort(arr, sz);
//	cout << "�����";
//	for (int i = 0; i < 10; i++)
//	{
//		cout << arr[i] << " ";
//	}
//	return 0;
//}

//��ά���飬ע��syntax sugar
//void Print(int (*arr)[3], int row, int col)
//{
//	//��ά��������Ƴ�sizeof��&�ⶼָ�׸�������ĵ�ַ������Ϊ����ָ��
//	for (int i = 0; i < row; i++)
//	{
//		for (int j = 0; j < col; j++)
//		{
//			cout << arr[i][j] << " ";
//			//cout<< *(*(arr+i)+j)<< " ";
//		}
//		cout << endl;
//	}
//}
//int main(void)
//{
//	//��ά���鱾�������������
//	//��ά�������ʡ�����������Ԫ�ظ���
//	//�����ڲ�������ϻ����ű�����ִ��������
//	int arr1[3][3] = { 1,2,3,4,5,6,7,8,9 };
//	int arr2[][3] = { 1,2,3,4,5,6,7,8,9 };
//	int arr3[3][3] = 
//	{
//		{1,2},
//		{4} 
//	};
//	int arr4[][3] = 
//	{ 
//		{1,2},
//		{4},
//		{5} 
//	};
//	int arr5[3][3] =
//	{
//		{1,2,3},
//		{4,5,6},
//		{7,8,9}
//	};
//	int row = 3;
//	int col = 3;
//	Print(arr1, row,col);
//	Print(arr2, row, col);
//	Print(arr3, row, col);
//	Print(arr4, row, col);
//	Print(arr5, row, col);
//	return 0;
//}
//�ɼ�ͳ��
//void allgrade(int(*arr)[3], int row, int col,string* name)
//{
//	for (int i = 0; i < row; i++)
//	{
//		int sum = 0;
//		for (int j = 0; j < col; j++)
//		{
//			sum += arr[i][j];
//		}
//		cout << name[i] << "�ܳɼ�Ϊ: " << sum << endl;
//	}
//}
//int main(void)
//{
//	int grade[3][3] =
//	{
//		{100,100,100},
//		{90,50,100},
//		{60,70,80}
//	};
//	string name[3] = { "zhangsan","lisi","wangwu" };
//	allgrade(grade, 3, 3, name);
//	return 0;
//}

//�������޲��޷�����ӡһ�仰�ĺ��������޲��з�������ʹ�ã����в��޷�����������������ֵ�����в��з���������ֵ�ĺͣ���ã�
//�����������������β�������Ҫʡ��
//��ֵ����һ��ָ�����ڴ�ռ�
//��������������Ϊ��ֵ�����������ڴ�ռ䣩
//ȡ��ַ����������Ϊ��ֵ����ַ������ֵ����������֪���ڴ�ռ䣩
//int Add(const int x,const int y)//��ֵ
//{
//	return x + y;
//}
//void swap(int* x, int* y)//��ַ
//{
//	int tmp = *x;
//	*x = *y;
//	*y = tmp;
//}
//int main(void)
//{
//	int a = 20;
//	int b = 30;
//	int sum = Add(a, b);
//	cout << sum << endl;
//	swap(&a, &b);
//	cout << "a = "<< a << " "<<"b = " << b << endl;
//	return 0;
//}
//���ļ���д
//int main(void)
//{
//	test();
//	return 0;
//}

//ָ��
//int main(void)
//{
//	//ָ���һ����ʽ
//	//δ����Ұָ��Ӧ��δָ����ָ���ʼ��ΪNULL������ָ��ʹ��ǰ����飬�ڿ��Եĵط�ʹ��const
//	int a = 10;
//	int* pa = &a;
//	cout << a << endl;
//	cout << *pa << endl;
//	cout << pa << endl;
//
//	//ע��ָ��������Ĺ�ϵ
//	// //ע��ָ�����ַ�����������Ĺ�ϵ
//	//ע��ָ���뺯���Ĺ�ϵ
//}

//�ṹ��
//typedef struct
//{
//	string name;//28
//	int age;//4
//	char c;//1
//	string name2;//28
//}Peo;
//int main(void)
//{
//	Peo p1 = { "zhangsan",21 };
//	cout << p1.name << endl;
//	cout << p1.age << endl;
//	cout << sizeof(string) << endl;//28
//	cout << sizeof(p1) << endl;//C++�Ľṹ�����ʱ��string�ڼ�������������ͺ��ټ���28*n(nΪstring���ͳ�Ա�ĸ���)
//	return 0;
//}
//syntax sugar
//typedef struct
//{
//	int chinese;
//	int math;
//	int english;
//}Score;
//typedef struct
//{
//	string name;
//	int age;
//	string sex;
//	Score SScore;
//
//}Stu;
//void Print(Stu* s)
//{
//	cout << "���֣�"<< s->name << endl;
//	cout << "���䣺"<< s->age << endl;
//	cout << "�Ա�"<< s->sex << endl;
//	cout << "���ĳɼ���" << s->SScore.chinese << endl;
//	cout << "��ѧ�ɼ���" << s->SScore.math << endl;
//	cout << "Ӣ��ɼ���" << s->SScore.english << endl;
//}
//int main(void)
//{
//	Stu s1 = { "zhangsan",21,"male",{100,90,110} };
//	Stu* ps = &s1;
//	cout << ps->name<<endl;
//	cout << ps->SScore.chinese << endl;
//	cout << endl;
//	Print(&s1);
//	return 0;
//}

//const���εı�������������
//int main(void)
//{
//	const int num = 10;
//	int arr[num] = { 0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (int i = 0; i < sz; i++)
//	{
//		arr[i] = i;
//	}
//	for (int i = 0; i < sz; i++)
//	{
//		cout << arr[i] << " ";
//	}
//	return 0;
//}

//cin cout�����ʮ���ƣ�Ĭ�ϣ���ʮ�����ƻ�˽��������Է�����������Ч�������ַ���ָ�룩
//int main(void)
//{
//	int a = 10;
//	int b = 20;
//	int* pa = &a;
//	cout << hex;//ʹ֮�����ֵ��ʽΪʮ������
//	cout << a << endl;
//	cout << b << endl;
//	cout << pa << endl;
//	cout << dec;//����Ӧ��ʮ����
//	cout << a << endl;
//	cout << b << endl;
//	cout << pa << endl;
//	return 0;
//}