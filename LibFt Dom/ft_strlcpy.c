/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: domarion <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/21 11:54:19 by domarion          #+#    #+#             */
/*   Updated: 2022/12/21 11:54:29 by domarion         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include "libft.h"

// size_t ft_strlcpy(char * dst, const char * src, size_t maxlen) 
// {
//     const size_t srclen = ft_strlen(src);
//     if (srclen + 1 < maxlen) {
//         ft_memcpy(dst, src, srclen + 1);
//     } else if (maxlen != 0) {
//         ft_memcpy(dst, src, maxlen - 1);
//         dst[maxlen-1] = '\0';
//     }
//     return srclen;
// }

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	len;

	len = ft_strlen(src);
	if (len + 1 < size)
	{
		ft_memcpy(dst, src, len + 1);
	}
	else if (size != 0)
	{
		ft_memcpy(dst, src, size - 1);
		dst[size - 1] = '\0';
	}
	return (len);
}
