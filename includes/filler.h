/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   filler.h                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: dvan-boc <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/01/15 11:14:36 by dvan-boc      #+#    #+#                 */
/*   Updated: 2020/01/15 11:14:39 by dvan-boc      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef FILLER_FILLER_H
# define FILLER_FILLER_H

/*
** @brief
** Prototypes of function declaration that specifies the data types of the
** function and its arguments. There are non-prototype function declarations
** that don't specify argument types, but they're obsolescent and there's no
** reason to use them.
*/
struct s_coords;
struct s_vars;
struct s_map;

/*
** @param of type int represents the playerId
** @return an initialized struct containing the game variables.
*/
struct s_vars		*init_game(int id);

/*
** @param vars Requires to be initialized with the return value of init_game
** to initialize the struct containing the game's variables.
** @return 1 = win, 0 = loss
*/
int					event_listener(struct s_vars *vars);

/*
** get_map & get_piece encapsulate a function that read and assigns the map size
** and both allocate and initialize the map.
** @param represents a struct containing x,y width and a pointer of type char.
** @return allocated and initialized struct containing a 4x4 grid and its size.
*/
struct s_map		*get_board(struct s_map *board);
struct s_map		*get_piece(struct s_map *piece);

/*
** Places a 'piece' on the 'baord'
** @param of type s_vars contains the game variables.
** @param of type s_coords represents the x,y coordinates of the input location.
** @return		-1 = Error
** 				0  = Does not fit on current coordinate.
** 				1 = success!
*/
int					set_piece(struct s_vars *vars, struct s_coords coords);

#endif
