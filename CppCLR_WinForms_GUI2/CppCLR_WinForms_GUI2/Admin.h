#pragma once

#include "Person.h"
#include "Ticket.h"

#include <iostream>

using namespace System;

ref class Admin : public Person
{

public:

	Admin() {
		name = "ADMIN";
		password = "1234";
	}

	bool login(String^ name, String^ password) override {
		if (password != this->password || name != this->name) {
			return false;
		}
		else {
			return true;
		}
	}
};
