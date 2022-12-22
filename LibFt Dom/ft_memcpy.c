/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: domarion <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/22 11:08:30 by domarion          #+#    #+#             */
/*   Updated: 2022/11/22 11:08:40 by domarion         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h> //lib pour avoiir malloc
#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	char	*search;
	char	*destination;
	size_t	i;

	i = 0;
	search = (char *)src;
	destination = (char *)dest;
	while (i < n)
	{
	destination[i] = search[i];
	i++;
	}
	return (destination);
}
