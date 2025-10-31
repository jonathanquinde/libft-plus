/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcontainsonly_str.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jquinde- <jquinde-@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/31 19:39:31 by jquinde-          #+#    #+#             */
/*   Updated: 2025/10/31 19:45:49 by jquinde-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strcontainsonly_str(char *str, char *set)
{
	while (*str)
	{
		while (*set)
		{
			if (*str != *set)
				return (0);
			else if (*str == *set)
				break ;
			set++;
		}
		str++;
	}
	return (1);
}
