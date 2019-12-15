//////////////////////////////////////////////////////////////////////////////
//                                                                          //
//            Notes aimed for, but not limited to, C++ programmers          //
//                                                                          //
//////////////////////////////////////////////////////////////////////////////
// Our "private data members" are hidden away in 'account.c'.               //
//**************************************************************************//
// GCC supports function attributes '((constructor))' and '((destructor))'. //
// They're limited from what C++ uses since C constructors only run once    //
// before 'main()', and C destructors only run once after 'main()'. Due to  //
// these restrictions, we will INSTEAD implement initializer and cleanup    //
// functions that have to be manually called every time we use them.        //
//**************************************************************************//
// C supports neither function overloading nor namespaces. If your program  //
// gets big, you may have to append a struct name prefix to functions to    //
// avoid name collisions.                                                   //
//**************************************************************************//
// Notice the extra 'const' in 'getBalance', this is like a constant        //
// member function in C++ such as:                                          //
//                                                                          //
//         int getBalance() const;                                          //
//                                                                          //
// found in 'account_cpp/account.h                                          //
//////////////////////////////////////////////////////////////////////////////

#pragma once

typedef struct Account Account;

// initializer and cleanup functions
Account* new_Account();
void delete(Account* this);

// transformer functions
void deposit(Account* const this, int amount);
void withdraw(Account* const this, int amount);

// observer functions
int getBalance(const Account* const this);
int Account_getCount();
