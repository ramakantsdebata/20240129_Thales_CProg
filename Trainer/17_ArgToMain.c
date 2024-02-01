#include <stdio.h>


void AdminControls(int argc, char *argv[]);
void MemberControls(int argc, char *argv[]);
void GuestControls(int argc, char *argv[]);

// 17_ArgToMain.out arg1 arg2 arg3
// argc : 4
// argv[0]: Invocation name
// arg[...]: Other args

int main(int argc, char *argv[])
{
    printf("Number of args: %d\n", argc);

    printf("Args are:\n");
    for (int i = 0 ; i < argc; i++)
        printf("%d --> %s\n", i, argv[i]);

    if (!strcmp(argv[0], "AdminAccess"))
        AdminControls(argc, argv);
    else if (!strcmp(argv[0], "MemberAccess"))
        MemberControls(argc, argv);
    else
        GuestControls(argc, argv);

    return 0;
}