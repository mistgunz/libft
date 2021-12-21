#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list *t;
	t_list *tmp;

	t = *lst;
	while (t)
	{
		tmp = t->next;
		ft_lstdelone(t, del);
		t = tmp;
	}
	*lst = NULL;
}
