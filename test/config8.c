/* Generated by re2c */
#line 1 "config8.re"
#include <cstring>
#include <iostream>

struct Scanner
{
	Scanner(char *txt)
		: cur(txt), lim(txt + strlen(txt))
	{
	}
	
	char    *cur;
	char    *lim;
	char	*ptr;
	char	*ctx;
	char    *tok;
};

enum What
{
	UNEXPECTED,
	KEYWORD,
	NUMBER,
	EOI
};

char * tokens[] = { "UNEXPECTED", "KEYWORD", "NUMBER", "EOI" };

void fill(int)
{
}

int scan(Scanner &s)
{
	char *cursor = s.cur;

	if(cursor == s.lim)
		return EOI;
	
std:
	s.tok = cursor;


#line 46 "config8.c"
{
	char curr;
	if ((s.lim - s.cur) < 3) fill(3);
	curr = *s.cur;
	switch (curr) {
	case '\t':
	case '\n':
	case ' ':	goto xx4;
	case '0':
	case '1':
	case '2':
	case '3':
	case '4':
	case '5':
	case '6':
	case '7':
	case '8':
	case '9':	goto xx6;
	case 'a':
	case 'b':	goto xx9;
	default:	goto xx2;
	}
xx2:
	++s.cur;
xx3:
#line 66 "config8.re"
	{
		return UNEXPECTED;
	}
#line 76 "config8.c"
xx4:
	++s.cur;
#line 59 "config8.re"
	{
		if(s.cur == s.lim)
			return EOI;
		cursor = s.cur;
		goto std;
	}
#line 86 "config8.c"
xx6:
	++s.cur;
	if (s.lim <= s.cur) fill(1);
	curr = *s.cur;
	switch (curr) {
	case '0':
	case '1':
	case '2':
	case '3':
	case '4':
	case '5':
	case '6':
	case '7':
	case '8':
	case '9':	goto xx6;
	default:	goto xx8;
	}
xx8:
#line 56 "config8.re"
	{ return NUMBER;  }
#line 107 "config8.c"
xx9:
	curr = *++s.cur;
	switch (curr) {
	case '0':
	case '2':
	case '3':
	case '4':
	case '5':
	case '6':
	case '7':
	case '8':
	case '9':
		s.ctx = s.cur;
		goto xx10;
	case '1':
		s.ctx = s.cur;
		goto xx13;
	default:	goto xx3;
	}
xx10:
	++s.cur;
	if (s.lim <= s.cur) fill(1);
	curr = *s.cur;
	switch (curr) {
	case '0':
	case '1':
	case '2':
	case '3':
	case '4':
	case '5':
	case '6':
	case '7':
	case '8':
	case '9':	goto xx10;
	default:	goto xx12;
	}
xx12:
	s.cur = s.ctx;
#line 55 "config8.re"
	{ return KEYWORD; }
#line 148 "config8.c"
xx13:
	curr = *++s.cur;
	switch (curr) {
	case '0':
	case '1':
	case '2':
	case '3':
	case '4':
	case '5':
	case '6':
	case '7':
	case '8':
	case '9':	goto xx10;
	default:	goto xx14;
	}
xx14:
	s.cur -= 1;
#line 54 "config8.re"
	{ return KEYWORD; }
#line 168 "config8.c"
}
#line 69 "config8.re"

}

int main(int,char**)
{
	Scanner s("a77 a1 b8 b1");
	
	int t, n = 0;
	while ((t = scan(s)) != EOI)
	{
		std::cout << (++n) << ": " << tokens[t] << " = \""; std::cout.write(s.tok, s.cur-s.tok); std::cout << "\"" << std::endl;
	}
}