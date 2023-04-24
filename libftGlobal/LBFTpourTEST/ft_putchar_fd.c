/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: domarion <domarion@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/06 15:55:00 by domarion          #+#    #+#             */
/*   Updated: 2023/04/05 17:13:51 by domarion         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// write a single character to a specified file descriptor
// RETURN : none

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}
