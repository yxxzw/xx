#include<stdio.h>
#include<string.h>
int main()
{
	printf("������һ��Ӣ��:\n");
	char s[1000];
    gets(s);
	printf("������һ�����ʻ���ĸ:\n");
	char w[10];
	gets(w);
	strlwr(s);
	strlwr(w);
	int wlen=strlen(w),slen=strlen(s),cnt=0;
	for(int i=0;i<=slen-wlen;i++)
	{
		char *tempw=new char[wlen+1];
		tempw[wlen]='\0';
		for(int j=0;j<wlen;j++) tempw[j]=s[i+j];
		if(strcmp(tempw,w)==0) cnt++;
	}
	printf("�����ﵥ�ʵĸ���Ϊ��%d��\n",cnt);
	return 0;
}