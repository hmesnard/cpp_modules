#include "Contact.hpp"

Contact::Contact() : firstname(""), lastname(""), nickname(""), phonenumber(""), darkestsecret("")
{
	return ;
}

Contact::~Contact()
{
	return ;
}

std::string	Contact::getfirstname(void) const
{
	return (this->firstname);
}

void		Contact::setfirstname(std::string input)
{
	this->firstname = input;
}

std::string	Contact::getlastname(void) const
{
	return (this->lastname);
}

void		Contact::setlastname(std::string input)
{
	this->lastname = input;
}

std::string	Contact::getnickname(void) const
{
	return (this->nickname);
}

void		Contact::setnickname(std::string input)
{
	this->nickname = input;
}

std::string	Contact::getphonenumber(void) const
{
	return (this->phonenumber);
}

void		Contact::setphonenumber(std::string input)
{
	this->phonenumber = input;
}

std::string	Contact::getdarkestsecret(void) const
{
	return (this->darkestsecret);
}

void		Contact::setdarkestsecret(std::string input)
{
	this->darkestsecret = input;
}
