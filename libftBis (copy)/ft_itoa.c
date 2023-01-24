/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: domarion <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/06 15:49:19 by domarion          #+#    #+#             */
/*   Updated: 2023/01/06 15:49:31 by domarion         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_len_int(int nb)
{
	unsigned int	count;

	count = 0;
	if (nb <= 0)
		count++;
	while (nb != 0)
	{
		nb = nb / 10;
		count++;
	}
	return (count);
}

char	*ft_itoa(int n)
{
	unsigned int		len;
	char				*dst;
	char				neg;

	neg = '\0';
	if (n < 0)
		neg = '-';
	len = ft_len_int(n);
	dst = malloc(sizeof(char) * (len + 1));
	if (!dst)
		return (NULL);
	dst[len] = '\0';
	while (len != 0)
	{
		if (n < 0)
			dst[--len] = -(n % 10) + 48;
		else
			dst[--len] = (n % 10) + 48;
		n = n / 10;
	}
	if (neg)
		dst[len] = neg;
	return (dst);
}
/*
int	main(void)
{
	printf("%s", ft_itoa(-42));
	return (0);
}
*/
