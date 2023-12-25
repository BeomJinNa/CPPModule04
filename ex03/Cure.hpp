#ifndef CURE_HPP
# define CURE_HPP

# include "AMateria.hpp"

class Cure : public AMateria
{
	public:
		Cure(void);
		Cure(const Cure& source);
		Cure&	operator=(const Cure& source);
		virtual ~Cure(void);

		virtual Cure*	clone() const;
		virtual void	use(ICharacter& target);
};
#endif
