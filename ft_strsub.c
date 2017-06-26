/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skgatle <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/31 19:58:33 by skgatle           #+#    #+#             */
/*   Updated: 2017/06/11 09:15:59 by skgatle          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char	*sub;
	char	*p_s;
	size_t	cnt;

	if (!s)
		return (NULL);
	cnt = 0;
	sub = (char *)malloc(sizeof(char) * (len + 1));
	if (sub == NULL)
		return (NULL);
	p_s = (char *)s;
	while (*p_s++)
		cnt++;
	p_s = p_s - (cnt + 1);
	if ((len + start) <= cnt)
	{
		cnt = len;
		p_s = p_s + start;
		while (*p_s && len-- > 0)
			*sub++ = *p_s++;
		*sub = '\0';
		return (sub -= cnt);
	}
	else
		return (NULL);
}
