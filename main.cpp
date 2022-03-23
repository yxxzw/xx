#include<stdio.h>
#include<string.h>
int main()
{
	printf("请输入一段英文:\n");
	char s[1000];
    gets(s);
	printf("请输入一个单词或字母:\n");
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
	printf("句子里单词的个数为：%d个\n",cnt);
	return 0;
}