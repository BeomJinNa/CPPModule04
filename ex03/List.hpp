#ifndef LIST_HPP
# define LIST_HPP

# include "AMateria.hpp"

typedef struct s_list
{
	AMateria*		materia;
	struct s_list	*next;
}					t_list;
#endif
