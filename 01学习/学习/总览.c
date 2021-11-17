#include <stdio.h>
#include <string.h>

//hello world

//int main()//主函数
//{
//	printf("hello world");//语句以分号分隔
//	return 0;//无返回值
//}//代码块以大括号分隔


//双斜杠为C++注释

/*int a = 10;
int
advd
C语言注释，不支持嵌套，即遇到首个星杠即结束
*/


//转义字符

//int main()
//{
//	printf("hello \nworld\n");//反斜杠n为换行符
//	printf("hello \tworld\n");//反斜杠t为水平制表符
//	printf("hello \bworld\n");//反斜杠b为退格符
//	printf("hello \rworld\n");//反斜杠r为回车符
//	printf("hello \\world\n");//表示原义
//	printf("%c\n", 'a');
//	printf("hello \"world\n");
//	printf("%d\n", strlen("a\b\t.c\32\x32"));//反斜杠t表示一个制表符，同理得退格符
//	//反斜杠ooo表示该数字（按八进制算，一到三位）对应的ASCII码值，即\32表示26对应的ASCII码值为→
//	//反斜杠xhh（Xhh）表示该数字（按十六进制算，一到两位）对应的ASCII码值，即\x65表示101对应的ASCII码值为e
//	printf("\32\n");
//	printf("\x65\n");
//}


//数据类型

//int main()
//{
//	//整型
//	printf("整数类型\n");
//	int a = 10, b = -5;//默认有符号
//	signed int x = 10, y = -5;//有符号整型，四个字节
//	unsigned int a1 = 10, b2 = -5;
//	long x1 = 10, y1 = -5;//长整型，四个字节
//	short x2 = 10, y2 = -5;//短整型，两个字节
//	printf("%d %d\n", a, b);
//	printf("%d %d\n", x, y);
//	printf("%d %d\n", x1, y1);
//	printf("%d %d\n", x2, y2);
//	printf("%d %d %d\n", sizeof(a), sizeof(x1), sizeof(x2));
//
//
//	//浮点型同理
//	
//
//	//字符型同理
//	
//
//	//数组型
//	char arr1[] = "abc";
//	char arr2[] = { 'a', 'b', 'c','\0'};//\0不参与长度
//	//字符串以\0为结尾标志(即0），该结尾标志不计算入长度
//	printf("%d\n", strlen(arr1));//strlen会返回字符串的长度，输出3
//	printf("%d\n", strlen(arr2));//输出3
//
//	return 0;
//}



