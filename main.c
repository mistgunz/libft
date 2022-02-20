#include "libft.h"
#include "stdio.h"

int main()
{ 
   /* t_list * head;
    head = ft_lstnew("abcde");
    printf("%s \n",(char *)head->content);*/
   //printf("%s\n", ft_strtrim("xaabcdax","xa"));
    char s[] = "tripouille";
	char s2[] = "ltripouiel";
    printf("this is : %s",ft_strrchr(s, 't' + 256));
}