/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wabin-wa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/30 20:20:14 by wabin-wa          #+#    #+#             */
/*   Updated: 2025/10/31 01:07:53 by pola             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	*s2;

	s2 = (char *)s;
	while (*s2 != (unsigned char)c && *s2)
		s2++;
	if (*s2 == (unsigned char)c)
		return (s2);
	else
		return (0);
}
