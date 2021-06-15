#include <stdio.h>
//#include <string.h>
//#include <stdlib.h>
//int main()
//{
//	unsigned int mpu_standard=100;
//	char *str = "MPU-50";
//	char *token;
//	int i = 0;
//	char *temp_buf = str;
//	temp_buf = strstr(temp_buf, "-");
//	temp_buf++;
//	mpu_standard = atoi(temp_buf);
	//if (i == 1)
	//{
	//	token = strtok(temp_buf, "-");
	//	temp_buf = temp_buf + strlen(token) + 1;
	//	str_buf[1] = strtok(temp_buf, "\r\n");

	///*	if (strcmp(str_buf[0], "MPU") == 0)
	//	{
	//		mpu_standard = atoi(str_buf[1]);
	//		cnt[0] = mpu_standard;
	//	}*/
	//}
//	return 0;
//}

//int main()
//{
//	char *s = "GoldenGlobalView";
//	char *l = "lob";
//	char *p;
//	p = strstr(s, l);
//	if (p)
//		printf("%s", p);
//	else
//		printf("NotFound!");
//	return 0;
//}
//int main()
//{
//	int s = 0;
//	char* str = "MPU0-50";
//	char* temp_buf = str;
//	printf("%s\n", str);
//	printf("%p\n", str);
//	printf("%s\n", temp_buf);
//	printf("%p\n", temp_buf);
//	printf("%p\n", temp_buf+1);
//	printf("%s\n", temp_buf + 1);
//	printf("%d\n", sizeof(str));
//	printf("%d\n", sizeof(* str));
//	printf("%d\n", sizeof("MPUMP"));
//	s = *(temp_buf + 5);
//	printf("%d\n", s);
//
//	return 0;
//}

//#include <string.h>

//int main()
//{
//	char str[80] = "This is - www.baidu.com - website";
//	const char s[2] = "-";
//	char* token;
//	token = strtok(str,s);
//	while (token != NULL)
//	{
//		printf("%s\n", token);
//		token = strtok(NULL, s);
//	}
//	printf("\n%s\n", str);
//	return 0;
//}

//int main()
//{
//	char str[8] = "MPU-50";
//	char* token = strtok(str, "-");
//		while (token != NULL)
//		{
//			printf("%s\n", token);
//			token = strtok(NULL, "-");
//		}
//	return 0;
//}

//int main()
//{
//	char str[10] = "MPU-50";
//	char *temp_buf = str;
//	char *str_buf[5];
//	str_buf[0] = strtok(str, "-");
//	temp_buf = temp_buf + strlen(str_buf[0]) + 1;
//	str_buf[1] = strtok(temp_buf, "\r\n");
//	return 0;
//
//}

//int main()
//{
//	int a = 10;
//	int* p = &a;
//	return 0;
//}

//int main()
//{
//	printf("%d\n", sizeof(char*));
//	printf("%d\n", sizeof(short*));
//	printf("%d\n", sizeof(int*));
//	printf("%d\n", sizeof(double*));
//	return 0;
//}

//int main()
//{
//	int a = 0x11223344;
//	int* pa = &a;
//	char* pc = &a;
//	printf("%p\n", pa);
//	printf("%p\n", pc);
//
//	return 0;
//}

//int main()
//{
//	int a = 0x11223344;
//	int* pa = &a;
//	*pa = 0;
//
//	return 0;
//}

//int main()
//{
//	int a = 0x11223344;
//	char* pa = &a;
//	*pa = 0;
//
//	return 0;
//}

//int main()
//{
//	int a = 0x11223344;
//	int* pa = &a;
//	char* pc = &a;
//	printf("%p\n", pa);
//	printf("%p\n", pa+1);
//	printf("%p\n", pc);
//	printf("%p\n", pc+1);
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 0 };
//	int* p = arr;   //数组名：首元素地址
//	//char* p = arr;
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		*(p+i) = 1;
//	}
//	return 0;
//}

//int main()
//{
//	//int a;  //局部变量不初始化，默认为随机值
//	int* p;   //局部的指针变量，就被初始化随机值
//	*p = 20;
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 0 };
//	int* p = arr;
//	int i = 0;
//	for (i = 0; i < 12; i++)
//	{
//		*(p++) = i;
//	}
//	return 0;
//}


//int* test()
//{
//	int a = 10;
//	return &a;
//}
//
//int main()
//{
//	int* p = test();
//	*p = 20;
//	return 0;
//}

