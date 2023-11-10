#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*output;
	t_list	*save;
	
	output = NULL;
	while (lst)
	{
		save = ft_lstnew(f(lst->content));
		if (!save)
			return (ft_lstclear(&output, del), NULL);
		ft_lstadd_back(&output, save);
		lst = lst->next;
	}
	return (output);
}
