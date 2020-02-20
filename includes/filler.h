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
#define FILLER_FILLER_H

struct				s_coords;
struct				s_vars;
struct				s_map;

int					set_piece(struct s_vars *, struct s_coords *);
struct s_map		*get_piece(struct s_map *);
struct s_map		*get_map(struct s_map *);
char				*transform_piece(char *);
struct s_vars		*init_game(int);
struct s_coords		*input_locator(struct s_vars *);
int					event_listener(struct s_vars *);

#endif //FILLER_FILLER_H
