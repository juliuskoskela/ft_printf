/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   g_sub.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkoskela <jkoskela@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/11 01:29:22 by jkoskela          #+#    #+#             */
/*   Updated: 2021/02/07 22:08:41 by jkoskela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/libft.h"

t_vct4			g_sub(t_vct4 a, t_vct4 b)
{
	t_vct4		out;

	out = g_vct4((a.x - b.x), (a.y - b.y), (a.z - b.z), (a.w - b.w));
	return (out);
}

/*
**  ----------------------------------------------------------------------------
**
**	g_sub
**
**	Substract matrix `a` from `b`.
**
**  ----------------------------------------------------------------------------
*/
