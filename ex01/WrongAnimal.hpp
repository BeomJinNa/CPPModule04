#pragma once
#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

# include <string>

class WrongAnimal
{
	public:
		WrongAnimal(void);
		WrongAnimal(const WrongAnimal& source);
		WrongAnimal&		operator=(const WrongAnimal& source);
		~WrongAnimal(void);
		std::string	getType(void) const;
		void		setType(const std::string& type);
		void		makeSound(void) const;
	protected:
		std::string	mType;
};
#endif
