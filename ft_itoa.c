/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkaraden <42istanbul.com.tr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/07 12:52:52 by bkaraden          #+#    #+#             */
/*   Updated: 2022/01/21 14:35:54 by bkaraden         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

static char	*sonadim(char *p, long nbr, int length)
{
	while (nbr > 0)
	{
		p[length--] = (nbr % 10) + '0';
		nbr = nbr / 10;
	}
	return (p);
}

static int	lencal(long n)
{
	int	result;

	result = 0;
	if (n < 0)
	{
		n = n * -1;
		result++;
	}
	if (n == 0)
		return (result + 1);
	while (n > 0)
	{
		n = n / 10;
		result++;
	}
	return (result);
}

char	*ft_itoa(int n)
{
	int		len;
	char	*ptr;
	long	nbr;

	nbr = n;
	len = lencal(nbr);
	ptr = (char *)malloc(sizeof(*ptr) * (len + 1));
	if (!ptr)
		return (NULL);
	ptr[len--] = '\0';
	if (nbr == 0)
	{
		ptr[0] = '0';
		return (ptr);
	}
	if (nbr < 0)
	{
		ptr[0] = '-';
		nbr = nbr * -1;
	}
	if (nbr > 0)
		ptr = sonadim(ptr, nbr, len);
	return (ptr);
}
