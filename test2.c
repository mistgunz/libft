#include <stdio.h>
int ft_strlen(char * str)
{
    int i = 0;

    while (str[i]!='\0')
        i++;
    return(i);
}

char	*ft_strcat(char *dest, char *src)
{
	int s ;
	char *dst;

	dst = dest;
    s = ft_strlen(dst);
	dst += s;
	while(*src)
		*dst++ = *src++;
	*dst = '\0';
	return(dest);
}


int main()
{
    char s1[] = "abhhc";
    char s2[] = "dvvef" ;
   // printf("%d",ft_strlen(s1));
    printf("%s",ft_strcat(s1,s2));
}