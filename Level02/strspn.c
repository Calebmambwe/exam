#include <unistd.h>
#include <stdio.h>

char *ft_strchr(const char *s, int c)
{
	while(*s != '\0')
	{
		if(*s == c)
			return((char *)s);
		++s;
	}
	return(0);
}

size_t	ft_strcspn(const char *s, const char *reject)
{
	int i;

	i = 0;
	while(s[i])
	{
		if(ft_strchr(reject,s[i]) == 0)
			break;
		i++;
	}
	return(i);
}

int main(void)
{
	char s[] = "this";
	char set[] = "lkjtlkhcjikis";
	printf("%zu",ft_strcspn(s,set));
	return(0);
}
