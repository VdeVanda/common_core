/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vabatist <vabatist@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 16:01:53 by vabatist          #+#    #+#             */
/*   Updated: 2024/11/09 10:08:20 by vabatist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}
/* 
int	main(void)
{
	printf("String: \"%s\"\n", "A minha string");
    printf("my ft_strlen: %lu\n", ft_strlen("A minha string"));
    printf("original strlen: %lu\n\n", strlen("A minha string"));
} */