/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vabatist <vabatist@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 09:13:56 by vabatist          #+#    #+#             */
/*   Updated: 2024/11/06 15:57:36 by vabatist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t len)
{
	size_t	i;

	i = 0;
	while (i < len)
	{
		((char *)s)[i] = '\0';
		i++;
	}
}
/* 
int	main(void)
{
	char string[] = "Hello, World";
	printf("Antes de ft_bzero: %s\n", string);
	// Usando ft_bzero para zerar os primeiros 6 bytes com 'x'
	ft_bzero(string, 6);
	//bzero(string, 6);
	printf("Depois de ft_bzero: %s\n", string + 6); Saída esperada: xxxxxx, World
	return (0);
}  */