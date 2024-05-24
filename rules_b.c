/* ************************************************************************** */
/*																			*/
/*														:::	  ::::::::   */
/*   rules_b.c										  :+:	  :+:	:+:   */
/*													+:+ +:+		 +:+	 */
/*   By: mehakcan <mehakcan@student.42.com.tr>	  +#+  +:+	   +#+		*/
/*												+#+#+#+#+#+   +#+		   */
/*   Created: 2024/05/18 13:12:07 by mehakcan		  #+#	#+#			 */
/*   Updated: 2024/05/18 17:01:31 by mehakcan		 ###   ########.fr	   */
/*																			*/
/* ************************************************************************** */

#include "push_swap.h"
#include <unistd.h>

void	pb(t_stack *stack)
{
	int	i;

	if (stack->size_a > 0)
	{
		i = stack->size_b;
		while (i > 0)
		{
			stack->b[i] = stack->b[i - 1];
			i--;
		}
		stack->b[0] = stack->a[0];
		i = 0;
		while (i < stack->size_a - 1)
		{
			stack->a[i] = stack->a[i + 1];
			i++;
		}
		stack->size_b++;
		stack->size_a--;
		write(1, "pb\n", 3);
	}
}

void	rb(t_stack *stack, int print)
{
	int	tmp;
	int	i;

	if (stack->size_b > 1)
	{
		tmp = stack->b[0];
		i = -1;
		while (++i < stack->size_b - 1)
			stack->b[i] = stack->b[i + 1];
		stack->b[i] = tmp;
		if (!print)
			write(1, "rb\n", 3);
	}
}
