#include<stdio.h>
#include<string.h>
int main()
{
    char s[101],t[101];
	scanf("%s",s);
    scanf("%s",t);

	if(strcmp(strrev(s),t)==0)
	printf("YES");
	else
	printf("NO");
}
