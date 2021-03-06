/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   p_char.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkoskela <jkoskela@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/16 01:27:25 by jkoskela          #+#    #+#             */
/*   Updated: 2021/02/06 18:26:36 by jkoskela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/libft.h"

void		p_char(char c)
{
	if (!(write(1, &c, 1)))
		return ;
}

/*
**  ----------------------------------------------------------------------------
**
**	P_char
**
**	Print char `c`.
**
**  ----------------------------------------------------------------------------
*/
