int	ft_atoi(const char *nptr)
{
	int	i;
	int	nbr;
	int	sign;

	sign = 1;
	nbr = 0;
	i = 0;
	while (nptr[i] == ' ' || (nptr[i] >= '\t' && nptr[i] <= '\r'))
		i++;
	if (nptr[i] == '+' || nptr[i] == '-')
	{
		if (nptr[i] == '-')
			sign *= -1;
		i++;
	}
	while (nptr[i] >= '0' && nptr[i] <= '9')
	{
		nbr *= 10;
		nbr += nptr[i] - '0';
		i++;
	}
	return (sign * nbr);
}
