#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*ptr;

	if (size && nmemb && ((nmemb * size)/size) != nmemb)
		return (NULL);
	ptr = malloc(size * nmemb);
	if (!ptr)
		return (NULL);
	if (size && nmemb)
		ft_bzero(ptr, nmemb * size);
	return (ptr);
}
