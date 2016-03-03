/*
** declaration.h for declaration.h in /home/vatout_a/taff/USP/my_ls/listes/include
** 
** Made by Vatoutine Artem
** Login   <vatout_a@epitech.net>
** 
** Started on  Thu Nov 26 10:31:28 2015 Vatoutine Artem
** Last update Fri Nov 27 16:17:37 2015 Vatoutine Artem
*/

#ifndef DECLARATION_H_
# define DECLARATION_H_

# include <stdio.h>
# include <stdlib.h>
# include <sys/types.h>
# include <sys/stat.h>
# include <dirent.h>
# include "./my.h"
# include "./funk.h"

int	my_strcmp(char *s1, char *s2);
void	my_free_list(t_list *list);
void	my_print_list(t_list *list);
t_list	*my_ls(const char *src, t_list *list);
t_list	*add_elem(t_list *list, char *src);
t_list	*my_init_list(t_list *list);
int	my_put_inlist(t_list *list, struct dirent *entry, DIR *dirp);

#endif /* DECLARATION_H_ */
