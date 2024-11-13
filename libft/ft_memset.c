/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vabatist <vabatist@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 14:27:50 by vabatist          #+#    #+#             */
/*   Updated: 2024/11/13 09:05:13 by vabatist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*
	strlcpy: string.h
	strlcpy copies 'size' bytes - 1 from src, to dest and returns the size of src
*/
void	*ft_memset(void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*str;

	i = 0;
	str = (unsigned char *)s;
	while (i < n)
	{
		str[i] = (unsigned char)c;
		i++;
	}
	return (s);
}
/* int main() 
{
	char string[] = "Hello, World"; // Buffer inicial com a string "Hello, World"
	
	printf("Antes de ft_memset: %s\n", string);
	
	// Usando ft_memset para preencher os primeiros 6 bytes com 'x'
	//ft_memset(string, 'x', 6);
	memset(string, 'x', 6);
	printf("Depois de ft_memset: %s\n", string);  // Saída esperada: xxxxxx World
	
	return 0;
} */