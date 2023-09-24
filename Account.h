<<<<<<< HEAD
#pragma once
#ifndef ACCOUNT_H
#define ACCOUNT_H
#include <iostream>
enum class AccountType {
    Admin,
    ParkingAttendant
};

class Account {
private:
    std::string username;
    std::string password;
    AccountType type;

public:
    Account(const std::string& uname, const std::string& pwd, AccountType acctType);
    std::string getUsername() const;
    std::string getPassword() const;
    AccountType getType() const;
};

#endif
=======
#pragma once
#ifndef ACCOUNT_H
#define ACCOUNT_H
#include <iostream>
enum class AccountType {
    Admin,
    ParkingAttendant
};

class Account {
private:
    std::string username;
    std::string password;
    AccountType type;

public:
    Account(const std::string& uname, const std::string& pwd, AccountType acctType);
    std::string getUsername() const;
    std::string getPassword() const;
    AccountType getType() const;
};

#endif
>>>>>>> a8d5687e964e2a87b004b8d2551ba3b615706438
