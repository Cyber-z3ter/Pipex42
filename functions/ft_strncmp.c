/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: houazzan <houazzan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/06 20:53:23 by houazzan          #+#    #+#             */
/*   Updated: 2022/02/18 19:22:17 by houazzan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../mandatory/pipex.h"
#include "../bonus/bonus_pipex.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t			i;
	unsigned char	*c_s1;
	unsigned char	*c_s2;

	i = 0;
	c_s1 = (unsigned char *)s1;
	c_s2 = (unsigned char *)s2;
	if (n == 0)
		return (0);
	while (i < n - 1 && c_s1[i] && c_s2[i])
	{
		if (c_s1[i] != c_s2[i])
			return (c_s1[i] - c_s2[i]);
		i++;
	}
	return (c_s1[i] - c_s2[i]);
}
