/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdanyell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/22 11:51:25 by rdanyell          #+#    #+#             */
/*   Updated: 2021/10/22 12:00:15 by rdanyell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
int	ft_toupper(int c)
{
	if ((c >= 97) && (c <= 122))
		c = c - 32;
	return (c);
}
