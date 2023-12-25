#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

# include "IMateriaSource.hpp"
# include "AMateria.hpp"

class MateriaSource : public IMateriaSource
{
	public:
		MateriaSource(void);
		MateriaSource(const MateriaSource& source);
		MateriaSource&	operator=(const MateriaSource& source);
		virtual ~MateriaSource(void);
		virtual void		learnMateria(AMateria* m);
		virtual AMateria*	createMateria(const std::string& type);
	private:
		int			mNumberOfMateria;
		AMateria*	mMateria[4];
};
#endif
