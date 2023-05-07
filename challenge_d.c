#include <stdio.h>
#include <signal.h>
int check(char input) {
    if ((input < (0x30)) || (input > 0x39) ) {
        return 0;
    }
    return 1;
}

int main() {
    char input=getchar();
    if (check(input) && (input=='1')) {
        input=getchar();
        if (check(input) && (input=='3')) {
            input=getchar();
            if (check(input) && (input=='3')) {
                input=getchar();
                if (check(input) && (input=='7')) {
                    input=getchar();
                    if (check(input) && (input=='7')) {
                        input=getchar();
                        if (check(input) && (input=='2')) {
                            input=getchar();
                            if (check(input) && (input=='6')) {
                                input=getchar();
                                if (check(input) && (input=='9')) {
                                    printf("\x4C" "a\040f\x6C" "a\147 \x65" "s\040l\x61" " \160a\x72" "t\145 \x6E" "u\155e\x72" "i\143a\x20" "d\145l\x20" "i\156p\x75" "t\040q\x75" "e\040h\x61" " \143r\x61" "s\150e\x61" "d\157 \x65" "l\040p\x72" "o\147r\x61" "m\141\x0A");
                                    printf("\x45" "j\040F\x6C" "a\147:\x20" "U\122J\x43" "{\0600\x30" "0\0600\x7D" "\x0A");
                                    fflush(stdout);
                                    raise(0xb);
                                }
                                else {
                                    printf("\x57" "r\157n\x67" "");
                                    return (0x0);
                                }
                            }
                            else {
                                printf("\x57" "r\157n\x67" "");
                                return (0x0);
                            }
                        }
                        else {
                            printf("\x57" "r\157n\x67" "");
                            return (0x0);
                        }
                    }
                    else {
                        printf("\x57" "r\157n\x67" "");
                        return (0x0);
                    }
                }
                else {
                    printf("\x57" "r\157n\x67" "");
                    return (0x0);
                }
            }
            else {
                printf("\x57" "r\157n\x67" "");
                return (0x0);
            }
        }
        else {
            printf("\x57" "r\157n\x67" "");
            return (0x0);
        }
    }
    else {
        printf("\x57" "r\157n\x67" "");
        return (0x0);
    }
    printf("\x77" "t\146");
}
