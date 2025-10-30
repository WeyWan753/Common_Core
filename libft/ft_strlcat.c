/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wabin-wa <wabin-wa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/30 13:14:09 by wabin-wa          #+#    #+#             */
/*   Updated: 2025/10/30 20:01:11 by wabin-wa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	a;
	size_t	b;
	size_t	i;
	size_t	j;

	if (size <= (size_t)ft_strlen(dst))
		return (size + ft_strlen(src));
	a = ft_strlen(dst);
	b = ft_strlen(src);
	i = 0;
	while (dst[i])
		i++;
	j = 0;
	while (src[j] && i + j < size - 1)
	{
		dst[i + j] = src[j];
		j++;
	}
	dst[i + j] = 0;
	return (a + b);
}
