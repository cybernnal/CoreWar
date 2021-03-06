/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sub.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbaum <rbaum@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/11 00:07:25 by rbaum             #+#    #+#             */
/*   Updated: 2016/09/28 20:54:33 by rbaum            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "vm.h"

void						op_sub(t_vm *vm, t_proc *p)
{
	int						v1;
	int						v2;
	int						n;

	v1 = p->reg[p->set[2]];
	v2 = p->reg[p->set[3]];
	n = (v1 - v2);
	if (n == 0)
		p->carry = 1;
	else
		p->carry = 0;
	p->reg[p->set[4]] = n;
	(void)vm;
}
