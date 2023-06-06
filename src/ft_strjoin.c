/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vacsargs <vacsargs@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/25 15:45:46 by vacsargs          #+#    #+#             */
/*   Updated: 2023/06/04 17:02:42 by vacsargs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

char	*ft_strjoin(char *s1, char const *s2)
{
	char	*str;
	int		len;
	int		i;
	int		j;

	i = 0;
	j = 0;
	len = ft_strlen(s1) + ft_strlen(s2);
	str = (char *)malloc(sizeof(*str) * len + 1);
	if (!str)
		return (NULL);
	while (s1 && s1[i])
	{
		str[i] = s1[i];
		++i;
	}
	while (s2 && s2[j])
		str[i++] = s2[j++];
	str[i] = 0;
	if (s1)
		free(s1);
	return (str);
}

size_t	ft_strlen(const char *str)
{
	size_t	a;

	a = 0;
	while (str && str[a] != '\0')
	{
		a++;
	}
	return (a);
}

char	*ft_strdup(const char *s1)
{
	char	*str;
	size_t	len;

	len = ft_strlen(s1)+1;
	str = (char *)malloc(sizeof(char) * len);
	if (!str)
		return (0);
	ft_memcpy(str, s1, len);
	return (str);
}

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	char	*d;
	char	*c;

	d = (char *)dst;
	c = (char *)src;
	if (!dst && !src)
		return (0);
	if ((dst == src) || n == 0)
		return (dst);
	while (n--)
	d[n] = c[n];
	return (d);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*p;
	size_t	i;
	size_t	real_len;

	if (!s)
		return (NULL);
	real_len = ft_strlen(s);
	if ((size_t)start > real_len)
		return (ft_strdup(""));
	if (len > real_len)
		len = real_len;
	p = (char *)malloc(sizeof(char) * (len + 1));
	i = 0;
	if (!p)
		return (0);
	while (i < len)
	{
		p[i] = *(s + start + i);
		i++;
	}
	p[i] = '\0';
	return (p);
}
