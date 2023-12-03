#include "header.h"

int main() {
    t_temps t;
    affm();
    affs();
    affo();
    afft();
    char touche;
    t.t1=60;
    while (touche!='p') {
        gotoligcol(12,9);
        printf("%d",t.t1);
        t.t1=t.t1-1;
        delay(1000);
    }
    return 0;
}
