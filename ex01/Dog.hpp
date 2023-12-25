#pragma once
#ifndef DOG_HPP
# define DOG_HPP

# include "Animal.hpp"
# include "Brain.hpp"

class Dog : public Animal
{
	public:
		Dog(void);
		Dog(const Dog& source);
		Dog&			operator=(const Dog& source);
		virtual ~Dog(void);
		virtual void	makeSound(void) const;
		const Brain*	getBrain(void) const;
	private:
		Brain*			brain;
};
#endif
