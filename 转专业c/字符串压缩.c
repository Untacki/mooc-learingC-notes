#include<stdio.h>
#include<string.h> 
void string_compress( char s[] )

    {

        int i, j;

        int count;

        int len = strlen( s );

        if( s == NULL )

            return;

        for( i = 0, j = 0; i < len; i++ )        /*j用于标记存储位置*/

        {

            count = 1;        /*在遍历过程中统计每个字符连续出现的位置*/

            while( s[i] = s[i + 1] )

                {

                     i++;

                     count++;

                }

             if( count > 1 )

             {

                 s[j] = count + '0';        /*将整型数据count转换为字符*/

                 j++;        /*位置j存数字，j + 1存字符*/

                 s[j] = s[i];

             }

             else

                 s[j] = s[i];

              j++;

        }

        s[j] = '\0';        /*字符串末尾加结束符*/

    }

int main()
{
	char s[1000];
	gets(s);
	string_compress(s);
    puts(s);	
	return 0;
}
