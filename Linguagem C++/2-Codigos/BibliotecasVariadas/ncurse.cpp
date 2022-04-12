#include <stdio.h>
#include <curses.h>

int main(void) {
char r;
WINDOW *win;
win = initscr();
scrollok(win, TRUE);
do {
printw("\n\n\tTestando...\n\n\n\n\n\n\n\n\tDeseja repetir? (s/n)");
noecho();
r = getch();
while(r!='s' && r!='n') {
printw("\n\tResponda usando 's' para 'sim' e 'n' para 'não'.\n\tE então? Deseja repetir?");
r = getch();
}
} while('s' == r);
endwin();
}