//操作符

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
//	//单目操作符（一个操作数）与双目操作符（同理），三目操作符
//
//	int a = 9;//声明并初始化
//	int b = 0;
//	//算数运算符
//	printf("算术操作符\n");
//	printf("%d\n", a + 2);//加法，输出11
//	printf("%d\n", a - 2);//减法，输出7
//	printf("%d\n", a % 2);//取余（模运算），输出1
//	printf("%d\n", a / 2);//取商，输出4
//	printf("%d\n", a * a);//乘法，输出81
//
//	a = 9;//赋值
//	b = 0;
//	//位操作符
//	printf("位操作符\n");
//	printf("%d\n", a << 2);//按二进制左移位，输出36
//	printf("%d\n", a >> 1);//按二进制右移位，输出4（舍去了小数部分）
//	printf("%d\n", a & b);//按位与（1001和0000→0000，即输出0）
//	printf("%d\n", a | b);//按位或（1001和0000→1001，即输出9）
//	printf("%d\n", a ^ b);//按位异或（1001和0000→1001，即输出9）
//	//计算机以补码存储数字，对数字的操作均基于补码，正数补码为原码，负数补码为原码取反码再加一（可逆）
//	printf("%d\n", ~a);//正数按位取反（00000000000000000000000000001001（原码的补码，原码本身）→
//	                                 //11111111111111111111111111110110（按位取反后的补码）→
//	                                 //10000000000000000000000000001010（由补码得到的原码，原码的反码加一）
//	                                 //即输出-10）
//	printf("%d\n", ~(-a));//负数按位取反（11111111111111111111111111110111（原码的补码，原码的反码加一）→
//	                                    //00000000000000000000000000001000（按位取反后的补码）→
//	                                    //00000000000000000000000000001000（由补码得到的原码，补码本身）
//	                                   //即输出-10）
//
//
//	a = 9;
//	b = 0;
//	//逻辑操作符
//	printf("逻辑操作符\n");
//	printf("%d\n", !a);//逻辑反，输出0
//	printf("%d\n", a && b);//逻辑与，输出0
//	printf("%d\n", a || b);//逻辑或，输出1
//
//	a = 9;
//	b = 0;
//	//比较操作符
//	printf("比较操作符\n");
//	printf("%d\n", a > b);//输出1
//	printf("%d\n", a < b);//输出0
//	printf("%d\n", a >= b);//输出1
//	printf("%d\n", a <= b);//输出0
//	printf("%d\n", a == b);//输出0
//	printf("%d\n", a != b);//输出1
//
//	a = 9;
//	b = 0;
//	//赋值操作符
//	printf("赋值操作符\n");
//	printf("%d\n", a = 5);//赋值，输出5
//	printf("%d\n", a += 2);//a=a+2，输出7
//	printf("%d\n", a -= 1);//a=a-1，输出6
//	printf("%d\n", a *= 2);//a=a*2，输出12
//	//同理有/=，%=等
//	printf("%d\n", a++);//先用再加一，输出12
//	printf("%d\n", ++a);//先加一再用，输出14
//	//同理有a--,--a
//
//
//	//其他操作符
//	printf("其他操作符\n");
//
//	printf("sizeof操作符\n");
//	//sizeof，按字节
//	int c = 1;
//	printf("%d\n", sizeof(int));//求所占内存大小，输出4
//	printf("%d\n", sizeof c);//求所占内存大小，变量可省略括号，数据类型则不可省略，输出4
//	printf("%d\n", sizeof(c));//求所占内存大小，输出4
//	//基于数组的sizeof操作
//	int arr[10] = { 1,2,3 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	printf("%d\n", sz);//求数组元素个数，输出10
//	printf("%d\n", sizeof(arr));//求所占内存大小,数组中元素类型大小乘以元素个数，输出40
//
//	printf("强制类型转换操作符\n");
//	//强制类型转换操作符，不建议使用
//	int d = (int)3.14;//强制将3.14转为整型并舍去小数部分
//	printf("%d\n", d);//输出3
//
//	printf("条件操作符\n");
//	//条件操作符
//	int x = 5;
//	int y = 4;
//	int max = 0;
//	max = (x > y ? x : y);//?前为判断条件，真则返回:前的值，否则返回:后的值
//	printf("max = %d\n", max);//输出max = 5
//
//	printf("逗号操作符\n");
//	//逗号操作符
//	int a1 = 2, a2 = 3;
//	printf("%d %d\n", a1, a2);
//
//	printf("下标操作符\n");
//	//下标引用操作符
//	int arrx[] = { 1,2,3 };
//	printf("%d\n", arrx[1]);//取出数组下标为1的元素
//
//	printf("函数调用操作符\n");
//	//函数调用操作符
//	int sum = Add(3, 4);//函数定义在主函数前，括号即函数调用操作符
//	printf("%d\n", sum);//输出7
//
//	printf("& * . ->操作符\n");
//	//&操作符 *操作符 见指针，.操作符 ->操作符见结构体
//	return 0;
//}



//关键字

