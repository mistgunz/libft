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
	int i,s ;
	
	s = ft_strlen(dest);
	i=0;
	while(src[i] != '\0')
	{
		dest[s+i]=src[i];
		i++;
	}
	dest[i+s] = '\0';
	return(dest);


}

int		strend(char* str,char c)
{
	int s;
	s = ft_strlen(str);
	if(str[s-1]== c)
		return 1;
	else
		return 0;
}


int main()
{
    /*char s1[] = "abhhc";
    char s2[] = "dvvef" ;
   // printf("%d",ft_strlen(s1));
    printf("%s",ft_strcat(s1,s2));*/
	char s3[] = "abc";
	printf("%d",strend(s3,'c'));

}