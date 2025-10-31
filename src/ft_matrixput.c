/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_matrixput.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jquinde- <jquinde-@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/30 01:12:17 by jquinde-          #+#    #+#             */
/*   Updated: 2025/10/30 01:22:48 by jquinde-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_matrixput(t_matrx matrix, size_t i, size_t j, char ch)
{
	matrix.data[i][j] = ch;
}
