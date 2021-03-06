/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdanyell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/22 15:41:48 by rdanyell          #+#    #+#             */
/*   Updated: 2021/10/22 15:59:36 by rdanyell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;

	i = 0;
	if (size > 0)
	{
		size -= 1;
		while (src[i] && (i < size))
		{
			dst[i] = src[i];
			i++;
		}
		dst[i] = '\0';
	}	
	return (ft_strlen((char *) src));
}
