#include "libft.h"
#include "stdio.h"


char    mapi(unsigned int i, char c)
{
        static int indexArray[11] = {0};

        if (i > 10 || indexArray[i] == 1)
                write(1, "wrong index\n", 12);
        else
                indexArray[i] = 1;
        if (c >= 'a' && c <= 'z')
                return (c - 32);
        else if (c >= 'A' && c <= 'Z')
                return (c + 32);
        else
                return (c);
}
char mmpi(unsigned int i, char c)
{
    if (c >= 'a' && c <= 'z' )
        return ('X');
    else 
        return c;
}

void	ft_bzero2(unsigned int n,char *s)
{
	size_t	i;

	i = 0;
	while (i <= n)
	{
		((char *)s)[i] = 0;
		i++;
	}
}

void del(void *content)
{
    free(content);
}

void    ft_modify_list_with_d(void *elem)
{
        int             len;
        char            *content;

        len = 0;
        content = (char *)elem;
        while (content[len])
        {
                content[len++] = 'd';
        }
}


int main()
{ 
   /* t_list * head;
    head = ft_lstnew("abcde");
    printf("%s \n",(char *)head->content);*/
   //printf("%s\n", ft_strtrim("xaabcdax","xa"));
   /* char s[] = "tripouille";
	char s2[] = "ltripouiel";
    printf("this is : %s",ft_strrchr(s, 't' + 256));
    char s3[] = "1Vxbcde";
    
    printf("%s \n",ft_strmapi(s3,&mmpi));
    //ft_striteri(s3,&ft_bzero2);
    ft_bzero(s3,3);
    printf("%s",s3+3);*/
    
    t_list *first,*second ,*third;
    first = ft_lstnew("111");
    second = ft_lstnew("222");
    third = ft_lstnew("333");
    
    ft_lstadd_back(&first,second);
    ft_lstadd_back(&first,third);
    printf("%s \n",first->content);
    ft_lstdelone(third,&del);
    //ft_lstiter(third,&ft_modify_list_with_d);

    printf("%d \n",ft_lstsize(first));
    printf("%s",first->content);

}