#include<stdio.h>
void sort(int *a, int left, int right)
{
    if(left >= right)/*�������������ڻ��ߵ����ұߵ������ʹ����Ѿ��������һ������*/
    {
        return ;
    }
    int i = left;
    int j = right;
    int key = a[left];

    while(i < j)                               /*�����ڵ�����Ѱ��һ��*/
    {
        while(i < j && key <= a[j])
        /*��Ѱ�ҽ������������ǣ�1���ҵ�һ��С�ڻ��ߴ���key���������ڻ�С��ȡ����������
        ���ǽ���2��û�з�������1�ģ�����i��j�Ĵ�Сû�з�ת*/
        {
            j--;/*��ǰѰ��*/
        }
        a[i] = a[j];
        /*�ҵ�һ������������Ͱ�������ǰ��ı����ߵ�i��ֵ�������һ��ѭ����key��
        a[left]����ô���Ǹ�key��*/
        while(i < j && key >= a[i])
        /*����i�ڵ�������ǰѰ�ң�ͬ�ϣ�����ע����key�Ĵ�С��ϵֹͣѭ���������෴��
        ��Ϊ����˼���ǰ����������ӣ������������ߵ�����С��key�Ĺ�ϵ�෴*/
        {
            i++;
        }
        a[j] = a[i];
    }
    printf("\nû�ع�֮ǰa[%d]=%d",i,a[i]);
    a[i] = key;/*���ڵ���������һ���Ժ�Ͱ��м���key�ع�*/
    printf("\n����һ�������Ϊ��");
    int t;
	for(t=0;t<right+1;t++)
	printf("%d ",a[t]);
	sort(a, left, i - 1);/*�����ͬ���ķ�ʽ�Էֳ�������ߵ�С�����ͬ�ϵ�����*/
    sort(a, i + 1, right);/*��ͬ���ķ�ʽ�Էֳ������ұߵ�С�����ͬ�ϵ�����*/
                       /*��Ȼ�����ܻ���ֺܶ�����ң�ֱ��ÿһ���i = j Ϊֹ*/
}

int main(void)
{
	int a[9]={3,2,5,7,8,4,1,10,11};
	printf("ԭ����:");
	int length=sizeof(a)/sizeof(a[0]);
	int i;
	for(i=0;i<length;i++)
	printf("%d ",a[i]);
	sort(a,0,length-1);
	printf("\n����������Ϊ:");
	for(i=0;i<length;i++)
	printf("%d ",a[i]);
	return 0;
}
