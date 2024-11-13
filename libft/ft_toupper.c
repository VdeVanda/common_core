/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vabatist <vabatist@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 16:35:53 by vabatist          #+#    #+#             */
/*   Updated: 2024/11/06 17:58:45 by vabatist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
	A funcao toupper faz parte da biblioteca <ctype.h>
	Converte um caractere em maiúsculo, se ele for minúscula.
	Se c não for uma letra minúscula, retorna c sem alteração.
*/
int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
		return (c - 32);
	return (c);
}
/* int	main(void)
{
	printf("%c\n", ft_toupper('v'));
	printf("%c\n", toupper('v'));
	return (0);
} */