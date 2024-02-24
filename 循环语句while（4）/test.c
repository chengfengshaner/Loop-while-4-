#include <stdio.h>

//int main()
//{
//	int ch = 0;
//	while ((ch = getchar()) != EOF)
//	{
//		if (ch < '0' || ch>'9')
//			continue;
//
//		putchar(ch);
//	}
//	return 0;
//}

//输出数字，不输出字母
//运行依靠ASCII码

int main()
{
	int i = 1;					//初始化
	while (i <= 10)				//判断部分
	{
		printf("%d", i);
		i++;					//调整部分
	}
	return 0;
}