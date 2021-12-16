#include "test.h"

//hello world
//int main(void)
//{
//	cout << "hello world" << endl;//cout相当于printf(标准输出流),endl相当于\0
//	cout << "hello world\n";//与上面等价
//	return 0;
//}

//注释分为多行注释（/* */）和单行注释（//），常用单行注释

//常变量同C语言
//变量：数据类型 变量名 = 值
//常量：宏常量，const修饰的变量
//#define DAY 7
//int main(void)
//{
//	const int num = 7;
//	cout <<"一周有" << DAY<<"天\n";//注意这种写法
//  cout <<"一周有" << num<<"天\n";
//	return 0;
//}

//关键字
//auto static extern const volatile register signed unsigned sizeof typedef
//int short long char float double void enum struct union
//if else switch case default while do break continue goto for
//新增：bool true false string class friend 
//新增：const_cast dynamic_cast catch delete explicit export inline mutable namespace new operator
//新增：private protected public reinterpret_cast static_cast template this throw try typeid typename using
//新增：virtual wchar_t 

//命名规则通用：不能与关键字冲突，以数字字符下划线组成（不能以数字开头），区分大小写

//数据类型与sizeof
//数据类型仅要求short<=int<=long<=long long  float<=double 不同编译器实际长度可能不同
//int main(void)
//{
//	//整型
//	//char c = 'w';//1个字节，-128~127，通常用于对照ASCII码，很少使用负值，负值可能导致移植问题
//	//int i = 32768;//4个字节
//	//short s = 32767;//2个字节，-327678~32767，记住循环图，+1（0~32767~-32768~-1）
//	//long l = 10;//4个字节
//	//long long ll = 10;//8个字节
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
//	//实型（浮点型）
//	//注意浮点数默认为双精度，即将一个小数赋给单精度变量时会进行隐式转换（双精度->单精度）
//	//通过在值后面加f来表示值为单精度，避免隐式转换
//	//无论是单精度还是双精度，默认输出6位有效数字（包括整数部分），与C不同：不足时不进行末尾补零
//	//float f = 3.14f;//4个字节，输出3.14
//	//double d = 31.1415926;//8个字节，输出31.1416
//	//cout << f << endl;
//	//cout << d << endl;
//	//cout << sizeof(f) << endl;
//	//cout << sizeof(d) << endl;
//	////科学计数法，不常用：n1en2表示n1*10^n2
//	//float sf = 3e2;//输出300
//	//float sf2 = 3e-2;//输出0.03
//	//cout << sf << endl;
//	//cout << sf2 << endl;
//
//	//ASCII码值：a为97，A为65
//	//char c1 = 'a';
//	//char c2 = 'A';
//	//cout << (int)c1 << endl;//输出97
//	//cout << (int)c2 << endl;//输出65
//
//	return 0;
//}

//转义字符
//int main(void)
//{
//	cout << "hello world\n";//换行
//	cout << "helloooo \tworld"<<endl;//水平制表符
//									 //前部分字符取4模余数为1（补3个）或2（补2个）时补空格使该余数加空格为4
//								     //取4模余数为3（补5个）或0（补8个）时补空格使该余数加空格为8
//	cout << "hello \\world" << endl;//输出\
//
//	cout << "hello \aworld" << endl;//发出警报声
//	return 0;
//}

//字符串与字符串数组
//int main(void)
//{
//	char str[] = "hello world";
//	string str1 = "hello world";//与字符串数组有根本性差别！！！使用时包含string头文件
//	const char* ps = "hello world";//C中的字符指针方式在此处有差别，指针需声明为const char*
//	cout << str << endl;
//	cout << str1<<endl;
//	cout << ps << endl;
//	cout << sizeof(str) << endl;//输出12
//	cout << sizeof(str1) << endl;//输出28，一个奇怪的值，因为其原理与C的字符串数组不同
//	return 0;
//}

//bool型
//int main(void)
//{
//	bool a = true;//任意非0都等价与true
//	bool b = false;//0等价于false
//	cout << a << endl;//输出1
//	cout << b << endl;//输出0
//	cout << sizeof(a) << endl;//输出1
//	return 0;
//}

//数据输入（cin）相当于scanf
//int main(void)
//{
//	int a = 0;
//	float b = 0.0f;
//	char c = 'a';
//	bool flag = true;
//	string str = "hello";//注意string类型要包含头文件
//	cout << "请输入整数:>";
//	cin >> a;
//	cout << "请输入浮点数:>";
//	cin >> b;
//	cout << "请输入字符:>";
//	cin >> c;
//	cout << "请输入字符串:>";
//	cin >> str;
//	cout << "请输入布尔值:>";//非零则为真，注意不可直接输入true或false
//	cin >> flag;
//	cout << a << endl;
//	cout << b << endl;
//	cout << c << endl;
//	cout << str << endl;//同样，只能输出空格前的内容
//	cout << flag << endl;//真则输出1，假则输出0
//	return 0;
//}

