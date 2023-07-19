 

## 1.数据类型：

1. 内置的

char	1字节	

short	2字节

int	4字节

long	8字节

long long	

float

double

2. 自定义

srtuct ...

enum

union - 联合体



当全局变量和局部变量同名时，局部变量范围内局部变量优先。


## 2.sizeof

![image-20230718003857000](C:\Users\lipc\Pictures\Camera Roll\Typora_picture\image-20230718003857000.png)

![image-20230718004112369](C:\Users\lipc\Pictures\Camera Roll\Typora_picture\image-20230718004112369.png)





## 3.逗号表达式

exp1, exp2, exp3, .... expN

逗号表达式就是逗号隔开的一串表达式

特点是：从左向右依次计算，整个表达式的结果是最后一个表达式的结果

```c
int a = 10;
int b = 20;
int c = 0;
//		 c = 8      a = 28     5
int d = (c = a - 2, a = b + c, c - 3);
printf("d = %d",d);// d = 5
```





## 4.extern

声明外部符号

![image-20230718175052668](C:\Users\lipc\Pictures\Camera Roll\Typora_picture\image-20230718175052668.png)

全局变量是具有外部链接属性

编译 + 链接 --> 可执行程序



## 5.register

寄存器

电脑上的存储设备都有哪些？

- 寄存器（集成到 CPU 上）
- 高速缓存（cache）
- 内存
- 硬盘

![image-20230718181424126](C:\Users\lipc\Pictures\Camera Roll\Typora_picture\image-20230718181424126.png)



```c
// 寄存器变量
register int num = 3; // 建议：3放在寄存器中
```





## 6.signed 和 unsigned

有符号和无符号  



## 7.static

静态的。将修饰的局部变量、全局变量、函数放在静态区

### 7.1全局变量（函数同理）

全局变量是放在静态区的

static只是将全局变量的外部链接属性更改为内部链接属性，并没有更改全局变量的存放空间

![image-20230718175430987](C:\Users\lipc\Pictures\Camera Roll\Typora_picture\image-20230718175430987.png)

### 7.2局部变量

![image-20230718175454640](C:\Users\lipc\Pictures\Camera Roll\Typora_picture\image-20230718175454640.png)



## 8.typedef

类型重命名



## 9.#define 定义常量和宏

```c
// ADD是宏名；x和y是宏的参数，参数是无类型；((x)+(y))是宏体
#define ADD(x,y) ((x)+(y))
int main()
{
    int a = 19;
    int b = 13;
    int c = ADD(a, b);
}
```

define 不是关键字，是预处理指令



## 10.指针

![image-20230719151946777](C:\Users\lipc\Pictures\Camera Roll\Typora_picture\image-20230719151946777.png)

p 是一个指针变量

指针就是用来存放地址的。存入的任何数据都视为地址。

```c
int a = 10; // 向内存申一个4字节的空间，存储10
// &a 是取地址操作符
printf("%p\n", &a); //0x0012ff40	%p 用来打印地址
int* p = &a; // p 就是指针变量
*p = 20; // * 是解引用操作符，意思就是通过 p 中存放的地址，找到 p 所指向的对象， *p 就是 p 指向的对象
printf("%d", a);// 20
```



### 10.1指针变量的大小

不管是什么类型的指针，都是在创建指针变量

指针变量是用来存放地址的

指针变量的大小取决于一个地址存放的时候需要多大的空间

32位机器上的地址：32bit 位 - 4byte，所以指针变量的大小是 4 个字节

64位机器上的地址：64bit 位 - 8byte，所以指针变量的大小是 8 个字节

```c
// int* p;
// char* p2;
printf("%zu\n", sizeof(char*));
printf("%zu\n", sizeof(short*));
printf("%zu\n", sizeof(int*));
printf("%zu\n", sizeof(float*));
printf("%zu\n", sizeof(double*));
```



## 11.结构体

```c
struct Stu
{
    char name[20];
    char sex[5];
    int age;
    char tele[15];
};

void print(struct Stu* p)
{
    printf("%s %s %d %s", (*p).name, (*p).sex, (*p).age, (*p).tele);
    printf("%s %s %d %s", p->name, p->sex, p->age, p->tele);
    // ->
    // 结构体指针变量->成员名
}

int main()
{
    struct Stu s = {"zhangsan", "nan", 20, "111111111111"};
    // 结构体对象.成员名
    printf("%s -- %s -- %d -- %s\n", s.name, s.sex, s.age, s.tele);
    print(&s);
    
    return 0;
}
```







