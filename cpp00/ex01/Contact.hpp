#ifndef CONTACT_HPP
# define CONTACT_HPP

#include <iostream>

class Contact
{

public:

	Contact();
	~Contact();

	std::string	getfirstname(void) const;
	void		setfirstname(std::string input);
	std::string	getlastname(void) const;
	void		setlastname(std::string input);
	std::string	getnickname(void) const;
	void		setnickname(std::string input);
	std::string	getphonenumber(void) const;
	void		setphonenumber(std::string input);
	std::string	getdarkestsecret(void) const;
	void		setdarkestsecret(std::string input);

private:

	std::string	firstname;
	std::string	lastname;
	std::string	nickname;
	std::string	phonenumber;
	std::string	darkestsecret;

};

#endif
