/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   m_nextprime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkoskela <jkoskela@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/20 03:54:56 by jkoskela          #+#    #+#             */
/*   Updated: 2020/10/23 00:17:40 by jkoskela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/libft.h"

uint64_t		m_nextprime(uint64_t n)
{
	if (m_prime(n))
		n++;
	while (m_prime(n) == 0)
		n++;
	return (n);
}

/*
**  ----------------------------------------------------------------------------
**
**	M_nextprime
**
**	Calculate the next prime number from `n` (even if `n` is prime).
**
**  ----------------------------------------------------------------------------
*/