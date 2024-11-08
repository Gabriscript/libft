/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggargani <ggargani@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/01 10:27:34 by ggargani          #+#    #+#             */
/*   Updated: 2024/11/01 10:51:56 by ggargani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include"libft.h"
#include<stdlib.h>

static char	*null_ret(char *s);

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char		*subs;
	size_t		size;

	if (!s)
		return (NULL);
	size = ft_strlen(s);
	if (start >= size)
	{
		subs = malloc(sizeof(char));
		null_ret(subs);
		subs[0] = '\0';
	}
	if (start + len > size)
		len = size - start;
	subs = malloc((len + 1) * sizeof(char));
	null_ret(subs);
	size = 0;
	while (size < len && s[start + size])
	{
		subs[size] = s[start + size];
		size++;
	}
	subs[size] = '\0';
	return (subs);
}

static char	*null_ret(char *s)
{
	if (!s)
		return (NULL);
	return (s);
}
