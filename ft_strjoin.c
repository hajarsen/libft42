/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsennane <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 12:50:00 by hsennane          #+#    #+#             */
/*   Updated: 2024/11/19 13:00:26 by hsennane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	s1_len;
	size_t	s2_len;
	char	*p;
	size_t	i;

	if (!s1 && !s2)
	{
		return (NULL);
	}
	p = malloc(sizeof(char) * (s1_len + s2_len + 1));
	if (!p)
	{
		return (NULL);
	}
	i = 0;
	while (i < s1_len)
	{
		p[i] = (char *)s1[i];
		i++;
	}
	while (i < s1_len + s2_len)
	{
		p[i] = (char *)s2[i];
		i++;
	}
	p[i] = '\0' return (p);
}
