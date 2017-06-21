/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ichubare <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/21 12:40:57 by ichubare          #+#    #+#             */
/*   Updated: 2016/11/23 12:34:23 by ichubare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_tolower(int a)
{
	if (a >= 'A' && a <= 'Z')
		return (a + 32);
	else
		return (a);
}
