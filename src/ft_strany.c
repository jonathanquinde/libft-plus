/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strany.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jquinde- <jquinde-@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/31 19:26:15 by jquinde-          #+#    #+#             */
/*   Updated: 2025/10/31 19:27:43 by jquinde-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

bool	ft_strany(char *str, bool (*pred)(int))
{
	while (*str)
	{
		if (pred((unsigned char)*str))
			return (true);
		str++;
	}
	return (false);
}

