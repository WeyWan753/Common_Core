/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pola <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/28 00:57:55 by pola              #+#    #+#             */
/*   Updated: 2025/10/30 01:47:41 by pola             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int is_overlap(void *dest, const void *src, size_t n)
{
	size_t i = 0;
	const char *src_c =(const char *) src;
	while (i < n)
	{
		
		if(&src_c[i] == dest)
			return 1;
		i++;
	}
return 0;
}

void *ft_memmove(void *dest, const void *src, size_t n)
{
	if(is_overlap(dest,src,n))
	{
		char *dest_c = (char *)dest;
		const char *src_c = (const char *)src;
		size_t i = 0;
		if(!dest && !src)
			return 0;
		while (i < n)
		{
			dest_c[n-i-1] = src_c[n-i-1];
			i++;
		}

	}
	else
		ft_memcpy(dest,src,n);
	return dest;
}

