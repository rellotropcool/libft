#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	cpt;

	cpt = 0;
	i = 0;
	if (!big[0] && !little[0])
		return ((char *)big);
	while (big[i] && i < len)
	{
		if (big[i] == little[0])
		{
			while (big[i + cpt] == little[cpt] && little[cpt] && i + cpt < len)
				cpt++;
			if (!little[cpt])
				return ((char *)big + i);
		}
		i++;
	}
	return (NULL);
}
