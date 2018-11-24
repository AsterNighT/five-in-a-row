#pragma once
// Class for game board

struct Move {
    int cordx, cordy;
    int player;
};
struct Board {
    int         board[15][15];
    struct Move moves[255];
    int         movesCount;
    int         currentPlayer;
    int         gameStatus;
};
struct CharPair {
    char fst, snd;
};
struct Board*   newBoard();
int             startGameBoard(struct Board* board, int type, char* data);
int             clearBoard(struct Board* board);
int             displayBoard(struct Board* board);
int             placePieceBoard(struct Board* board, int cordx, int cordy);
int             undoBoard(struct Board* board);
int             checkStatusBoard(struct Board* board);
char*           saveBoard(struct Board* board);
int             loadBoard(struct Board* board, char* saveData);
char*           saveReplayBoard(struct Board* board);
int             playReplayBoard(struct Board* board, char* replayData);
struct CharPair encodeMove(struct Move move);
struct Move     decodeMove(struct CharPair code);