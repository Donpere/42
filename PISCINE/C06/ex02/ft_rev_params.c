/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: domarion <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 08:34:42 by domarion          #+#    #+#             */
/*   Updated: 2022/10/06 08:34:47 by domarion         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		ft_putchar(str[i]);
	i++;
	}
}

// int	main(int argc, char **argv)
// {
// 	int	i;

// 	i = argc - 1;
// 	while (i > 0)
// 	{
// 		ft_putstr(argv[i]);
// 		ft_putchar('\n');
// 		i--;
// 	}
// 	return (0);
// }
