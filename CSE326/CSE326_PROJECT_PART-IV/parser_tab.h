#include"ast.h"
typedef union {
        int inum;
        float fnum;
        char * id;
        nodeType * nptr;
} YYSTYPE;
#define	VARIABLE	258
#define	INTEGER_NUMBER	259
#define	DECIMAL_NUMBER	260
#define	INTEGER_TYPE	261
#define	FLOAT_TYPE	262
#define	VOID	263
#define	FOR	264
#define	DO	265
#define	WHILE	266
#define	IF	267
#define	ELSE	268
#define	RETURN	269
#define	GE	270
#define	LE	271
#define	EQ	272
#define	NE	273
#define	AND	274
#define	OR	275
#define	NEWLINE	276
#define	COMENTS	277


extern YYSTYPE yylval;
