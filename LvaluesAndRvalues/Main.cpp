#include <iostream>
#include <string>

int GetValue()
{

	return 10;
}

int& GetValueRef()
{

	static int value = 10;
	return value;
}

void SetValue(int value)
{

}

void SetValueRef(int& value)
{

}

void SetValueConstRef(const int& value)
{

}

void PrintName(std::string& name)
{

	std::cout << name << std::endl;
}

void PrintNameConst(const std::string& name)
{

	std::cout << name << std::endl;
}

int main()
{

	int i = 10; // i is a lvalue and 10 is a rvalue, lvalue is a memory location and rvalue is a value
	//GetValue = 5; // error, GetValue is a lvalue and 5 is a rvalue
	GetValueRef() = 5; // ok, GetValueRef() is a lvalue and 5 is a rvalue
	SetValue(i);
	//SetValueRef(5); // error, SetValueRef(5) is a rvalue
	SetValueConstRef(5); // ok, SetValueConstRef(5) is a rvalue

	std::string firstName = "Daniel";
	std::string lastName = "McDonald";

	std::string fullName = firstName + " " + lastName;

	PrintName(fullName); // ok, fullName is a lvalue
	// PrintName(firstName + " " + lastName); // error firstName + " " + lastName is a rvalue

	PrintNameConst(fullName); // ok, fullName is a lvalue
	PrintNameConst(firstName + " " + lastName); // ok, firstName + " " + lastName is a rvalue

	
	
	std::cin.get();
}