/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vabatist <vabatist@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 16:15:29 by vabatist          #+#    #+#             */
/*   Updated: 2024/11/09 13:20:15 by vabatist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
strlcpy copia 'size' bytes - 1 de src, para o dest e retorna o tamanho de src
*/
size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	src_len;

	i = 0;
	src_len = 0;
	while (src[src_len] != '\0')
	{
		src_len++;
	}
	if (size > 0)
	{
		while (i < size - 1 && src[i] != '\0')
		{
			dest[i] = src[i];
			i++;
		}
		dest[i] = '\0';
	}
	return (src_len);
}
/* int	main(void)
{
	char dest[6] = "world";
    char src[6] = "hello ";

    printf("TESTING FT_STRLCPY \n\n");
    printf("source: %s\ndest: %s\n", src, dest);
    ft_strlcpy(dest, src, 6);
    //strlcpy(dest, src, 6);
    printf("depois do strlcpy dest: %s %ld\n\n", dest, ft_strlcpy(dest,src, 6));
    //printf("depois do strlcpy dest: %s %ld\n\n", dest, strlcpy(dest,src, 6));
} */