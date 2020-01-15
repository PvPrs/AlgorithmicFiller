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

#include "/includes/filler.h"

/**
 * Struct represents a single 'player' object
 * Each object must be defined, and so must their function pointers.
 * @id		represents a user identifier (i.e. 'Player 1')
 * @token	represents either 'x' or 'o'
 * 			tokens must be overriden by capitals if != last piece (all others).
 * 			applied pieces must atleast override one cell of the previous piece.
 */
struct s_player
{
	int		id;
	char	*name;
	char	*token;
	void	(*transform_token)(int fd)
	void	(*get_token)(char *map)
	void	(*set_token)(char *map)
};

/**
 * Represents the player initialization (Object Creation).
 * The function allowed the object should be initialized by
 * the objects function pointers.
 * @param id User ID
 * @param name User NAME
 */
struct s_player create_player(int id, char *name)
{
	struct s_player player = {
			.id = id,
			.name = name,
			.transform_token = transform_token,
			.get_token = get_token,
			.set_token = set_token;

	};
	return (player);
}

/**
 * @TODO:	Shouldnt be loading data, might still use ??? who knows
 * 			Player saving ??
 * @param player_1
 * @param player_2
 */
void load_players(char *player_1, char *player_2)
{

}