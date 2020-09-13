#include "../AuxHeader.h"

using namespace std;

namespace AUX
{

//Private Functions

	//Function : Converts Integer to its ASCII value
	char String::intToAscii(int value)
	{
		return '0'+value;
	}

	//Function : Returns String Value in 
	char* String::getCString()
	{
		return m_string;
	}


//Public Functions
	//Default Constructor : Initializes Empty Constructor
	String::String()
	{
		m_length=0;
		m_string=NULL;
	}

	// Copy Constructor : const char* 
	String::String(const char* string)
	{
		
		m_length=strlen(string);
		m_string=new char[m_length];
		for(int i=0;i<m_length;i++)
		{
			m_string[i]=string[i];
		}
	}

	// Copy Constructor : char *
	String::String(char* string)
	{
		m_length=strlen(string);
		m_string=new char[m_length];
		for(int i=0;i<m_length;i++)
		{
			m_string[i]=string[i];
		}
	}


	// Copy Constructor : String object
	String::String(const String &string)
	{
		m_length=string.m_length;
		m_string=new char[m_length];
		for(int i=0;i<m_length;i++)
		{
			m_string[i]=string.m_string[i];		
		}
	}

	// Default Constructor : Initializes String Object using an integer


	// Method : Returns Length of String
	unsigned int String::length()
	{
		return m_length;
	}

	// Destructor : Safely Deletes String
	String::~String()
	{
		delete[] m_string;
		m_length=0;
	}

	// Operator Overloading : Assignment Operator
	void String::operator = (String &c)
	{
		if(m_length==0)
		{
			m_length=c.m_length;
			m_string=new char[m_length];
			for(int i=0;i<m_length;i++)
			{
				m_string[i]=c.m_string[i];
			}
		}
		else
		{
			delete[] m_string;
			m_length=c.m_length;
			m_string=new char[m_length];
			for(int i=0;i<m_length;i++)
			{
				m_string[i]=c.m_string[i];
			}
		}
	}

	// Operator Overloading : Ostream Class : String Object
	std::ostream& operator << (std::ostream &out,const String &c)
	{
		for(int i=0;i<c.m_length;i++)
		{
			out<<c.m_string[i];
		}
		return out;
	}

	// Operator Overloading : Istream Class : String Object Pointer
	std::ostream& operator << (std::ostream &out, String* c)
	{
		out<<c->m_string;
		return out;
	}



	// Method : replaceCharacter | Replaces Singular Character in the string
	void String::replaceCharacter(const char CharacterToReplace,const char replacementCharacter)
	{
		for(int i=0;i<m_length;i++)
		{
			if(m_string[i]==CharacterToReplace)
			{
				m_string[i]=replacementCharacter;
			}
		}	
	}

	// Method : pushBack | Insert Single Character at back of a string
	void String::pushBack(const char c)
	{
		char* temp=new char[m_length];
		for(int i=0;i<m_length;i++)
		{
			temp[i]=m_string[i];
		}
		delete[] m_string;
		m_string=new char[m_length+1];
		for(int i=0;i<m_length;i++)
		{
			m_string[i]=temp[i];
		}
		m_string[m_length++]=c;
		delete[] temp;
	}

	//Method : pushBackString | Insert String at the back
	void String::pushBackString(String& string)
	{
		
	}	
}