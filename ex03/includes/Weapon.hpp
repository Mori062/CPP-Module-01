#ifndef WEAPON_HPP
# define WEAPON_HPP

class Weapon
{
	private:
		std::string type;
	
	public:
		Weapon(std::string type);
		~Weapon(void);
	
	public:
		std::string const	&getType(void);
		void				setType(std::string type);
};

#endif