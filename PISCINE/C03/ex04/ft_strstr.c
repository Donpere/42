/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: domarion <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 17:11:57 by domarion          #+#    #+#             */
/*   Updated: 2022/10/03 17:12:04 by domarion         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

// - on test to_find pour eleminer une chaine vide et renvoyer str direct 
// - sinon on fait avancer la sous chaine : i et ce qu on cherche avec j
// - on continue i tant qu on a pas 1 premier caractere commun
// - si on trouve des caractere commun on demarre j
// - j retombe a zero des qu on a une difference
char	*ft_strstr(char *str, char *to_find)
{
	int	i_str;
	int	j_tf;

i_str = 0;
j_tf = 0;
	if (to_find[j_tf] == '\0')
		return (str);
	while (str[i_str] != '\0')
	{
		while ((str[i_str + j_tf] == to_find[j_tf])
			&& str[i_str + j_tf] != '\0')
		{
			j_tf++;
		}
		if (to_find[j_tf] == '\0')
		{
			return (&str[i_str]);
		}
	i_str++;
	j_tf = 0;
	}
	return (0);
}

// int	main (void)
// {
// 	char	string[] = "bla bli blou";
// 	char	tofind[] = "bli";
// 	char	*result;
// 	printf("string = %s \n", string);
// 	printf("tofind = %s \n", tofind);

// 	result = strstr(string, tofind);
// 	result = ft_strstr(string, tofind);
// 	printf("Vraie Fct = %s \n", result);
// 	printf("42 Fct = %s", result);
// 	return (0);
// }