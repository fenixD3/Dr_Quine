#include <stdio.h>

/*
	This program print itself
*/
char*	get_collen_result()
{
	return "#include <stdio.h>%1$c%1$c/*%1$c%2$cThis program print itself%1$c*/%1$cchar*%2$cget_collen_result()%1$c{%1$c%2$creturn %3$c%4$s%3$c;%1$c}%1$c%1$cint%2$c%2$cmain()%1$c{%1$c%2$c/*%1$c%2$c%2$cI get my code here%1$c%2$c*/%1$c%2$cprintf(get_collen_result(), 10, 9, 34, get_collen_result());%1$c%2$creturn 0;%1$c}%1$c";
}

int		main()
{
	/*
		I get my code here
	*/
	printf(get_collen_result(), 10, 9, 34, get_collen_result());
	return 0;
}
