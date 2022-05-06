#include <stdio.h>
#include <time.h>

int difficultyLevel;
int difficultySelectDummy1, difficultySelectDummy2, difficultySelectDummy3 = 0, difficultySelectIndex = 0;
int difficultyLevel;

int gameOn, gameTurnIndex, gameThiefInput, validInput, gameExit;

int posPoliceX, posPoliceY, posThiefX, posThiefY;

int gameIndex1, gameIndex2;

int wallAhead;
    
int difficultySelect();

int printMap(int posPoliceX, int posPoliceY, int posThiefX, int posThiefY);

int easyRand, hardRand, impossibleRand;

int policeMoveIndex, policeMoveIndex2;


int main(){
    system("clear");
    srand(time(NULL));
    gameExit = 0;
    // 1 is right, 2 is up, 3 is left and 4 is down.
    // game functionality will be written in the main function and will not be declared as a discrete function.
    while(gameExit != 1){
        gameOn = 1;
        difficultyLevel = difficultySelect();
        gameTurnIndex = 1;
        while(gameOn == 1){
            if(gameTurnIndex == 1){
                // initial positions of police and thief will be assigned by a modified random function
                posPoliceX = 6;
                posPoliceY = 10;
                posThiefX = 2;
                posThiefY = 4;
            }
            // input will be taken from the user first
            
            validInput = 1;
            while(validInput == 1){
                
                if(wallAhead == 1){
                    printf("\nWALL AHEAD! Go another direction: \n\n");
                }else{
                    printf("\nMake your move using WASD: \n\n");
                }
                scanf("%c", &gameThiefInput);
                system("clear");
                printMap(posPoliceX, posPoliceY, posThiefX, posThiefY);
                if((gameThiefInput == 'D') || (gameThiefInput == 'd')){
                    if(((posThiefY == 2) && (posThiefX == 16)) || ((posThiefY == 3) && (posThiefX == 16)) || ((posThiefY == 4) && (posThiefX == 4)) || ((posThiefY == 4) && (posThiefX == 14)) || ((posThiefY == 4) && (posThiefX == 26)) || ((posThiefY == 5) && (posThiefX == 26)) || ((posThiefY == 5) && (posThiefX == 4)) || ((posThiefY == 7) && (posThiefX == 12)) || ((posThiefY == 8) && (posThiefX == 12)) || ((posThiefY == 10) && (posThiefX == 20)) || ((posThiefY == 11) && (posThiefX == 20)) || ((posThiefY == 11) && (posThiefX == 6)) || ((posThiefY == 12) && (posThiefX == 10)) || ((posThiefY == 12) && (posThiefX == 20)) || ((posThiefY == 13) && (posThiefX == 20)) || ((posThiefY == 14) && (posThiefX == 4)) || ((posThiefY == 15) && (posThiefX == 4)) || ((posThiefY == 16) && (posThiefX == 4)) || (posThiefX == 32)){
                        wallAhead = 1;
                        system("clear");
                        printMap(posPoliceX, posPoliceY, posThiefX, posThiefY);
                    }else{
                        posThiefX++; posThiefX++;
                        validInput--;
                        wallAhead = 0;
                    }
                }else if((gameThiefInput == 'W') || (gameThiefInput == 'w')){
                    if(((posThiefY == 6) && (posThiefX == 6)) || ((posThiefY == 5) && (posThiefX == 16)) || ((posThiefY == 5) && (posThiefX == 18)) || ((posThiefY == 5) && (posThiefX == 20)) || ((posThiefY == 6) && (posThiefX == 28)) || ((posThiefY == 9) && (posThiefX == 14)) || ((posThiefY == 8) && (posThiefX == 16)) || ((posThiefY == 8) && (posThiefX == 18)) || ((posThiefY == 12) && (posThiefX == 8)) || ((posThiefY == 12) && (posThiefX == 10)) || ((posThiefY == 13) && (posThiefX == 12)) || ((posThiefY == 14) && (posThiefX == 22)) || ((posThiefY == 14) && (posThiefX == 24)) || ((posThiefY == 17) && (posThiefX == 6)) || ((posThiefY == 17) && (posThiefX == 8)) || ((posThiefY == 17) && (posThiefX == 10)) || (posThiefY == 2)){
                        wallAhead = 1;
                        system("clear");
                        printMap(posPoliceX, posPoliceY, posThiefX, posThiefY);
                    }else{
                        posThiefY--;
                        validInput--;
                        wallAhead = 0;
                    }
                }else if((gameThiefInput == 'A') || (gameThiefInput == 'a')){
                    if(((posThiefY == 2) && (posThiefX == 20)) || ((posThiefY == 3) && (posThiefX == 20)) || ((posThiefY == 4) && (posThiefX == 8)) || ((posThiefY == 4) && (posThiefX == 22)) || ((posThiefY == 4) && (posThiefX == 30)) || ((posThiefY == 5) && (posThiefX == 30)) || ((posThiefY == 5) && (posThiefX == 8)) || ((posThiefY == 7) && (posThiefX == 16)) || ((posThiefY == 8) && (posThiefX == 16)) || ((posThiefY == 10) && (posThiefX == 24)) || ((posThiefY == 11) && (posThiefX == 24)) || ((posThiefY == 11) && (posThiefX == 10)) || ((posThiefY == 12) && (posThiefX == 14)) || ((posThiefY == 12) && (posThiefX == 24)) || ((posThiefY == 13) && (posThiefX == 26)) || ((posThiefY == 14) && (posThiefX == 8)) || ((posThiefY == 15) && (posThiefX == 8)) || ((posThiefY == 16) && (posThiefX == 12)) || (posThiefX == 2)){
                        wallAhead = 1;
                        system("clear");
                        printMap(posPoliceX, posPoliceY, posThiefX, posThiefY);
                    }else{
                        posThiefX--; posThiefX--;
                        validInput--;
                        wallAhead = 0;
                    }
                }else if((gameThiefInput == 'S') || (gameThiefInput == 's')){
                    if(((posThiefY == 3) && (posThiefX == 6)) || ((posThiefY == 3) && (posThiefX == 16)) || ((posThiefY == 3) && (posThiefX == 20)) || ((posThiefY == 3) && (posThiefX == 28)) || ((posThiefY == 6) && (posThiefX == 14)) || ((posThiefY == 6) && (posThiefX == 16)) || ((posThiefY == 6) && (posThiefX == 18)) || ((posThiefY == 10) && (posThiefX == 8)) || ((posThiefY == 10) && (posThiefX == 10)) || ((posThiefY == 10) && (posThiefX == 12)) || ((posThiefY == 9) && (posThiefX == 22)) || ((posThiefY == 12) && (posThiefX == 24)) || ((posThiefY == 13) && (posThiefX == 6)) || ((posThiefY == 15) && (posThiefX == 8)) || ((posThiefY == 15) && (posThiefX == 10)) || (posThiefY == 17)){
                        wallAhead = 1;
                        system("clear");
                        printMap(posPoliceX, posPoliceY, posThiefX, posThiefY);
                    }else{
                        posThiefY++;
                        validInput--;
                        wallAhead = 0;
                    }
                }else{
                }
            }
            // then the algorithm, which will be declared as follows, will make its move.
            if(difficultyLevel == 1){ //algorithm for the easy mode
                // police will wander around randomly
                policeMoveIndex = 0;
                policeMoveIndex2 = 0;
                easyRand = (rand() % 4) + 1;
                while(policeMoveIndex == 0){
                    if((easyRand == 1)){
                        if(((posPoliceY == 2) && (posPoliceX == 16)) || ((posPoliceY == 3) && (posPoliceX == 16)) || ((posPoliceY == 4) && (posPoliceX == 4)) || ((posPoliceY == 4) && (posPoliceX == 14)) || ((posPoliceY == 4) && (posPoliceX == 26)) || ((posPoliceY == 5) && (posPoliceX == 26)) || ((posPoliceY == 5) && (posPoliceX == 4)) || ((posPoliceY == 7) && (posPoliceX == 12)) || ((posPoliceY == 8) && (posPoliceX == 12)) || ((posPoliceY == 10) && (posPoliceX == 20)) || ((posPoliceY == 11) && (posPoliceX == 20)) || ((posPoliceY == 11) && (posPoliceX == 6)) || ((posPoliceY == 12) && (posPoliceX == 10)) || ((posPoliceY == 12) && (posPoliceX == 20)) || ((posPoliceY == 13) && (posPoliceX == 20)) || ((posPoliceY == 14) && (posPoliceX == 4)) || ((posPoliceY == 15) && (posPoliceX == 4)) || ((posPoliceY == 16) && (posPoliceX == 4)) || (posPoliceX == 32)){
                            if(policeMoveIndex2 == 0){
                                easyRand++;
                            }else{
                                easyRand--;
                            }
                        }else{
                            posPoliceX++; posPoliceX++;
                            policeMoveIndex++;
                        }
                    }else if((easyRand == 2)){
                        if(((posPoliceY == 6) && (posPoliceX == 6)) || ((posPoliceY == 5) && (posPoliceX == 16)) || ((posPoliceY == 5) && (posPoliceX == 18)) || ((posPoliceY == 5) && (posPoliceX == 20)) || ((posPoliceY == 6) && (posPoliceX == 28)) || ((posPoliceY == 9) && (posPoliceX == 14)) || ((posPoliceY == 8) && (posPoliceX == 16)) || ((posPoliceY == 8) && (posPoliceX == 18)) || ((posPoliceY == 12) && (posPoliceX == 8)) || ((posPoliceY == 12) && (posPoliceX == 10)) || ((posPoliceY == 13) && (posPoliceX == 12)) || ((posPoliceY == 14) && (posPoliceX == 22)) || ((posPoliceY == 14) && (posPoliceX == 24)) || ((posPoliceY == 17) && (posPoliceX == 6)) || ((posPoliceY == 17) && (posPoliceX == 8)) || ((posPoliceY == 17) && (posPoliceX == 10)) || (posPoliceY == 2)){
                            if(policeMoveIndex2 == 0){
                                easyRand++;
                            }else{
                                easyRand--;
                            }
                        }else{
                            posPoliceY--;
                            policeMoveIndex++;
                        }
                    }else if((easyRand == 3)){
                        if(((posPoliceY == 2) && (posPoliceX == 20)) || ((posPoliceY == 3) && (posPoliceX == 20)) || ((posPoliceY == 4) && (posPoliceX == 8)) || ((posPoliceY == 4) && (posPoliceX == 22)) || ((posPoliceY == 4) && (posPoliceX == 30)) || ((posPoliceY == 5) && (posPoliceX == 30)) || ((posPoliceY == 5) && (posPoliceX == 8)) || ((posPoliceY == 7) && (posPoliceX == 16)) || ((posPoliceY == 8) && (posPoliceX == 16)) || ((posPoliceY == 10) && (posPoliceX == 24)) || ((posPoliceY == 11) && (posPoliceX == 24)) || ((posPoliceY == 11) && (posPoliceX == 10)) || ((posPoliceY == 12) && (posPoliceX == 14)) || ((posPoliceY == 12) && (posPoliceX == 24)) || ((posPoliceY == 13) && (posPoliceX == 26)) || ((posPoliceY == 14) && (posPoliceX == 8)) || ((posPoliceY == 15) && (posPoliceX == 8)) || ((posPoliceY == 16) && (posPoliceX == 12)) || (posPoliceX == 2)){
                            if(policeMoveIndex2 == 0){
                                easyRand++;
                            }else{
                                easyRand--;
                            }
                        }else{
                            posPoliceX--; posPoliceX--;
                            policeMoveIndex++;
                        }
                    }else if((easyRand == 4)){
                        if(((posPoliceY == 3) && (posPoliceX == 6)) || ((posPoliceY == 3) && (posPoliceX == 16)) || ((posPoliceY == 3) && (posPoliceX == 20)) || ((posPoliceY == 3) && (posPoliceX == 28)) || ((posPoliceY == 6) && (posPoliceX == 14)) || ((posPoliceY == 6) && (posPoliceX == 16)) || ((posPoliceY == 6) && (posPoliceX == 18)) || ((posPoliceY == 10) && (posPoliceX == 8)) || ((posPoliceY == 10) && (posPoliceX == 10)) || ((posPoliceY == 10) && (posPoliceX == 12)) || ((posPoliceY == 9) && (posPoliceX == 22)) || ((posPoliceY == 12) && (posPoliceX == 24)) || ((posPoliceY == 13) && (posPoliceX == 6)) || ((posPoliceY == 15) && (posPoliceX == 8)) || ((posPoliceY == 15) && (posPoliceX == 10)) || (posPoliceY == 17)){
                            easyRand--;
                            policeMoveIndex2++;
                        }else{
                            posPoliceY++;
                            policeMoveIndex++;
                        }
                    }
                }
            }else if(difficultyLevel == 2){ //algorithm for the hard mode
                // police will make its move straight to the thief by the closest distance
            }else if(difficultyLevel == 3){ //algorithm for the impossible mode
                // police will wander around the escape point and will change its position around the escape based on the closest distance between the thief
            }else{
                printf("sth is wrong");
            }

            // and the results will be printed in the next loop
            gameTurnIndex++;
            if((posPoliceX == posThiefX) && (posThiefY == posPoliceY)){
                printf("You have been caught :(\n\n");
                gameOn = 0;
            }else if((posThiefX == 2) && (posThiefY == 9)){
                printf("You have escaped succesfully!\n\n");
                gameOn = 0;
            }
        }
    }
    return 0;
}

