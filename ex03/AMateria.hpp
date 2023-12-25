#ifndef AMATERIA_HPP
# define AMATERIA_HPP

# include <string>

class ICharacter;

class AMateria
{
	public:
		AMateria(void);
		AMateria(const std::string& type);
		AMateria(const AMateria& source);
		AMateria&	operator=(const AMateria& source);
		virtual ~AMateria(void);

		const std::string&	getType() const;

		virtual AMateria*	clone() const = 0;
		virtual void		use(ICharacter& target);
	protected:
		std::string			mType;
};
#endif
