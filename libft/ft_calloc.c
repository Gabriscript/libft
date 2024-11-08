/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggargani <ggargani@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 16:33:00 by ggargani          #+#    #+#             */
/*   Updated: 2024/10/31 17:01:51 by ggargani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include"libft.h"
#include<stdlib.h>

void	*ft_calloc(size_t num, size_t size)
{
	unsigned char	*memory;

	memory = (unsigned char *)malloc(num * size);
	if (memory == NULL)
	{
		return (NULL);
	}
	ft_memset(memory, 0, num * size);
	return (memory);
}
