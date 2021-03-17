#include <stdio.h>

char* get_str()
{
    return "#include <stdio.h>\n\nchar* get_str()\n{\n\treturn \"#include <stdio.h>\n\nint main()\n{\n\t";
}

int main()
{
    printf("%s", get_str());
    return 0;
}
