#pragma once
#ifndef CAT_HPP
# define CAT_HPP

# include "Animal.hpp"
# include "Brain.hpp"

class Cat : public Animal
{
	public:
		Cat(void);
		Cat(const Cat& source);
		Cat&			operator=(const Cat& source);
		virtual ~Cat(void);
		virtual void	makeSound(void) const;
		const Brain*	getBrain(void) const;
	private:
		Brain*			brain;
};
#endif
