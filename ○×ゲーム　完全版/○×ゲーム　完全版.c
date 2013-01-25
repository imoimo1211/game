#include <stdio.h>

int masu[3][3] = {{'1','2','3'},
				  {'4','5','6'},
                  {'7','8','9',}};

void masuprint(void);

int main(void)
{
	int i = 0;
	int m = 0;
	int tate = 0;
	int yoko = 0;
	printf("\n☆○×ゲーム☆\n");//タイトル表示
	masuprint();   //マスの表示
}

void masuprint(void){
    printf("┏━┳━┳━┓\n");
    printf("┃%2c┃%2c┃%2c┃\n",masu[0][0],masu[0][1],masu[0][2]);
    printf("┣━╋━╋━┫\n");
    printf("┃%2c┃%2c┃%2c┃\n",masu[1][0],masu[1][1],masu[1][2]);
    printf("┣━╋━╋━┫\n");
    printf("┃%2c┃%2c┃%2c┃\n",masu[2][0],masu[2][1],masu[2][2]);
    printf("┗━┻━┻━┛\n\n");
}