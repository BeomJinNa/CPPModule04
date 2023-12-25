#ifndef ICE_HPP
# define ICE_HPP

# include "AMateria.hpp"

class Ice : public AMateria
{
	public:
		Ice(void);
		Ice(const Ice& source);
		Ice&	operator=(const Ice& source);
		virtual ~Ice(void);

		virtual Ice*	clone() const;
		virtual void	use(ICharacter& target);
};
#endif
