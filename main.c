#include "libft.h"
#include "stdio.h"

int main()
{ 
    char s1[] = "abcdefwfuoqd123qdwq";
    char s2[] = "123";
  
    char *s3 = ft_strnstr(s1,s2,5);
    if (s3 == NULL)
        printf("wow0");
    //printf("%s\n",s3)
    printf("%d \n",s3);
}