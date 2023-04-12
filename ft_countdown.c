/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_countdown.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: domarion <domarion@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/10 09:10:15 by domarion          #+#    #+#             */
/*   Updated: 2023/04/10 09:45:41 by domarion         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_countdown(void)
{
	char	nb;

	nb = 57;
	while (nb >= 48)
	{
		write (1, &nb, 1);
		nb--;
	}
	write (1, "\n", 1);
}

int	main(void)
{
	ft_countdown();
	return (0);
}
