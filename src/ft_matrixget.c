/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_matrixget.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jquinde- <jquinde-@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/30 01:08:01 by jquinde-          #+#    #+#             */
/*   Updated: 2025/10/30 01:11:50 by jquinde-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	ft_matrixget(t_matrx matrix, size_t i, size_t j)
{
	return matrix.data[i][j];
}
