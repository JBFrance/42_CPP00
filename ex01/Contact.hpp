#ifndef CONTACT_HPP
#define CONTACT_HPP
# include <iostream>
# include <cctype>
# include <iomanip>


class Contact
{
    private:
    std::string firstName;
    std::string lastName;
    std::string	nickName;
    std::string	secret;
    std::string phoneNumber;
public:
    void init();
    std::string getFirst();
    std::string getLast();
    std::string getNick();
    std::string getPhone();
    std::string getSecret();
};


#endif
