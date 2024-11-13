/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vabatist <vabatist@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/09 11:19:39 by vabatist          #+#    #+#             */
/*   Updated: 2024/11/09 16:56:12 by vabatist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
strrchr: string.h
strrchr is used to locate the last occurrence of a character in a string.
Returns a pointer to that last occurrence of the character in the string.
Therefore, it effectively returns one character and all characters
following it in the string.
*/
char	*ft_strrchr(const char *s, int c)
{
	int	i;

	i = ft_strlen(s);
	while (s[i] != (unsigned char)c && i >= 0)
		i--;
	if (s[i] == (unsigned char)c)
		return ((char *)s + i);
	else
		return (NULL);
}

/* int	main(void)
{
	const char	s[] = "hello, world!";

	printf("my_ft: %s\n", ft_strrchr(s, 'o'));
	printf("original: %s\n", strrchr(s, 'o'));
	return (0);
} */