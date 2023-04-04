#include <iostream>
#include <string>
#include <codecvt>

// to convert the UTF-16 string to a UTF-8 string we need to define _SILENCE_CXX17_CODECVT_HEADER_DEPRECATION_WARNING
// this is because the codecvt header is deprecated in C++17
// we can also use the std::wstring_convert class instead of the codecvt header
// the std::wstring_convert class is deprecated in C++17

#define _SILENCE_CXX17_CODECVT_HEADER_DEPRECATION_WARNING





int main()
{

	const char* name = "Daniel";
	//name[2] = 'x'; // This will cause a crash because the string is const

	const char* name2 = "Daniel";
	//name2[2] = 'x'; // This will not cause a crash because the string is not const, but it is not recommended to do this because the string is stored in the read-only memory and may cause unexpected behavior depending on the compiler

	const wchar_t* name3 = L"Daniel"; // This is a wide string
	const char16_t* name4 = u"Daniel"; // This is a UTF-16 string
	const char32_t* name5 = U"Daniel"; // This is a UTF-32 string

	std::cout << name << std::endl;
	std::cout << name2 << std::endl;
	std::wcout << name3 << std::endl; // This will print the wide string using wcout
	
	// need to convert the UTF-16 string to a UTF-8 string to print it
	std::wstring_convert<std::codecvt_utf8_utf16<char16_t>, char16_t> converter;
	std::cout << converter.to_bytes(name4) << std::endl;
	
	// need to convert the UTF-32 string to a UTF-8 string to print it
	std::wstring_convert<std::codecvt_utf8<char32_t>, char32_t> converter2;
	std::cout << converter2.to_bytes(name5) << std::endl;
	
	
	

	std::cin.get();
}