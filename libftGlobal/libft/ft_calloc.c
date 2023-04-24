/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: domarion <domarion@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/06 15:45:33 by domarion          #+#    #+#             */
/*   Updated: 2023/04/05 17:18:30 by domarion         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

// allocates memory for an array of nmemb elements of size bytes each and 
// returns a pointer to the allocated memory
// need ft_bzero
// no need to free, malloc(0), cause it contains NULL
// RETURN : a pointer to the allocated memory that is suitably aligned 
// for any kind of variable. 
// On error, these functions return NULL. 
// NULL may also be returned by a successful call to malloc() 
// with a size of zero, or by a successful call to calloc() 
// with nmemb or size equal to zero.

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

// int main()
// {
//     int *ptr;
//     int size = 5;
//     int i = 0;
// // Allocate memory for 5 integers using ft_calloc
//     ptr = (int*)ft_calloc(size, sizeof(int));
//     if (ptr == NULL) {
//         printf("Memory allocation failed\n");
//         return 1;
//     }
// // Assign values to the allocated memory
//     while (i < size) 
// 	{
//         ptr[i] = i + 1;
//         i++;
//     }
// // Print the values in the allocated memory
//     i = 0;
//     while (i < size) 
// 	{
//         printf("%d ", ptr[i]);
//         i++;
//     }
//     printf("\n");
// // Free the allocated memory
//     free(ptr);

//     return 0;
// }