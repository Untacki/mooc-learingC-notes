#include<stdio.h>
void sort(int *a, int left, int right)
{
    if(left >= right)/*如果左边索引大于或者等于右边的索引就代表已经整理完成一个组了*/
    {
        return ;
    }
    int i = left;
    int j = right;
    int key = a[left];

    while(i < j)                               /*控制在当组内寻找一遍*/
    {
        while(i < j && key <= a[j])
        /*而寻找结束的条件就是，1，找到一个小于或者大于key的数（大于或小于取决于你想升
        序还是降序）2，没有符合条件1的，并且i与j的大小没有反转*/
        {
            j--;/*向前寻找*/
        }
        a[i] = a[j];
        /*找到一个这样的数后就把它赋给前面的被拿走的i的值（如果第一次循环且key是
        a[left]，那么就是给key）*/
        while(i < j && key >= a[i])
        /*这是i在当组内向前寻找，同上，不过注意与key的大小关系停止循环和上面相反，
        因为排序思想是把数往两边扔，所以左右两边的数大小与key的关系相反*/
        {
            i++;
        }
        a[j] = a[i];
    }
    printf("\n没回归之前a[%d]=%d",i,a[i]);
    a[i] = key;/*当在当组内找完一遍以后就把中间数key回归*/
    printf("\n找完一组后序列为：");
    int t;
	for(t=0;t<right+1;t++)
	printf("%d ",a[t]);
	sort(a, left, i - 1);/*最后用同样的方式对分出来的左边的小组进行同上的做法*/
    sort(a, i + 1, right);/*用同样的方式对分出来的右边的小组进行同上的做法*/
                       /*当然最后可能会出现很多分左右，直到每一组的i = j 为止*/
}

int main(void)
{
	int a[9]={3,2,5,7,8,4,1,10,11};
	printf("原数组:");
	int length=sizeof(a)/sizeof(a[0]);
	int i;
	for(i=0;i<length;i++)
	printf("%d ",a[i]);
	sort(a,0,length-1);
	printf("\n排序后的序列为:");
	for(i=0;i<length;i++)
	printf("%d ",a[i]);
	return 0;
}
