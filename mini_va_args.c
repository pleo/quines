#include <stdio.h>
#define _(...) #__VA_ARGS__;__VA_ARGS__
#define cp char*p
cp = _(
int main() {
    printf("#include <stdio.h>\n#define _(...) #__VA_ARGS__;__VA_ARGS__\n#define cp char*p\ncp = _(%s)\n", p);
    return 0;
})
