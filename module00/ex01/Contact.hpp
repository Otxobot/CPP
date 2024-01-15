
#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <string>

class Contact {
    public:
        Contact();
        ~Contact();
        void setIndex(int const idx);
        bool setField(field const field, std::string const input);
        void displayLine(void);
        void displayFull(void);
    private:
        std::string _Firstname, _Lastname, \
        _Nickname, _Phonenumber, _darkestsecret;
        int index;
};

#endif