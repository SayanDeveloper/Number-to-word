#include <stdio.h>

int main() {

    //declarations

    int count;
    long long hold;
    long long x;
    char *first[] = {"", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine", "ten", "eleven", "twelve", "thirteen", "fourteen", "fifteen", "sixteen", "seventeen", "eighteen", "nineteen"};
    char *tenth[] = {"", "ten", "twenty", "thirty", "fourty", "fifety", "sixty", "seventy", "eighty", "ninety"};
    char *call[] = {"", "", "", "hundred", "thousand", "thousand", "lakh", "lakh", "crore", "crore", "billion"};

    //input

    scanf("%lld", &x);

    //digit count of the input

    hold = x;
    count = 0;
    while (hold != 0) {
        hold /= 10;
        ++count;
    }

    //digits

    int fir = x % 10;
    int sec = (x / 10)%10;
    int Two = (x%100);
    int thi = (x / 100)%10;
    int fou = (x / 1000)%10;
    int th = (x / 1000)%100;
    int Four = (x / 1000);
    int fif = (x / 10000)%10;
    int six = (x / 100000)%10;
    int Six = (x / 100000)%100;
    int sev = (x / 1000000)%10;
    int eig = (x / 10000000)%10;
    int Eight = (x/10000000)%100;
    int nin = (x / 100000000)%10;
    int ten = (x / 1000000000)%10;

    if (thi == 0) {
        call[3] = "";
    }

    //logic

    if (x <= 19) {
        printf("%s", first[x]);
    }   
    else if(x > 19 && x <= 99) {
        printf("%s %s", tenth[sec], first[fir]);
    }   
    else if (x > 99 && x < 1000) {
        if (Two >= 20) {
                printf("%s %s %s %s", first[thi], call[count], tenth[sec], first[fir]);
        }
        else {
            printf("%s %s %s", first[thi], call[count], first[Two]);
        }
    }
    else if (x > 999 && x < 100000) {
        if (x < 20000) {
            if (fir == 0 && sec == 0 && thi == 0) {
                printf("%s %s", first[Four], call[count]);
            }
            else if(x < 10000) {
                if (Two >= 20) {
                        printf("%s %s %s %s %s %s", first[Four], call[count], first[thi], call[count-1], tenth[sec], first[fir]);
                }
                else {
                    printf("%s %s %s %s %s", first[Four], call[count], first[thi], call[count-1], first[Two]);
                }
            }
            else if (x > 9999) {
                if (Two >= 20) {
                    printf("%s %s %s %s %s %s", first[Four], call[count], first[thi], call[count-2], tenth[sec], first[fir]);
                }
                else {
                    printf("%s %s %s %s %s", first[Four], call[count], first[thi], call[count-2], first[Two]);
                }
            }
        }
        else {
            if (Two >=20) {
                printf("%s %s %s %s %s %s %s", tenth[fif], first[fou], call[count], first[thi], call[count-2], tenth[sec], first[fir]);
            }
            else {
                printf("%s %s %s %s %s %s", tenth[fif], first[fou], call[count], first[thi], call[count-2], first[Two]);
            }
        }
    }
    else if (x > 99999 && x < 10000000) {
        if (x < 2000000) {
            if (fir==0 && sec==0 && thi==0 && fou==0 && fif==0) {
                printf("%s %s", first[Six], call[count]);
            }
            else if (x < 1000000) {
                if (fir==0 && sec==0 && thi==0 && fou==0) {
                    printf("%s %s %s %s", first[Six], call[count], tenth[fif], call[count-1]);
                }
                else {
                    if (th >= 20) {
                        if (Two >= 20) {
                            printf("%s %s %s %s %s %s %s %s %s", first[six], call[count], tenth[fif], first[fou], call[count-1], first[thi], call[count-3], tenth[sec], first[fir]);
                        }
                        else {
                            printf("%s %s %s %s %s %s %s %s", first[six], call[count], tenth[fif], first[fou], call[count-1], first[thi], call[count-3], first[Two]);
                        }
                    }
                    else {
                        if (Two >= 20) {
                            printf("%s %s %s %s %s %s %s %s", first[six], call[count], first[th], call[count-1], first[thi], call[count-3], tenth[sec], first[fir]);
                        }
                        else {
                            printf("%s %s %s %s %s %s %s", first[six], call[count], first[th], call[count-1], first[thi], call[count-3], first[Two]);
                        }
                    }
                }
            }
            else if (x > 999999) {
                if (fir==0 && sec==0 && thi==0 && fou==0) {
                    printf("%s %s %s %s", first[Six], call[count], tenth[fif], call[count-2]);
                }
                else {
                    if (th >= 20) {
                        if (Two >= 20) {
                            printf("%s %s %s %s %s %s %s %s %s", first[Six], call[count], tenth[fif], first[fou], call[count-2], first[thi], call[count-4], tenth[sec], first[fir]);
                        }
                        else {
                            printf("%s %s %s %s %s %s %s %s", first[Six], call[count], tenth[fif], first[fou], call[count-2], first[thi], call[count-4], first[Two]);
                        }
                    }
                }
            }
        }
        else {
            if (th >= 20) {
                if (Two >= 20) {
                    printf("%s %s %s %s %s %s %s %s %s %s", tenth[sev], first[six], call[count], tenth[fif], first[fou], call[count-2], first[thi], call[count-4], tenth[sec], first[fir]);
                }
                else {
                    printf("%s %s %s %s %s %s %s %s %s", tenth[sev], first[six], call[count], tenth[fif], first[fou], call[count-2], first[thi], call[count-4], first[Two]);
                }
            }
            else {
                if (Two >= 20) {
                    printf("%s %s %s %s %s %s %s %s %s", tenth[sev], first[six], call[count], first[th], call[count-2], first[thi], call[count-4], tenth[sec], first[fir]);
                }
                else {
                    printf("%s %s %s %s %s %s %s %s", tenth[sev], first[six], call[count], first[th], call[count-2], first[thi], call[count-4], first[Two]);
                }
            }
        }
    }
    else if (x > 9999999 && x < 1000000000) {
        if (x < 200000000) {
            if (fir==0 && sec==0 && thi==0 && fou==0 && fif==0 && Six==0) {
                printf("%s %s", first[Eight], call[count]);
            }
            else if (x < 100000000) {
                if (th<20 && Six<20) {
                    if (Two<20) {
                        printf("%s %s %s %s %s %s %s %s %s", first[Eight], call[count], first[Six], call[count-1], first[th], call[count-3], first[thi], call[count-5], first[Two]);
                    }
                    else {
                        printf("%s %s %s %s %s %s %s %s %s %s", first[Eight], call[count], first[Six], call[count-1], first[th], call[count-3], first[thi], call[count-5], tenth[sec], first[fir]);
                    }
                }
                else if (th>20 && Six<20) {
                    if (Two<20) {
                        printf("%s %s %s %s %s %s %s %s %s %s", first[Eight], call[count], first[Six], call[count-1], tenth[fif], first[fou], call[count-3], first[thi], call[count-5], first[Two]);
                    }
                    else {
                        printf("%s %s %s %s %s %s %s %s %s %s %s", first[Eight], call[count], first[Six], call[count-1], tenth[fif], first[fou], call[count-3], first[thi], call[count-5], tenth[sec], first[fir]);
                    }
                }
                else if (th<20 && Six>20) {
                    if (Two<20) {
                        printf("%s %s %s %s %s %s %s %s %s %s", first[Eight], call[count], tenth[sev], first[six], call[count-1], first[th], call[count-3], first[thi], call[count-5], first[Two]);
                    }
                    else {
                        printf("%s %s %s %s %s %s %s %s %s %s %s", first[Eight], call[count], tenth[sev], first[six], call[count-1], first[th], call[count-3], first[thi], call[count-5], tenth[sec], first[fir]);
                    }
                }
                else if (th>20 && Six>20) {
                    if (Two<20) {
                        printf("%s %s %s %s %s %s %s %s %s %s %s", first[Eight], call[count], tenth[sev], first[six], call[count-1], tenth[fif], first[fou], call[count-3], first[thi], call[count-5], first[Two]);
                    }
                    else {
                        printf("%s %s %s %s %s %s %s %s %s %s %s %s", first[Eight], call[count], tenth[sev], first[six], call[count-1], tenth[fif], first[fou], call[count-3], first[thi], call[count-5], tenth[sec], first[fir]);
                    }
                }
            }
            else {
                if (th<20 && Six<20) {
                    if (Two<20) {
                        printf("%s %s %s %s %s %s %s %s %s", first[Eight], call[count], first[Six], call[count-2], first[th], call[count-4], first[thi], call[count-6], first[Two]);
                    }
                    else {
                        printf("%s %s %s %s %s %s %s %s %s %s", first[Eight], call[count], first[Six], call[count-2], first[th], call[count-4], first[thi], call[count-6], tenth[sec], first[fir]);
                    }
                }
                else if (th>20 && Six<20) {
                    if (Two<20) {
                        printf("%s %s %s %s %s %s %s %s %s %s", first[Eight], call[count], first[Six], call[count-2], tenth[fif], first[fou], call[count-4], first[thi], call[count-6], first[Two]);
                    }
                    else {
                        printf("%s %s %s %s %s %s %s %s %s %s %s", first[Eight], call[count], first[Six], call[count-2], tenth[fif], first[fou], call[count-4], first[thi], call[count-6], tenth[sec], first[fir]);
                    }
                }
                else if (th<20 && Six>20) {
                    if (Two<20) {
                        printf("%s %s %s %s %s %s %s %s %s %s", first[Eight], call[count], tenth[sev], first[six], call[count-2], first[th], call[count-4], first[thi], call[count-6], first[Two]);
                    }
                    else {
                        printf("%s %s %s %s %s %s %s %s %s %s %s", first[Eight], call[count], tenth[sev], first[six], call[count-2], first[th], call[count-4], first[thi], call[count-6], tenth[sec], first[fir]);
                    }
                }
                else if (th>20 && Six>20) {
                    if (Two<20) {
                        printf("%s %s %s %s %s %s %s %s %s %s %s", first[Eight], call[count], tenth[sev], first[six], call[count-2], tenth[fif], first[fou], call[count-4], first[thi], call[count-6], first[Two]);
                    }
                    else {
                        printf("%s %s %s %s %s %s %s %s %s %s %s %s", first[Eight], call[count], tenth[sev], first[six], call[count-2], tenth[fif], first[fou], call[count-4], first[thi], call[count-6], tenth[sec], first[fir]);
                    }
                }
            }
        }
        else
        {
            if (fir==0 && sec==0 && thi==0 && fou==0 && fif==0 && Six==0) {
                printf("%s %s", tenth[nin], call[count]);
            }
            else {
                if (th<20 && Six<20) {
                    if (Two<20) {
                        printf("%s %s %s %s %s %s %s %s %s %s",tenth[nin], first[eig], call[count], first[Six], call[count-2], first[th], call[count-4], first[thi], call[count-6], first[Two]);
                    }
                    else {
                        printf("%s %s %s %s %s %s %s %s %s %s %s",tenth[nin], first[eig], call[count], first[Six], call[count-2], first[th], call[count-4], first[thi], call[count-6], tenth[sec], first[fir]);
                    }
                }
                else if (th>20 && Six<20) {
                    if (Two<20) {
                        printf("%s %s %s %s %s %s %s %s %s %s %s",tenth[nin], first[eig], call[count], first[Six], call[count-2], tenth[fif], first[fou], call[count-4], first[thi], call[count-6], first[Two]);
                    }
                    else {
                        printf("%s %s %s %s %s %s %s %s %s %s %s %s",tenth[nin], first[eig], call[count], first[Six], call[count-2], tenth[fif], first[fou], call[count-4], first[thi], call[count-6], tenth[sec], first[fir]);
                    }
                }
                else if (th<20 && Six>20) {
                    if (Two<20) {
                        printf("%s %s %s %s %s %s %s %s %s %s %s",tenth[nin], first[eig], call[count], tenth[sev], first[six], call[count-2], first[th], call[count-4], first[thi], call[count-6], first[Two]);
                    }
                    else {
                        printf("%s %s %s %s %s %s %s %s %s %s %s %s",tenth[nin], first[eig], call[count], tenth[sev], first[six], call[count-2], first[th], call[count-4], first[thi], call[count-6], tenth[sec], first[fir]);
                    }
                }
                else if (th>20 && Six>20) {
                    if (Two<20) {
                        printf("%s %s %s %s %s %s %s %s %s %s %s %s",tenth[nin], first[eig], call[count], tenth[sev], first[six], call[count-2], tenth[fif], first[fou], call[count-4], first[thi], call[count-6], first[Two]);
                    }
                    else {
                        printf("%s %s %s %s %s %s %s %s %s %s %s %s %s",tenth[nin], first[eig], call[count], tenth[sev], first[six], call[count-2], tenth[fif], first[fou], call[count-4], first[thi], call[count-6], tenth[sec], first[fir]);
                    }
                }
            }
        }
        
    }
    else if (x==1000000000) {
        printf("one billion");
    }
    else {
        printf("Input is overloaded");
    }


    return 0;

}
