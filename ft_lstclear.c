#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*save;

	if (!(*lst))
		return ;
	save = (*lst)->next;
	del((*lst)->content);
	ft_lstclear(&save, del);
	free(*lst);
	(*lst) = NULL;
}
