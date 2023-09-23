#include "Account.h"



Account::Account(const std::string& uname, const std::string& pwd, AccountType acctType): username(uname), password(pwd), type(acctType) {}

std::string Account::getUsername() const {
    return username;
}

std::string Account::getPassword() const {
    return password;
}

AccountType Account::getType() const {
    return type;
}
