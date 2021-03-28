




//##可以把两边的字符连起来，而且在宏里 也可以
//int main()
//{
//	//##的用法
//	abc##int==abcint;
//	//像上面这种用法就是##的用法
//
//}


//特殊符号#的用法，能把参数固定成想要看的
//#define DAA(x) printf("hhhhh hhhhhh" #x " hhhhh %d\n",x)//字符串会被自然连接成一个字符串
//#include<stdio.h>
//int main()
//{
//	int a = 10;
//	int b = 10;
//	DAA(a);
//	DAA(b);
//	return 0;
//}
//  



//可怕的文件操作
//#include<stdio.h>
//int main()
//{
//	FILE* pf=fopen("新的代码练习记录", "r");//这个叫相对路径的打开
//	FILE* pf=fopen("F:\\c语言4\\新的代码练习记录", "r");//这个叫绝对路径的打开
//	FILE* pf = fopen("../新的代码练习记录", "r");//..\表示打开上一级路径
//	//打开成功会返回一个指针，失败会返回一个空指针
//	if (pf == NULL)
//	{
//		printf("失败");
//		return 0;
//	}
//	fclose(pf);//关闭文件
//	pf = NULL;
//}



//动态内存函数的使用
//#include<stdio.h>
//#include<stdlib.h>
//struct S
//{
//	int x;
//	int arr[];
//};
//int main()
//{
//	struct S* ps = (struct S*)malloc(sizeof(struct S) + 5 * sizeof(int));
//	struct S* ret=realloc(ps->arr, 50);
//	free(ret);
//	ret = NULL;
//	return 0;
//}

//这个代码没错，但为什么没错好好想想
//#include<stdio.h>
//#include<stdlib.h>
//int* test()
//{
//	int* ret;
//	ret = (int*)malloc(40);//这里形参出去销毁了，但空间没销毁
//	return ret;//返回了这个空间可以用
//}
//int main()
//{
//	int* p = test();
//	free(p);//所以空间还可以用
//}

//一个关于内存泄露的笔试题，以被改会正确的代码了
//#include<stdio.h>
//#include<stdlib.h>
//char* Bdd(char* arr)
//{
//	arr = (char*)malloc(40);
//	return arr;
//}
//void Add(void)
//{
//	char* arr = NULL;
//	arr=Bdd(arr);
//	strcpy(arr, "abcdef");
//	printf(arr);
//	free(arr);
//	arr = NULL;
//}
//int main()
//{
//	Add();
//	return 0;
//}


//calloc和realloc函数的用法
//#include<stdio.h>
//#include<stdlib.h>
//int main()
//{
//	int* p = (int*)calloc(10, sizeof(int));
//	//这个callloc函数用法为，开辟10个int类型的空间，开的40个字节，
//	//重点来了，会把这些空间都赋值为0；
//	if (p != NULL)
//	{
//		for (int x = 0;x < 10;x++)
//		{
//			printf("%d ", *(p + x));
//		}
//	}
//	p=realloc(p, 50);//realloc这个函数好好研究
//	free(p);//记住动态内存空间一定要释放
//}


//这里是动态内存函数malloc和释放空间函数free
//#include<stdio.h>
//#include<stdlib.h>
//int main()
//{
//	int x = 0;
//	int* p = (int*)malloc(10 * sizeof(int));//开辟空间返回地址，用指针接收
//	if (p != NULL)
//	{
//		for (x = 0;x < 10;x++)
//		{
//			*(p + x) = x;//这里是给空间赋值，40个字节，所以是循环10次
//		}
//		for (x = 0;x < 10;x++)
//		{
//			printf("%d", *(p + x));//打印出来看看，是否成功
//		}
//	}
//	free(p);//释放所指的动态空间
//	p =NULL;
//}