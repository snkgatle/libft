/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skgatle <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/29 14:01:29 by skgatle           #+#    #+#             */
/*   Updated: 2017/06/08 15:42:32 by skgatle          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*dup_s;
	size_t	cnt;
	size_t	len;

	len = 0;
	while (*s++)
		len++;
	s = s - (len + 1);
	cnt = 0;
	dup_s = (char *)malloc(sizeof(*s) * (len + 1));
	if (!dup_s)
		return (NULL);
	while (*s)
	{
		*dup_s++ = *s++;
		cnt++;
	}
	*dup_s = '\0';
	dup_s = dup_s - cnt;
	return (dup_s);
}
