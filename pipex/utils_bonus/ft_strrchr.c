/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdanyell <rdanyell@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/22 16:49:30 by rdanyell          #+#    #+#             */
/*   Updated: 2022/03/17 13:44:08 by rdanyell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pipex_bonus.h"

char	*ft_strrchr(const char *str, int c)
{
	int	i;
	int	j;

	j = 0;
	if (c == '\0')
	{
		while (str[j] != '\0')
			j++;
		return ((char *)&str[j]);
	}
	if (*str == '\0')
		return (NULL);
	i = ft_strlen((char *)str);
	while (i >= 0)
	{
		if (str[i] == (char)c)
			return ((char *)&str[i]);
		i--;
	}
	return (NULL);
}
