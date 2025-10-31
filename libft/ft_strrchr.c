/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pola <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/31 10:28:44 by pola              #+#    #+#             */
/*   Updated: 2025/10/31 16:54:04 by wabin-wa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		len;
	char	*s2;

	s2 = (char *)s;
	len = ft_strlen(s);
	while (len >= 0)
	{
		if (s2[len] == (unsigned char) c)
			return (&s2[len]);
		len--;
	}
	return (0);
}
