#include <cstdio>

/*
	This program print itself
*/
const char* get_collen_result()
{
	return "#include <cstdio>%1$c%1$c/*%1$c%2$cThis program print itself%1$c*/%1$cconst char* get_collen_result()%1$c{%1$c%2$creturn %3$c%4$s%3$c;%1$c}%1$c%1$cint main()%1$c{%1$c%2$c/*%1$c%2$c%2$cI get my code here%1$c%2$c*/%1$c%2$cprintf(get_collen_result(), 10, 9, 34, get_collen_result());%1$c%2$creturn 0;%1$c}%1$c";
}

int main()
{
	/*
		I get my code here
	*/
	printf(get_collen_result(), 10, 9, 34, get_collen_result());
	return 0;
}
