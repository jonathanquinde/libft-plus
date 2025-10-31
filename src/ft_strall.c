/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strall.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jquinde- <jquinde-@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/31 18:57:49 by jquinde-          #+#    #+#             */
/*   Updated: 2025/10/31 19:25:49 by jquinde-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

bool	ft_strall(char *str, bool (*pred)(int))
{
	while (*str)
	{
		if (pred((unsigned char)*str) == false)
			return (false);
		str++;
	}
	return (true);
}
