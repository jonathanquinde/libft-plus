/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcontains_str.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jquinde- <jquinde-@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/29 15:31:03 by jquinde-          #+#    #+#             */
/*   Updated: 2025/10/29 15:32:40 by jquinde-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strcontains_str(char *str, char *set)
{
	char	*i;

	while (*str)
	{
		i = set;
		while (*i)
		{
			if (*str == *i)
				return (1);
			i++;
		}
		str++;
	}
	return (0);
}