//int main()
//{
//	int* p;
//	*p = 20;
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	int* p = NULL;
//	p = &a;
//	if (p != NULL)
//	{
//		*p = 20;
//	}
//	printf("%d\n", a);
//	printf("%p\n", p);
//	printf("%d\n", p);
//	printf("%d\n", *p);
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int* p = arr;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", *(p++));
//	}
//	return 0;
//}

//#define N_VALUES 5
//int main()
//{
//	float values[N_VALUES];
//	float* vp;
//	for (vp = &values[0]; vp < &values[N_VALUES];)
//	{
//		*vp++ = 0;
//	}
//	return 0;
//}

//
//int main()
//{
//	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	printf("%d\n", &arr[9] - &arr[0]);
//	return 0;


//int my_strlen(char* str)
//{
//	char* start = str;
//	char* end = str;
//	while (*end != '\0')
//	{
//		end++;
//	}
//	return end - start;
//}
//
//int main()
//{
//	char arr[] = "bit";
//	int len = my_strlen(arr);
//	printf("%d\n", len);
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	printf("%p\n", arr);
//	printf("%p\n", arr+1);
//
//	printf("%p\n", &arr[0]);
//	printf("%p\n", &arr[0]+1);
//
//	printf("%p\n", &arr);
//	printf("%p\n", &arr+1);
//	return 0;
//}

//int main()
//{
//	int i;
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int* p = arr;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = 0; i < sz; i++)
//	{
//		printf("&arr[%d] = %p <===> p+%d = %p\n", i, &arr[i], i, p + i);
//	}
//	return 0;
//}

//int main()
//{
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int* p = arr;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", *(p + i));
//	}
//	return 0;
//}

//int main()
//{
//	int a = 9;
//	int* pa = &a;
//	int** ppa = &pa;
//	//int*** pppa = &ppa;
//	printf("%p\n", &a);
//	printf("%p\n", pa);
//	printf("%p\n", &pa);
//	printf("%p\n", ppa);
//	printf("%p\n", &ppa);
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	int b = 20;
//	int c = 30;
//	int* arr[3] = { &a, &b, &c };
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		*arr[i] = i;
//		printf("%d\n",*arr[i]);
//	}
//	return 0;
//}

//int main()
//{
//	char arr1[] = "abcdefg";
//	char arr2[] = { 'a', 'b', 'c', 'd', 'e', 'f', 'g' };
//	printf("%s\n", arr1);
//	printf("%s\n", arr2);
//}


//描述一个学生：一些数据
//名字
//年龄
//电话
//性别

//struct 结构体关键字 Stu-结构体标签 struct Stu-结构体类型
//struct Stu
//{
//	//成员变量
//	char name[20];
//	short age;
//	char tele[12];
//	char sex[5];
//}s1,s2,s3;  //s1,s2,s3是三个全局的结构体变量

//typedef struct Stu
//{
//	//成员变量
//	char name[20];
//	short age;
//	char tele[12];
//	char sex[5];
//}Stu;  //Stu是类型
//
//int main()
//{
//	Stu s1 = { "蔡浩然1", 20, "15642876967", "男" }; //局部变量
//	struct Stu s2 = { "蔡浩然2", 21, "15642876968", "保密" };
//	return 0;
//}

//struct S
//{
//	int a;
//	char c;
//	char arr[20];
//	double d;
//};
//
//struct T
//{
//	char ch[10];
//	struct S s;
//	char* pc;
//};
//
//int main()
//{
//	char arr[] = "hello haoran\n";
//	struct T t = { "hehe", { 100, 'w', "hello world", 3.14 }, arr };
//	printf("%s\n", t.ch);	 //hehe
//	printf("%s\n", t.s.arr); //hello world
//	printf("%lf\n", t.s.d); //3.14
//	printf("%s\n", t.pc);   //hello haoran
//	return 0;
//}

//typedef struct Stu
//{
//	//成员变量
//	char name[20];
//	short age;
//	char tele[12];
//	char sex[5];
//}Stu;  //Stu是类型
//
//void Print1(Stu tmp)
//{
//	printf("name:%s\n", tmp.name);
//	printf("age: %d\n", tmp.age);
//	printf("tele:%s\n", tmp.tele);
//	printf("sex: %s\n", tmp.sex);
//}
//
//Print2(Stu* ps)
//{
//	printf("name:%s\n", ps->name);
//	printf("age: %d\n", ps->age);
//	printf("tele:%s\n", ps->tele);
//	printf("sex: %s\n", ps->sex);
//}
//int main()
//{
//	Stu S = { "李四",40,"18888888888","男" };
//	Print1(S);
//	Print2(&S);
//	return 0;
//}

