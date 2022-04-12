#include <iostream>
#include <ncurses.h>

class Qualquer {
  public:
    Qualquer(){
      initscr();
    }

    void uma_funcao_membro_qualquer(){
      printw("Uma função-membro qualquer");
      refresh();
    }

    void outra_funcao_membro_qualquer(){
      move(3, 20);
      printw("Outra função-membro qualquer");
    }

    ~Qualquer(){
      getch();
      endwin();
    }

};

int main( int argc , char **argv ){
  Qualquer q;
  q.uma_funcao_membro_qualquer();
  q.outra_funcao_membro_qualquer();
  return 0;
}

