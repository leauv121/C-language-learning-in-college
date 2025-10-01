#include <stdio.h>
int main()
    {
        printf("#include<stdio.h>\n");
        printf("int main() {\n");
        printf("\tint a, b, sum;\n");
        printf("\tscanf(\"%%d%%d\", &a, &b);\n");
        printf("\tsum = a + b;\n");
        printf("\tprintf(\"%%d + %%d = %%d\", a, b, sum);\n");
        printf("\treturn 0;\n");
        printf("}\n");
        return 0;

    }