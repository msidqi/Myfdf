/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_charcount.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msidqi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/19 03:02:54 by msidqi            #+#    #+#             */
/*   Updated: 2018/10/19 03:04:28 by msidqi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_charcount(char *s, int i)
{
	int p;

	if (!s)
		return (0);
	p = 0;
	while ((s[i] == ' ' || s[i] == '\t' || s[i] == '\n'))
		i++;
	while (!(s[i] == ' ' || s[i] == '\t' || s[i] == '\n' || s[i] == '\0'))
	{
		p++;
		i++;
	}
	p++;
	return (p);
}
