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

//������֣��������ĸ
//��������ASCII��

int main()
{
	int i = 1;					//��ʼ��
	while (i <= 10)				//�жϲ���
	{
		printf("%d", i);
		i++;					//��������
	}
	return 0;
}