#include <iostream> //time e rand
#include <ncurses.h> //funcções n curses
#include <vector> //logica das cordenadas
#include <unistd.h> //usleep() velocidade da cobra

class SnakeGame
{
	protected:
		int m_maxwidth;
		int m_maxheight;

	public:
		SnakeGame()
		{
			initscr(); //começa as funções do ncurses
			nodelay(stdscr, true); //para a cobra n parar
			keypad(stdscr, true); //KEY_ armazenar teclas
			noecho(); //para nao exibir teclas na tela
			curs_set(0);//desliga o cursor do terminal

			m_maxwidth = getmaxx(stdscr)/2; //tamanho da tela
			m_maxheight = getmaxy(stdscr)/2;

			for(int i = 0; i < m_maxwidth -1; ++i) 
			{
				move(0, i); //i linha
				if(i ==0)
				{
					addch('+');
				}
				else if(i == (m_maxwidth -2))
				{
					addch('+');
				}
				else
				{
					addch('-');
				}
			}
			
			for(int i = 1; i < m_maxheight -1; ++i) //i coluna
			{
				move(i, 0);
				if(i == (m_maxheight - 2))
				{
					addch('+');
				}
				else
				{
					addch('|');
				}
			}
			
			for(int i = 0; i < m_maxwidth -1; ++i) 
			{
				move(m_maxwidth - 2, i); //i linha
				if(i == (m_maxwidth - 2))
				{
					addch('+');
				}
				else if(i == 0)
				{
					addch('+');
				}
				else
				{
					addch('-');
				}
			}
			
			for(int i = 1; i < m_maxheight -1; ++i) //i coluna
			{
				move(i, m_maxwidth);
				if(i == (m_maxheight - 2))
				{
					addch('+');
				}
				else if(i == 0)
				{
					addch('+');
				}
				else
				{
					addch('|');
				}
			}

		}
		~SnakeGame()
		{
			nodelay(stdscr, false);
			getch(); //pega as teclas apertadas
			endwin(); //finaliza ncurses
		}
};

int main(int argc, char **argv)
{
	SnakeGame s;

	return 0;
}
