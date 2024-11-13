/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vabatist <vabatist@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/09 10:27:06 by vabatist          #+#    #+#             */
/*   Updated: 2024/11/09 11:29:00 by vabatist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
strchr: string.h
strchr is used to locate the first occurrence of a character in a string.
Returns a pointer to that first occurrence of the character in the string.
Therefore, it effectively returns one character and all characters 
following it in the string.
*/
char	*ft_strchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i] != (unsigned char)c && s[i] != '\0')
		i++;
	if (s[i] == (unsigned char)c)
		return ((char *)&s[i]);
	else
		return (NULL);
}
/* 
int	main(void)
{
	const char	s[] = "hello, world!";

	printf("my_ft: %s\n", ft_strchr(s, 'o'));
	printf("original: %s\n", strchr(s, 'o'));
	return (0);
} */
