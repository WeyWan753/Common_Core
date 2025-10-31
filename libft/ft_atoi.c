/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wabin-wa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/31 19:55:05 by wabin-wa          #+#    #+#             */
/*   Updated: 2025/10/31 20:43:17 by wabin-wa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *nptr)
{
	int	result;
	int	sign;

	sign = 1;
	result = 0;
	while (*nptr == ' ' || *nptr == '\t' || *nptr == '\n'
		|| *nptr == '\r' || *nptr == '\v' || *nptr == '\f')
		nptr++;
	if ((*nptr != '-' && *nptr != '+' && (*nptr < '0' || *nptr > '9'))
		|| ((*(nptr + 1) < '0' || *(nptr + 1) > '9')
			&& (*nptr == '-' || *nptr == '+')))
		return (0);
	if (*nptr == '-')
		sign = -1;
	while (*nptr < '0' || *nptr > '9')
		nptr++;
	while (*nptr >= '0' && *nptr <= '9')
	{
		result = result * 10 + *nptr - '0';
		nptr++;
	}
	return (sign * result);
}
/*
#include <stdio.h>
int main()
{
	char *str = "9 58";
	printf("atoi(%s) = %d\n",str,atoi(str));
	printf("ft_atoi(%s) = %d\n",str,ft_atoi(str));

}

*/