//void test()
//{
//	int a = 1;//每次被调用都初始化为1
//	static int b = 1;//仅首次调用初始化为1,之后值不会被重置
//	a++;
//	b++;
//	printf("a = %d\n", a);
//	printf("b = %d\n", b);
//}
//int main()
//{
//	//auto自动变量（自动申请自动回收），局部变量前都默认有auto
//	
//
//	//const常变量
//	const int ci = 2;//使变量不可变
//
//	// enum枚举型
//	printf("枚举类型\n");
//	enum sex//枚举常量不可改变，即大括号内的male等不可变
//	{
//		male,//以逗号结尾
//		female,
//		secret,
//	};//以分号结尾
//	enum sex s = female;//s是变量
//	printf("%d\n", male);
//	printf("%d\n", female);
//	printf("%d\n", secret);
//	printf("%d\n", s);
//
//
//	// register寄存器变量
//	register int c = 10;//建议把a定义为寄存器变量，具体由编译器决定
//
//
//	// static静态变量
//	//作用1：修饰局部变量，使其生命周期延长
//	int i = 0;
//	while (i < 5)//输出五个a = 2，b = 2,3,4,5,6
//	{
//		test();//调用函数
//		i++;
//	}
//	//作用2：修饰全局变量，使其作用域仅局限于所在文件
//	//extern外部变量
//	extern int g_val;//声明外部变量
//	extern int g_val1;
//	printf("g_val = %d\n", g_val);//输出2020
//	//printf("g_val = %d\n", g_val1);不能使用
//	//作用3：修饰函数，使其作用域仅局限于所在文件
//	//（改变了函数的链接属性，函数天然具有外部链接属性，但static使其仅有内部链接属性）
//	int x1 = 10, y1 = 20;
//	extern int Add(int, int);//声明外部函数
//	extern int Add1(int, int);
//	int sum = Add(x1, y1);
//	//int sum1 = Add1(x1, y1);不能使用
//	printf("%d\n", sum);//输出30
//	//printf("%d\n", sum1);
//
//
//
//	// struct结构体型
//	// union共用体型
//	
//	// typedef类型别名
//	typedef unsigned int u_int;//给无符号整型起别名
//	u_int x = 10;
//
//	// void空类型
// 
//	// volatile暂时不做介绍
// 
//	// 常用数据类型int,short,long,signed,unsigned,float,double,char
//	// 语句控制break,continue,case,default,do,while,for,if,else,goto,return,switch
//	return 0;
//}



//分支语句

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



// 循环语句

//int main()
//{
//	int line = 0;
//	printf("hello world");
//	while (line < 20000)
//	{
//		printf("敲一行代码: %d\n", line);
//		line++;
//	}
//	printf("good");
//	return 0;
//}



//指针

//int main()
//{
//	//指针根据所存数据类型不同有不同类型
//	int a = 10;
//	int* p = &a;//int*为整数指针型，&取地址操作符，将地址赋给p
//	printf("a的内存地址为%p\n", p);
//	*p = 20;//*解引用操作符,将20赋给p地址处的内存，即a=20
//	printf("%d\n", a);
//	char ch = 'w';
//	char* pc = &ch;
//	*pc = 'q';
//	printf("%c\n", ch);
//	printf("%d\n", sizeof(short*));//指针大小在32位平台位4个字节，64位则为8个字节
//	//在debug内改变配置
//	double d = 3.14;
//	double* pd = &d;
//	*pd = 5.5;
//	printf("%lf\n", d);
//	return 0;
//}



//结构体

//struct Book
//{
//	char name[20];//以分号结尾
//	short price;
//};//以分号结尾
//int main()
//{
//	struct Book book = { "C语言程序设计",55};
//	printf("bookname: %s\n", book.name);//属性操作符
//	printf("bookprice: %d\n", book.price);
//	book.price = 35;
//	strcpy(book.name, "C++");//字符数组不可直接赋值，要通过函数进行
//	printf("修改后的价格：%d\n", book.price);
//	struct Book* pb = &book;//book所在地址
//	printf("%s\n", (*pb).name);//该地址处的数据的name属性
//	printf("%s\n", pb->name);//指向操作符，指针pb指向的地址处的数据的name属性
//	printf("%d\n", pb->price);
//	return 0;
//}