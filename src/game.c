/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   player.c                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: dvan-boc <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/01/15 11:17:01 by dvan-boc      #+#    #+#                 */
/*   Updated: 2020/01/15 11:17:01 by dvan-boc      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/filler.h"
#include "../includes/player.h"
#include "../libft/includes/libft.h"
#include <stdio.h>

/**
** Represents the player initialization (Object Creation).
** The function allowed the object should be initialized by
** the objects function pointers.
** @param id User ID
** @param name User NAME
** @Designated_initializers is only allowed on declaration, Refer to:
** @Compound_Literals initialize a pointer
** to understand the below syntax:
** https://en.wikipedia.org/wiki/C_syntax#Compound_literals
*/
struct s_vars	*init_game(int id)
{
	struct s_vars *vars;
	vars = malloc(sizeof(struct s_vars));
	*vars = (struct s_vars) {
		.id = id,
		.map = {0},
		.piece = {0},
		.token = (id == 1 ? 'o' : 'x')
	};
	printf("%zu\n", sizeof(vars));
	//dprintf(1, "%d\n", sizeof(vars));
	return (vars);
}

/**
 * An infinite loop whilst the game is running.
 * @param vars
 * @return
 */
int		event_listener(struct s_vars *vars)
{
	while (1)
	{
		get_map(&vars->map);
		get_piece(&vars->piece);
		set_piece(vars, input_locator(vars));
	}
};
