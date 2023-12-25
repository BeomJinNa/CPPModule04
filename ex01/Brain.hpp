#pragma once
#ifndef BRAIN_HPP
# define BRAIN_HPP

# include <string>

class Brain
{
	public:
		Brain(void);
		Brain(const Brain& source);
		Brain&		operator=(const Brain& source);
		virtual ~Brain(void);
		std::string	getIdea(int index) const;
		void		setIdea(int index, std::string idea);
	private:
		std::string	ideas[100];
};
#endif
