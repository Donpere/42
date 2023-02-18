/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: domarion <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/06 15:45:33 by domarion          #+#    #+#             */
/*   Updated: 2023/01/06 15:45:40 by domarion         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*dst;
	size_t	t;

	if (nmemb == 0 || size == 0)
		return (malloc(0));
	t = nmemb * size;
	if (nmemb != t / size)
		return (NULL);
	dst = malloc(t);
	if (!dst)
		return (NULL);
	ft_bzero(dst, t);
	return (dst);
}
