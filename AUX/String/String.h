#include<cstdlib>
#include<iostream>

namespace AUX
{
	class String
	{
	public:
		String();
		String(char* string);
		String(const char* string);
		String(const String &string);
		
		~String();

		unsigned int length();
		char* getCString();		
		void operator =(String &c);
		String operator + (String &c);		
		friend std::ostream& operator << (std::ostream& out , const String & c);
		friend std::ostream& operator << (std::ostream& out , String * c);
		friend std::istream& operator >> (std::istream& in , const String & c);

		void replaceCharacter(const char characterToReplace , const char replacementCharacter);
		void pushBack(const char c);
		void pushBackString(String& string);

	private:
		char *m_string;
		unsigned int  m_length;
		char intToAscii(int value);


	};
}