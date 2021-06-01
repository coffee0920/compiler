#ifndef __LEX__H
#define __LEX__H
#define MAXLEN 256
typedef enum {
UNKNOWN, END, INT, VAR, ADDSUB, MULDIV, ASSIGN,LPAREN, RPAREN,NUL,SPACE
} Token;

/*
typedef enum
{
    UNKNOWN_INPUT, TWO_CONSECUTIVE_TERM, TWO_CONSECUTIVE_OPERATOR, LEFT_PAREN_ERROR, RIGHT_PAREN_ERROR, TWO_ASSIGN_IN_A_ROW
} Error;
*/

#define strMember(ch, set) (strchr(set, ch) != NULL) 


#endif
