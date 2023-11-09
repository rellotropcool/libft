#include "libft.h"

int	in_set(const char *set, char c)
{
	int	k;

	k = 0;
	while(set[k])
	{
		if (c == set[k])
			return(1);
		k++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int	i;
	int	j;
	char	*str;
	int	k;

	i = 0;
	j = ft_strlen(s1) - 1;
	while (in_set(set, s1[i]))
		i++;
	while (in_set(set, s1[j]))
		j--;
	if (i > j)
		str = malloc(sizeof(char));
	else
		str = malloc((j - i + 2) * sizeof(char));
	if (!str)
		return (NULL);
	k = 0;
	while (k + i <= j)
	{
		str[k] = s1[k + i];
		k++;
	}
	str[k] = 0;
	return (str);
}
