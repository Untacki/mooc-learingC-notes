#include<stdio.h>
#define RAD1(x) ((x)* 57.29578)
#define RAD2(x) ((x)* 57.29578)
int main(int argc,const char*argv[])
{
    printf("%f\n",RAD1(5+2));
    printf("%f\n",RAD2(5+2)); 
    printf("%f\n",180/RAD2(1));
	return 0;
}
//�������ĺ��ԭ��
//��һ�ж�Ҫ���� 
//������ֵ��Ҫ���� 
//���������ֵ�ÿ���ط���Ҫ����
//��#define RAD(x) ((x)*57) 

//�����Դ��������
#define MIN(a,b) ((a)>(b)?(b):(a)) 
//Ҳ������ϣ�Ƕ�ף�ʹ�������� 
 
