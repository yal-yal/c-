




//##���԰����ߵ��ַ��������������ں��� Ҳ����
//int main()
//{
//	//##���÷�
//	abc##int==abcint;
//	//�����������÷�����##���÷�
//
//}


//�������#���÷����ܰѲ����̶�����Ҫ����
//#define DAA(x) printf("hhhhh hhhhhh" #x " hhhhh %d\n",x)//�ַ����ᱻ��Ȼ���ӳ�һ���ַ���
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



//���µ��ļ�����
//#include<stdio.h>
//int main()
//{
//	FILE* pf=fopen("�µĴ�����ϰ��¼", "r");//��������·���Ĵ�
//	FILE* pf=fopen("F:\\c����4\\�µĴ�����ϰ��¼", "r");//����о���·���Ĵ�
//	FILE* pf = fopen("../�µĴ�����ϰ��¼", "r");//..\��ʾ����һ��·��
//	//�򿪳ɹ��᷵��һ��ָ�룬ʧ�ܻ᷵��һ����ָ��
//	if (pf == NULL)
//	{
//		printf("ʧ��");
//		return 0;
//	}
//	fclose(pf);//�ر��ļ�
//	pf = NULL;
//}



//��̬�ڴ溯����ʹ��
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

//�������û����Ϊʲôû��ú�����
//#include<stdio.h>
//#include<stdlib.h>
//int* test()
//{
//	int* ret;
//	ret = (int*)malloc(40);//�����βγ�ȥ�����ˣ����ռ�û����
//	return ret;//����������ռ������
//}
//int main()
//{
//	int* p = test();
//	free(p);//���Կռ仹������
//}

//һ�������ڴ�й¶�ı����⣬�Ա��Ļ���ȷ�Ĵ�����
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


//calloc��realloc�������÷�
//#include<stdio.h>
//#include<stdlib.h>
//int main()
//{
//	int* p = (int*)calloc(10, sizeof(int));
//	//���callloc�����÷�Ϊ������10��int���͵Ŀռ䣬����40���ֽڣ�
//	//�ص����ˣ������Щ�ռ䶼��ֵΪ0��
//	if (p != NULL)
//	{
//		for (int x = 0;x < 10;x++)
//		{
//			printf("%d ", *(p + x));
//		}
//	}
//	p=realloc(p, 50);//realloc��������ú��о�
//	free(p);//��ס��̬�ڴ�ռ�һ��Ҫ�ͷ�
//}


//�����Ƕ�̬�ڴ溯��malloc���ͷſռ亯��free
//#include<stdio.h>
//#include<stdlib.h>
//int main()
//{
//	int x = 0;
//	int* p = (int*)malloc(10 * sizeof(int));//���ٿռ䷵�ص�ַ����ָ�����
//	if (p != NULL)
//	{
//		for (x = 0;x < 10;x++)
//		{
//			*(p + x) = x;//�����Ǹ��ռ丳ֵ��40���ֽڣ�������ѭ��10��
//		}
//		for (x = 0;x < 10;x++)
//		{
//			printf("%d", *(p + x));//��ӡ�����������Ƿ�ɹ�
//		}
//	}
//	free(p);//�ͷ���ָ�Ķ�̬�ռ�
//	p =NULL;
//}