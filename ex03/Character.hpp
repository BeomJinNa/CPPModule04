#ifndef CHARACTER_HPP
# define CHARACTER_HPP

# include "ICharacter.hpp"
# include "AMateria.hpp"
# include "List.hpp"

class Character : public ICharacter
{
	public:
		Character(void);
		Character(const std::string& name);
		Character(const Character& source);
		Character&	operator=(const Character& source);
		virtual ~Character(void);

		virtual const std::string&	getName(void) const;
		virtual void				equip(AMateria* m);
		virtual void				unequip(int idx);
		virtual void				use(int idx, ICharacter& target);

		static void					clearUnequiped(void);
	private:
		std::string			mName;
		int					mNumberOfItems;
		AMateria*			mInventory[4];
		static int			unequiped;
		static t_list*		start;
		static t_list*		last;
};
#endif
