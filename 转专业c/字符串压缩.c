#include<stdio.h>
#include<string.h> 
void string_compress( char s[] )

    {

        int i, j;

        int count;

        int len = strlen( s );

        if( s == NULL )

            return;

        for( i = 0, j = 0; i < len; i++ )        /*j���ڱ�Ǵ洢λ��*/

        {

            count = 1;        /*�ڱ���������ͳ��ÿ���ַ��������ֵ�λ��*/

            while( s[i] = s[i + 1] )

                {

                     i++;

                     count++;

                }

             if( count > 1 )

             {

                 s[j] = count + '0';        /*����������countת��Ϊ�ַ�*/

                 j++;        /*λ��j�����֣�j + 1���ַ�*/

                 s[j] = s[i];

             }

             else

                 s[j] = s[i];

              j++;

        }

        s[j] = '\0';        /*�ַ���ĩβ�ӽ�����*/

    }

int main()
{
	char s[1000];
	gets(s);
	string_compress(s);
    puts(s);	
	return 0;
}
