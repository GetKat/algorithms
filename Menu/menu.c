#include <stdio.h>
#include <windows.h>

void start(void);
void options(void);
void saida(void);

int main(){
    int pos = 0;
    char *menu[] = {"Start.", "Options.", "Exit."};

    while(1){
        system("cls");

        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
        printf("Menu:\n\n");

        for(int i = 0; i < 3; i++){
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), pos == i? 11 : 15);
            printf("%s\n", menu[i]);
        }

        while(1){
            if(GetAsyncKeyState(VK_UP)){
                pos = (pos + 3 - 1) % 3;
                break;
            }
            else if(GetAsyncKeyState(VK_DOWN)){
                pos = (pos + 1) % 3;
                break;
            }
            else if(GetAsyncKeyState(VK_RETURN)){
                switch(pos){
                    case 0:
                        start();
                        break;
                    case 1:
                        options();
                        break;
                    case 2:
                        saida();
                        break;
                }
                break;
            }
            Sleep(250);
        }
        
    }
}

void start(void){
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
    printf("Starting...\n");
    Sleep(1000);
}

void options(void){
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
    printf("Option menu...\n");
    Sleep(1000);
}

void saida(void){
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
    printf("Exiting...\n");
    Sleep(1000);
}