int difficultySelect(){
    difficultySelectDummy3 = 0, difficultySelectIndex = 0;
    while(difficultySelectDummy3 == 0){
        system("clear");
        printf("\nSELECT THE DIFFICULTY\n---------------------\n1] EASY\n2] HARD\n3] IMPOSSIBLE!!!\n---------------------\n");
        if(difficultySelectIndex == 0){
            printf("Return a number to select difficulty: ");
            scanf("%d",&difficultySelectDummy1);
            difficultySelectIndex++;
        }else{
            printf("Please enter a valid number to select difficulty: ");
            scanf("%d",&difficultySelectDummy1);
        }
        if((difficultySelectDummy1 == 1) || (difficultySelectDummy1 == 2) || (difficultySelectDummy1 == 3)){
            difficultySelectDummy3++;
        }
    }
    return difficultySelectDummy1;
}

int printMap(int posPoliceX, int posPoliceY, int posThiefX, int posThiefY){
    gameIndex1 = 1, gameIndex2 = 1;
    while(gameIndex1 <= 17){
        gameIndex2 = 1;
        while(gameIndex2 <= 33){
            if(((gameIndex1 == 2) && (gameIndex2 == 18)) || ((gameIndex1 == 3) && (gameIndex2 == 18)) || ((gameIndex1 == 4) && (gameIndex2 == 6)) || ((gameIndex1 == 4) && (gameIndex2 == 16)) || ((gameIndex1 == 4) && (gameIndex2 == 18)) || ((gameIndex1 == 4) && (gameIndex2 == 20)) || ((gameIndex1 == 4) && (gameIndex2 == 28)) || ((gameIndex1 == 5) && (gameIndex2 == 6)) || ((gameIndex1 == 5) && (gameIndex2 == 28)) || ((gameIndex1 == 7) && (gameIndex2 == 14)) || ((gameIndex1 == 7) && (gameIndex2 == 16)) || ((gameIndex1 == 7) && (gameIndex2 == 18)) || ((gameIndex1 == 8) && (gameIndex2 == 14)) || ((gameIndex1 == 10) && (gameIndex2 == 22)) || ((gameIndex1 == 11) && (gameIndex2 == 8)) || ((gameIndex1 == 11) && (gameIndex2 == 10)) || ((gameIndex1 == 11) && (gameIndex2 == 12)) || ((gameIndex1 == 11) && (gameIndex2 == 22)) || ((gameIndex1 == 12) && (gameIndex2 == 12)) || ((gameIndex1 == 12) && (gameIndex2 == 22)) || ((gameIndex1 == 13) && (gameIndex2 == 22)) || ((gameIndex1 == 13) && (gameIndex2 == 24)) || ((gameIndex1 == 14) && (gameIndex2 == 6)) || ((gameIndex1 == 15) && (gameIndex2 == 6)) || ((gameIndex1 == 16) && (gameIndex2 == 6)) || ((gameIndex1 == 16) && (gameIndex2 == 8)) || ((gameIndex1 == 16) && (gameIndex2 == 10))){
                printf("W");
            
            }else if((gameIndex1 == posThiefY) && (gameIndex2 == posThiefX)){
                printf("T");
            }else if((gameIndex1 == posPoliceY) && (gameIndex2 == posPoliceX)){
                printf("P");
            }else if(gameIndex1 == 1){
                if((gameIndex2 % 2) == 0){
                printf("_");
                }else{
                printf(" ");
                }
            }else if((gameIndex1 == 9) && (gameIndex2 == 2)){
                printf("E");
            }else if((gameIndex2 % 2) == 0){
                printf("_");
            }else{
                printf("|");
            }
            gameIndex2++;
        }
        printf("\n");
        gameIndex1++;
    }
    printf("\n");
}