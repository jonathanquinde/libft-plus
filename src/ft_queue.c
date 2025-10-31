/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   queue.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jquinde- < jquinde-@student.42madrid.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/22 17:40:33 by jquinde-          #+#    #+#             */
/*   Updated: 2025/02/22 17:40:33 by jquinde-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_queue	*ft_queuenew (void)
{
	t_queue	*queue;

	queue = malloc(sizeof(t_queue));
	queue->head = NULL;
	queue->tail = NULL;
	return (queue);
}

bool	ft_queueisempty (t_queue *queue)
{
	return (queue->head == NULL);
}

void	ft_queueput (t_queue *queue, void *x)
{
	t_list  *new_node;

	new_node = ft_lstnew(x);
	if (new_node == NULL)
		return ;
	if (queue->head == NULL)
	{
		queue->head = new_node;
		queue->tail = new_node;
	}
	else
	{
		queue->tail->next = new_node;
		queue->tail = queue->tail->next;
	}
}

void	*ft_queueget (t_queue *queue)
{
	t_list	*node;
	void	*element;	

	node = queue->head;
	element = node->content;
	queue->head = node->next;
	free(node);
	return (element);
}

void ft_queueclean (t_queue *queue)
{
	ft_lstclear(&queue->head, free);
	queue->tail = NULL;
	free (queue);
}
