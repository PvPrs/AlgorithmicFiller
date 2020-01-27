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

#include "filler.h"

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
			.set_token = set_token
	};
	return (player);
}

///**
// * @TODO:	Shouldnt be loading data, might still use ??? who knows
// * 			Player saving ??
// * @param player_1
// * @param player_2
// */
//void load_players(char *player_1, char *player_2)
//{
//player = crea player.settoken(player.gettoken() + 1)
//}