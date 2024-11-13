/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vabatist <vabatist@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 17:52:20 by vabatist          #+#    #+#             */
/*   Updated: 2024/11/06 18:03:25 by vabatist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
	A funcao tolower faz parte da biblioteca <ctype.h>
	Converte um caractere em minúsculo, se ele for maiúsculo.
	Se c não for uma letra maiúscula, retorna c sem alteração.
*/
int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (c + 32);
	return (c);
}
/* int	main(void)
{
	printf("%c\n", ft_tolower('V'));
	printf("%c\n", tolower('V'));
	return (0);
} */
