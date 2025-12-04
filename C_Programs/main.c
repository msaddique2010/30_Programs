#include <stdio.h>

#include "./Program1_c.c"
#include "./Program2_c.c"
#include "./Program3_c.c"
#include "./Program4_c.c"
#include "./Program5_c.c"
#include "./Program6_c.c"
#include "./Program7_c.c"
#include "./Program8_c.c"
#include "./Program9_c.c"
#include "./Program10_c.c"
#include "./Program11_c.c"
#include "./Program12_c.c"
#include "./Program13_c.c"
#include "./Program14_c.c"
#include "./Program15_c.c"
#include "./Program16_c.c"
#include "./Program17_c.c"
#include "./Program18_c.c"
#include "./Program19_c.c"
#include "./Program20_c.c"
#include "./Program21_c.c"
#include "./Program22_c.c"
#include "./Program23_c.c"
#include "./Program24_c.c"
#include "./Program25_c.c"
#include "./Program26_c.c"
#include "./Program27_c.c"
#include "./Program28_c.c"
#include "./Program29_c.c"
#include "./Program30_c.c"

int main()
{
    int choice;

    printf("----------------===== PROGRAM RUNNER =====----------------\n");

    while (1 < 2)
    {
        printf("\nEnter program number (1 - 30) or 0 to exit: ");
        scanf("%d", &choice);

        if (choice == 0)
        {
            printf("Exiting..\n");
            break;
        }

        switch (choice)
        {
        case 1:
            program1();
            break;
        case 2:
            program2();
            break;
        case 3:
            program3();
            break;
        case 4:
            program4();
            break;
        case 5:
            program5();
            break;
        case 6:
            program6();
            break;
        case 7:
            program7();
            break;
        case 8:
            program8();
            break;
        case 9:
            program9();
            break;
        case 10:
            program10();
            break;
        case 11:
            program11();
            break;
        case 12:
            program12();
            break;
        case 13:
            program13();
            break;
        case 14:
            program14();
            break;
        case 15:
            program15();
            break;
        case 16:
            program16();
            break;
        case 17:
            program17();
            break;
        case 18:
            program18();
            break;
        case 19:
            program19();
            break;
        case 20:
            program20();
            break;
        case 21:
            program21();
            break;
        case 22:
            program22();
            break;
        case 23:
            program23();
            break;
        case 24:
            program24();
            break;
        case 25:
            program25();
            break;
        case 26:
            program26();
            break;
        case 27:
            program27();
            break;
        case 28:
            program28();
            break;
        case 29:
            program29();
            break;
        case 30:
            program30();
            break;
        default:
            printf("Program %d not found!\n", choice);
            break;
        }
    }

    return 0;
}