//运算符同C语言
//算术运算符，比较运算符，逻辑运算符，位移操作符，位操作符，赋值运算符，正负
//条件表达式，下标访问，成员访问（->和.），函数调用，取地址，解引用，强制转换，自增自减，逗号表达式
//int main(void)
//{
//	//int a = 10;
//	//int b = 3;
//	//cout << a - b << endl;//操作数无限制，任意一个为浮点数时输出浮点数（注意cout输出的浮点数可能是整数）
//	//cout << a + b << endl;//操作数无限制，同上
//	//cout << a / b << endl;//整数相除得商
//	//cout << a / float(b) << endl;//任意一个为浮点数时则输出浮点数（真实值）
//	//cout << a * b << endl;//操作数无限制，同上
//	//cout << a % b << endl;//注意，操作数必须为整数
//
//	//int a = 10;
//	//int b = 11;
//	//int c = a++ * ++b;//c=10*12=120
//	//cout << c << endl;
// 
//	//其余不再阐述
//
//	return 0;
//}

//三大语句
//顺序
//选择 if			if else			if   else if   else		switch case break default
//循环 while		do while		for		break continue goto

//数组
//同理，一维数组除sizeof(arr)和&arr外arr都是指数组首元素地址
//int main(void)
//{
//	int count = 10;
//	int arr1[10] = { 1,2,3,4,5,6,7,8,9,0 };
//	int sz1 = sizeof(arr1) / sizeof(arr1[0]);
//	int arr2[10] = { 1,2,3,4 };//未初始化的元素默认初始化为0
//	int sz2 = sizeof(arr2) / sizeof(arr2[0]);
//	int arr3[] = { 1,2,3,4 };
//	int sz3 = sizeof(arr3) / sizeof(arr3[0]);
//	int arr4[10];//未进行初始化时元素是随机值
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
//找出五个数中的最大值
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
//数组逆置
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
//冒泡排序
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
//	cout << "排序前：";
//	for (int i = 0; i < 10; i++)
//	{
//		cout << arr[i] << " ";
//	}
//	cout << endl;
//
//	bubble_sort(arr, sz);
//	cout << "排序后：";
//	for (int i = 0; i < 10; i++)
//	{
//		cout << arr[i] << " ";
//	}
//	return 0;
//}

//二维数组，注意syntax sugar
//void Print(int (*arr)[3], int row, int col)
//{
//	//二维数组的名称除sizeof和&外都指首个子数组的地址，即其为数组指针
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
//	//二维数组本质是数组的数组
//	//多维数组仅可省略最外层数组元素个数
//	//建议内层数组加上花括号避免出现错误或歧义
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
//成绩统计
//void allgrade(int(*arr)[3], int row, int col,string* name)
//{
//	for (int i = 0; i < row; i++)
//	{
//		int sum = 0;
//		for (int j = 0; j < col; j++)
//		{
//			sum += arr[i][j];
//		}
//		cout << name[i] << "总成绩为: " << sum << endl;
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

//函数：无参无返（打印一句话的函数），无参有返（很少使用），有参无返（交换两个变量的值），有参有返（求两个值的和，最常用）
//函数声明尽量标明形参名，不要省略
//左值代表一块指定的内存空间
//解引用往往可作为左值（变量代表内存空间）
//取地址往往不能作为左值（地址仅仅是值，不代表已知的内存空间）
//int Add(const int x,const int y)//传值
//{
//	return x + y;
//}
//void swap(int* x, int* y)//传址
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
//分文件编写
//int main(void)
//{
//	test();
//	return 0;
//}

//指针
//int main(void)
//{
//	//指针的一般形式
//	//未避免野指针应将未指定的指针初始化为NULL，并在指针使用前做检查，在可以的地方使用const
//	int a = 10;
//	int* pa = &a;
//	cout << a << endl;
//	cout << *pa << endl;
//	cout << pa << endl;
//
//	//注意指针与数组的关系
//	// //注意指针与字符（串）数组的关系
//	//注意指针与函数的关系
//}

//结构体
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
//	cout << sizeof(p1) << endl;//C++的结构体计算时，string在计算完毕其他类型后再加上28*n(n为string类型成员的个数)
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
//	cout << "名字："<< s->name << endl;
//	cout << "年龄："<< s->age << endl;
//	cout << "性别："<< s->sex << endl;
//	cout << "语文成绩：" << s->SScore.chinese << endl;
//	cout << "数学成绩：" << s->SScore.math << endl;
//	cout << "英语成绩：" << s->SScore.english << endl;
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

//const修饰的变量可用于数组
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

//cin cout，输出十进制（默认）或十六进制或八进制数（对非整型数据无效，比如字符和指针）
//int main(void)
//{
//	int a = 10;
//	int b = 20;
//	int* pa = &a;
//	cout << hex;//使之后的数值格式为十六进制
//	cout << a << endl;
//	cout << b << endl;
//	cout << pa << endl;
//	cout << dec;//重新应用十进制
//	cout << a << endl;
//	cout << b << endl;
//	cout << pa << endl;
//	return 0;
//}