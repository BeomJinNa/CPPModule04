#pragma once
#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <string>

class Animal
{
	public:
		Animal(void);
		Animal(const Animal& source);
		Animal&			operator=(const Animal& source);
		virtual ~Animal(void);
		std::string		getType(void) const;
		void			setType(const std::string& type);
		virtual void	makeSound(void) const;
	protected:
		std::string	mType;
};
#endif
