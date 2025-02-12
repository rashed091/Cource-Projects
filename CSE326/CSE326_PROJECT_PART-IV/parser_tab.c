
/*  A Bison parser, made from parser.y with Bison version GNU Bison version 1.24
  */

#define YYBISON 1  /* Identify Bison output.  */

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

#line 1 "parser.y"

        /*
        Name: MD.Rasheduzzaman
        ID: 0910647044
        PROJECT: PART-IV
    */
        #include<stdio.h>
        #include<string.h>
        #include"symbol.h"
        #include"ast.h"
        #include"cg.h"

        void yyerror(char * s);
        void print_match();
        char * newtemp();
        char * ret_opr(int op);
        void emit_relop();

        int is_bool_exp=0;
        int nextstat=100;
        int iii=0;
        int tempvar=1;
        char * newvar;
        char * newopr;
        FILE * outfile;

#line 28 "parser.y"
typedef union {
        int inum;
        float fnum;
        char * id;
        nodeType * nptr;
} YYSTYPE;

#ifndef YYLTYPE
typedef
  struct yyltype
    {
      int timestamp;
      int first_line;
      int first_column;
      int last_line;
      int last_column;
      char *text;
   }
  yyltype;

#define YYLTYPE yyltype
#endif

#ifndef YYDEBUG
#define YYDEBUG 1
#endif

#include <stdio.h>

#ifndef __cplusplus
#ifndef __STDC__
#define const
#endif
#endif



#define	YYFINAL		110
#define	YYFLAG		-32768
#define	YYNTBASE	38

#define YYTRANSLATE(x) ((unsigned)(x) <= 277 ? yytranslate[x] : 63)

static const char yytranslate[] = {     0,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,    37,     2,     2,     2,    27,     2,     2,    34,
    35,    25,    23,    31,    24,     2,    26,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,    30,    29,
    36,    28,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,    32,     2,    33,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     1,     2,     3,     4,     5,
     6,     7,     8,     9,    10,    11,    12,    13,    14,    15,
    16,    17,    18,    19,    20,    21,    22
};

#if YYDEBUG != 0
static const short yyprhs[] = {     0,
     0,     2,     5,     7,    11,    13,    15,    17,    21,    23,
    25,    30,    36,    40,    42,    44,    45,    48,    51,    54,
    55,    58,    59,    63,    65,    67,    69,    71,    74,    78,
    81,    91,    97,   105,   111,   119,   123,   125,   128,   130,
   132,   134,   136,   138,   140,   144,   146,   148,   152,   154,
   156,   158,   160,   162,   164,   166,   168,   170,   172,   174,
   176,   178
};

static const short yyrhs[] = {    39,
     0,    40,    39,     0,    44,     0,    41,    42,    30,     0,
     8,     0,     6,     0,     7,     0,    42,    31,    43,     0,
    43,     0,     3,     0,    45,    32,    48,    33,     0,    41,
     3,    34,    46,    35,     0,    46,    31,    47,     0,    47,
     0,     8,     0,     0,    41,     3,     0,    49,    50,     0,
    40,    49,     0,     0,    50,    51,     0,     0,    32,    50,
    33,     0,    52,     0,    53,     0,    54,     0,    55,     0,
    56,    30,     0,    14,    56,    30,     0,    14,    30,     0,
     9,    34,    56,    30,    56,    30,    56,    35,    51,     0,
    11,    34,    56,    35,    51,     0,    10,    51,    11,    34,
    56,    35,    30,     0,    12,    34,    56,    35,    51,     0,
    12,    34,    56,    35,    51,    13,    51,     0,    57,    36,
    56,     0,    61,     0,    58,    57,     0,    59,     0,    23,
     0,    24,     0,    37,     0,     3,     0,    60,     0,    34,
    56,    35,     0,     4,     0,     5,     0,    61,    62,    57,
     0,    57,     0,    23,     0,    24,     0,    25,     0,    26,
     0,    27,     0,    29,     0,    28,     0,    16,     0,    17,
     0,    18,     0,    15,     0,    19,     0,    20,     0
};

#endif

#if YYDEBUG != 0
static const short yyrline[] = { 0,
    60,    63,    64,    67,    74,    78,    82,    88,    92,    98,
   111,   114,   117,   118,   119,   120,   123,   126,   129,   130,
   133,   134,   137,   138,   139,   140,   141,   142,   146,   147,
   150,   153,   156,   159,   160,   163,   208,   214,   215,   221,
   222,   223,   226,   241,   245,   248,   252,   258,   574,   580,
   584,   588,   592,   596,   600,   604,   608,   612,   616,   620,
   624,   628
};

static const char * const yytname[] = {   "$","error","$undefined.","VARIABLE",
"INTEGER_NUMBER","DECIMAL_NUMBER","INTEGER_TYPE","FLOAT_TYPE","VOID","FOR","DO",
"WHILE","IF","ELSE","RETURN","GE","LE","EQ","NE","AND","OR","NEWLINE","COMENTS",
"'+'","'-'","'*'","'/'","'%'","'>'","'<'","';'","','","'{'","'}'","'('","')'",
"'='","'!'","program","external","declaration","type_name","variable_list","variable",
"function","function_header","parameter_list","parameter","function_body","internal",
"statement_list","statement","for_statement","while_statement","dowhile_statement",
"if_statement","expression","unary_expression","unary_operator","primary_expression",
"constant","binary_expression","binary_operator",""
};
#endif

static const short yyr1[] = {     0,
    38,    39,    39,    40,    41,    41,    41,    42,    42,    43,
    44,    45,    46,    46,    46,    46,    47,    48,    49,    49,
    50,    50,    51,    51,    51,    51,    51,    51,    51,    51,
    52,    53,    54,    55,    55,    56,    56,    57,    57,    58,
    58,    58,    59,    59,    59,    60,    60,    61,    61,    62,
    62,    62,    62,    62,    62,    62,    62,    62,    62,    62,
    62,    62
};

static const short yyr2[] = {     0,
     1,     2,     1,     3,     1,     1,     1,     3,     1,     1,
     4,     5,     3,     1,     1,     0,     2,     2,     2,     0,
     2,     0,     3,     1,     1,     1,     1,     2,     3,     2,
     9,     5,     7,     5,     7,     3,     1,     2,     1,     1,
     1,     1,     1,     1,     3,     1,     1,     3,     1,     1,
     1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
     1,     1
};

static const short yydefact[] = {     0,
     6,     7,     5,     1,     0,     0,     3,     0,     2,    10,
     0,     9,    20,    16,     4,     0,    20,     0,     0,    22,
    15,     0,     0,    14,    10,     8,    19,    11,    18,    17,
     0,    12,    43,    46,    47,     0,     0,     0,     0,     0,
    40,    41,    22,     0,    42,    21,    24,    25,    26,    27,
     0,    49,     0,    39,    44,    37,    13,     0,     0,     0,
     0,    30,     0,     0,     0,    28,     0,    38,    60,    57,
    58,    59,    61,    62,    50,    51,    52,    53,    54,    56,
    55,     0,     0,     0,     0,     0,    29,    23,    45,    36,
    48,     0,     0,     0,     0,     0,     0,    32,    34,     0,
     0,     0,     0,    33,    35,     0,    31,     0,     0,     0
};

static const short yydefgoto[] = {   108,
     4,     5,     6,    11,    12,     7,     8,    23,    24,    19,
    20,    29,    46,    47,    48,    49,    50,    51,    52,    53,
    54,    55,    56,    82
};

static const short yypact[] = {    17,
-32768,-32768,-32768,-32768,    17,    -1,-32768,   -28,-32768,   -23,
   -21,-32768,    17,    40,-32768,    15,    17,    15,     0,-32768,
    36,    41,   -15,-32768,-32768,-32768,-32768,-32768,    63,-32768,
    17,-32768,-32768,-32768,-32768,     9,    63,    18,    30,    26,
-32768,-32768,-32768,    75,-32768,-32768,-32768,-32768,-32768,-32768,
    25,    34,    75,-32768,-32768,    98,-32768,    75,    51,    75,
    75,-32768,    46,     3,    16,-32768,    75,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,    75,    52,    37,    48,    49,-32768,-32768,-32768,-32768,
-32768,    75,    75,    63,    63,    55,    53,-32768,    68,    75,
    59,    63,    56,-32768,-32768,    63,-32768,    90,    92,-32768
};

static const short yypgoto[] = {-32768,
    88,    21,    28,-32768,    78,-32768,-32768,-32768,    65,-32768,
    84,    60,   -37,-32768,-32768,-32768,-32768,   -39,   -50,-32768,
-32768,-32768,-32768,-32768
};


#define	YYLAST		127


static const short yytable[] = {    59,
    63,    10,    68,    13,    65,    33,    34,    35,    15,    16,
    14,    36,    37,    38,    39,    31,    40,    25,    83,    32,
    85,    86,     1,     2,     3,    41,    42,    90,    33,    34,
    35,    91,    28,    17,    43,    88,    44,    17,    -5,    45,
    18,    22,    58,    30,    18,     1,     2,    21,    41,    42,
    89,    60,    96,    97,    66,    62,    98,    99,    22,    44,
   103,    84,    45,    61,   105,    33,    34,    35,   107,    67,
    93,    36,    37,    38,    39,    87,    40,    33,    34,    35,
   102,    92,    94,    95,   100,    41,    42,   101,   104,   109,
   106,   110,     9,    26,    43,    57,    44,    41,    42,    45,
    27,     0,    64,     0,     0,     0,     0,     0,    44,     0,
     0,    45,    69,    70,    71,    72,    73,    74,     0,     0,
    75,    76,    77,    78,    79,    80,    81
};

static const short yycheck[] = {    37,
    40,     3,    53,    32,    44,     3,     4,     5,    30,    31,
    34,     9,    10,    11,    12,    31,    14,     3,    58,    35,
    60,    61,     6,     7,     8,    23,    24,    67,     3,     4,
     5,    82,    33,    13,    32,    33,    34,    17,     3,    37,
    13,    14,    34,     3,    17,     6,     7,     8,    23,    24,
    35,    34,    92,    93,    30,    30,    94,    95,    31,    34,
   100,    11,    37,    34,   102,     3,     4,     5,   106,    36,
    34,     9,    10,    11,    12,    30,    14,     3,     4,     5,
    13,    30,    35,    35,    30,    23,    24,    35,    30,     0,
    35,     0,     5,    16,    32,    31,    34,    23,    24,    37,
    17,    -1,    43,    -1,    -1,    -1,    -1,    -1,    34,    -1,
    -1,    37,    15,    16,    17,    18,    19,    20,    -1,    -1,
    23,    24,    25,    26,    27,    28,    29
};
/* -*-C-*-  Note some compilers choke on comments on `#line' lines.  */
#line 3 "bison.simple"

/* Skeleton output parser for bison,
   Copyright (C) 1984, 1989, 1990 Free Software Foundation, Inc.

   This program is free software; you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation; either version 2, or (at your option)
   any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program; if not, write to the Free Software
   Foundation, Inc., 675 Mass Ave, Cambridge, MA 02139, USA.  */

/* As a special exception, when this file is copied by Bison into a
   Bison output file, you may use that output file without restriction.
   This special exception was added by the Free Software Foundation
   in version 1.24 of Bison.  */

#ifndef alloca
#ifdef __GNUC__
#define alloca __builtin_alloca
#else /* not GNU C.  */
#if (!defined (__STDC__) && defined (sparc)) || defined (__sparc__) || defined (__sparc) || defined (__sgi)
#include <alloca.h>
#else /* not sparc */
#if defined (MSDOS) && !defined (__TURBOC__)
#include <malloc.h>
#else /* not MSDOS, or __TURBOC__ */
#if defined(_AIX)
#include <malloc.h>
 #pragma alloca
#else /* not MSDOS, __TURBOC__, or _AIX */
#ifdef __hpux
#ifdef __cplusplus
extern "C" {
void *alloca (unsigned int);
};
#else /* not __cplusplus */
void *alloca ();
#endif /* not __cplusplus */
#endif /* __hpux */
#endif /* not _AIX */
#endif /* not MSDOS, or __TURBOC__ */
#endif /* not sparc.  */
#endif /* not GNU C.  */
#endif /* alloca not defined.  */

/* This is the parser code that is written into each bison parser
  when the %semantic_parser declaration is not specified in the grammar.
  It was written by Richard Stallman by simplifying the hairy parser
  used when %semantic_parser is specified.  */

/* Note: there must be only one dollar sign in this file.
   It is replaced by the list of actions, each action
   as one case of the switch.  */

#define yyerrok		(yyerrstatus = 0)
#define yyclearin	(yychar = YYEMPTY)
#define YYEMPTY		-2
#define YYEOF		0
#define YYACCEPT	return(0)
#define YYABORT 	return(1)
#define YYERROR		goto yyerrlab1
/* Like YYERROR except do call yyerror.
   This remains here temporarily to ease the
   transition to the new meaning of YYERROR, for GCC.
   Once GCC version 2 has supplanted version 1, this can go.  */
#define YYFAIL		goto yyerrlab
#define YYRECOVERING()  (!!yyerrstatus)
#define YYBACKUP(token, value) \
do								\
  if (yychar == YYEMPTY && yylen == 1)				\
    { yychar = (token), yylval = (value);			\
      yychar1 = YYTRANSLATE (yychar);				\
      YYPOPSTACK;						\
      goto yybackup;						\
    }								\
  else								\
    { yyerror ("syntax error: cannot back up"); YYERROR; }	\
while (0)

#define YYTERROR	1
#define YYERRCODE	256

#ifndef YYPURE
#define YYLEX		yylex()
#endif

#ifdef YYPURE
#ifdef YYLSP_NEEDED
#ifdef YYLEX_PARAM
#define YYLEX		yylex(&yylval, &yylloc, YYLEX_PARAM)
#else
#define YYLEX		yylex(&yylval, &yylloc)
#endif
#else /* not YYLSP_NEEDED */
#ifdef YYLEX_PARAM
#define YYLEX		yylex(&yylval, YYLEX_PARAM)
#else
#define YYLEX		yylex(&yylval)
#endif
#endif /* not YYLSP_NEEDED */
#endif

/* If nonreentrant, generate the variables here */

#ifndef YYPURE

int	yychar;			/*  the lookahead symbol		*/
YYSTYPE	yylval;			/*  the semantic value of the		*/
                                /*  lookahead symbol			*/

#ifdef YYLSP_NEEDED
YYLTYPE yylloc;			/*  location data for the lookahead	*/
                                /*  symbol				*/
#endif

int yynerrs;			/*  number of parse errors so far       */
#endif  /* not YYPURE */

#if YYDEBUG != 0
int yydebug;			/*  nonzero means print parse trace	*/
/* Since this is uninitialized, it does not stop multiple parsers
   from coexisting.  */
#endif

/*  YYINITDEPTH indicates the initial size of the parser's stacks	*/

#ifndef	YYINITDEPTH
#define YYINITDEPTH 200
#endif

/*  YYMAXDEPTH is the maximum size the stacks can grow to
    (effective only if the built-in stack extension method is used).  */

#if YYMAXDEPTH == 0
#undef YYMAXDEPTH
#endif

#ifndef YYMAXDEPTH
#define YYMAXDEPTH 10000
#endif

/* Prevent warning if -Wstrict-prototypes.  */
#ifdef __GNUC__
int yyparse (void);
#endif

#if __GNUC__ > 1		/* GNU C and GNU C++ define this.  */
#define __yy_memcpy(FROM,TO,COUNT)	__builtin_memcpy(TO,FROM,COUNT)
#else				/* not GNU C or C++ */
#ifndef __cplusplus

/* This is the most reliable way to avoid incompatibilities
   in available built-in functions on various systems.  */
static void
__yy_memcpy (from, to, count)
     char *from;
     char *to;
     int count;
{
  register char *f = from;
  register char *t = to;
  register int i = count;

  while (i-- > 0)
    *t++ = *f++;
}

#else /* __cplusplus */

/* This is the most reliable way to avoid incompatibilities
   in available built-in functions on various systems.  */
static void
__yy_memcpy (char *from, char *to, int count)
{
  register char *f = from;
  register char *t = to;
  register int i = count;

  while (i-- > 0)
    *t++ = *f++;
}

#endif
#endif

#line 192 "bison.simple"

/* The user can define YYPARSE_PARAM as the name of an argument to be passed
   into yyparse.  The argument should have type void *.
   It should actually point to an object.
   Grammar actions can access the variable by casting it
   to the proper pointer type.  */

#ifdef YYPARSE_PARAM
#define YYPARSE_PARAM_DECL void *YYPARSE_PARAM;
#else
#define YYPARSE_PARAM
#define YYPARSE_PARAM_DECL
#endif

int
yyparse(YYPARSE_PARAM)
     YYPARSE_PARAM_DECL
{
  register int yystate;
  register int yyn;
  register short *yyssp;
  register YYSTYPE *yyvsp;
  int yyerrstatus;	/*  number of tokens to shift before error messages enabled */
  int yychar1 = 0;		/*  lookahead token as an internal (translated) token number */

  short	yyssa[YYINITDEPTH];	/*  the state stack			*/
  YYSTYPE yyvsa[YYINITDEPTH];	/*  the semantic value stack		*/

  short *yyss = yyssa;		/*  refer to the stacks thru separate pointers */
  YYSTYPE *yyvs = yyvsa;	/*  to allow yyoverflow to reallocate them elsewhere */

#ifdef YYLSP_NEEDED
  YYLTYPE yylsa[YYINITDEPTH];	/*  the location stack			*/
  YYLTYPE *yyls = yylsa;
  YYLTYPE *yylsp;

#define YYPOPSTACK   (yyvsp--, yyssp--, yylsp--)
#else
#define YYPOPSTACK   (yyvsp--, yyssp--)
#endif

  int yystacksize = YYINITDEPTH;

#ifdef YYPURE
  int yychar;
  YYSTYPE yylval;
  int yynerrs;
#ifdef YYLSP_NEEDED
  YYLTYPE yylloc;
#endif
#endif

  YYSTYPE yyval;		/*  the variable used to return		*/
                                /*  semantic values from the action	*/
                                /*  routines				*/

  int yylen;

#if YYDEBUG != 0
  if (yydebug)
    fprintf(stderr, "Starting parse\n");
#endif

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY;		/* Cause a token to be read.  */

  /* Initialize stack pointers.
     Waste one element of value and location stack
     so that they stay on the same level as the state stack.
     The wasted elements are never initialized.  */

  yyssp = yyss - 1;
  yyvsp = yyvs;
#ifdef YYLSP_NEEDED
  yylsp = yyls;
#endif

/* Push a new state, which is found in  yystate  .  */
/* In all cases, when you get here, the value and location stacks
   have just been pushed. so pushing a state here evens the stacks.  */
yynewstate:

  *++yyssp = yystate;

  if (yyssp >= yyss + yystacksize - 1)
    {
      /* Give user a chance to reallocate the stack */
      /* Use copies of these so that the &'s don't force the real ones into memory. */
      YYSTYPE *yyvs1 = yyvs;
      short *yyss1 = yyss;
#ifdef YYLSP_NEEDED
      YYLTYPE *yyls1 = yyls;
#endif

      /* Get the current used size of the three stacks, in elements.  */
      int size = yyssp - yyss + 1;

#ifdef yyoverflow
      /* Each stack pointer address is followed by the size of
         the data in use in that stack, in bytes.  */
#ifdef YYLSP_NEEDED
      /* This used to be a conditional around just the two extra args,
         but that might be undefined if yyoverflow is a macro.  */
      yyoverflow("parser stack overflow",
                 &yyss1, size * sizeof (*yyssp),
                 &yyvs1, size * sizeof (*yyvsp),
                 &yyls1, size * sizeof (*yylsp),
                 &yystacksize);
#else
      yyoverflow("parser stack overflow",
                 &yyss1, size * sizeof (*yyssp),
                 &yyvs1, size * sizeof (*yyvsp),
                 &yystacksize);
#endif

      yyss = yyss1; yyvs = yyvs1;
#ifdef YYLSP_NEEDED
      yyls = yyls1;
#endif
#else /* no yyoverflow */
      /* Extend the stack our own way.  */
      if (yystacksize >= YYMAXDEPTH)
        {
          yyerror("parser stack overflow");
          return 2;
        }
      yystacksize *= 2;
      if (yystacksize > YYMAXDEPTH)
        yystacksize = YYMAXDEPTH;
      yyss = (short *) alloca (yystacksize * sizeof (*yyssp));
      __yy_memcpy ((char *)yyss1, (char *)yyss, size * sizeof (*yyssp));
      yyvs = (YYSTYPE *) alloca (yystacksize * sizeof (*yyvsp));
      __yy_memcpy ((char *)yyvs1, (char *)yyvs, size * sizeof (*yyvsp));
#ifdef YYLSP_NEEDED
      yyls = (YYLTYPE *) alloca (yystacksize * sizeof (*yylsp));
      __yy_memcpy ((char *)yyls1, (char *)yyls, size * sizeof (*yylsp));
#endif
#endif /* no yyoverflow */

      yyssp = yyss + size - 1;
      yyvsp = yyvs + size - 1;
#ifdef YYLSP_NEEDED
      yylsp = yyls + size - 1;
#endif

#if YYDEBUG != 0
      if (yydebug)
        fprintf(stderr, "Stack size increased to %d\n", yystacksize);
#endif

      if (yyssp >= yyss + yystacksize - 1)
        YYABORT;
    }

#if YYDEBUG != 0
  if (yydebug)
    fprintf(stderr, "Entering state %d\n", yystate);
#endif

  goto yybackup;
 yybackup:

/* Do appropriate processing given the current state.  */
/* Read a lookahead token if we need one and don't already have one.  */
/* yyresume: */

  /* First try to decide what to do without reference to lookahead token.  */

  yyn = yypact[yystate];
  if (yyn == YYFLAG)
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* yychar is either YYEMPTY or YYEOF
     or a valid token in external form.  */

  if (yychar == YYEMPTY)
    {
#if YYDEBUG != 0
      if (yydebug)
        fprintf(stderr, "Reading a token: ");
#endif
      yychar = YYLEX;
    }

  /* Convert token to internal form (in yychar1) for indexing tables with */

  if (yychar <= 0)		/* This means end of input. */
    {
      yychar1 = 0;
      yychar = YYEOF;		/* Don't call YYLEX any more */

#if YYDEBUG != 0
      if (yydebug)
        fprintf(stderr, "Now at end of input.\n");
#endif
    }
  else
    {
      yychar1 = YYTRANSLATE(yychar);

#if YYDEBUG != 0
      if (yydebug)
        {
          fprintf (stderr, "Next token is %d (%s", yychar, yytname[yychar1]);
          /* Give the individual parser a way to print the precise meaning
             of a token, for further debugging info.  */
#ifdef YYPRINT
          YYPRINT (stderr, yychar, yylval);
#endif
          fprintf (stderr, ")\n");
        }
#endif
    }

  yyn += yychar1;
  if (yyn < 0 || yyn > YYLAST || yycheck[yyn] != yychar1)
    goto yydefault;

  yyn = yytable[yyn];

  /* yyn is what to do for this token type in this state.
     Negative => reduce, -yyn is rule number.
     Positive => shift, yyn is new state.
       New state is final state => don't bother to shift,
       just return success.
     0, or most negative number => error.  */

  if (yyn < 0)
    {
      if (yyn == YYFLAG)
        goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }
  else if (yyn == 0)
    goto yyerrlab;

  if (yyn == YYFINAL)
    YYACCEPT;

  /* Shift the lookahead token.  */

#if YYDEBUG != 0
  if (yydebug)
    fprintf(stderr, "Shifting token %d (%s), ", yychar, yytname[yychar1]);
#endif

  /* Discard the token being shifted unless it is eof.  */
  if (yychar != YYEOF)
    yychar = YYEMPTY;

  *++yyvsp = yylval;
#ifdef YYLSP_NEEDED
  *++yylsp = yylloc;
#endif

  /* count tokens shifted since error; after three, turn off error status.  */
  if (yyerrstatus) yyerrstatus--;

  yystate = yyn;
  goto yynewstate;

/* Do the default action for the current state.  */
yydefault:

  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;

/* Do a reduction.  yyn is the number of a rule to reduce with.  */
yyreduce:
  yylen = yyr2[yyn];
  if (yylen > 0)
    yyval = yyvsp[1-yylen]; /* implement default value of the action */

#if YYDEBUG != 0
  if (yydebug)
    {
      int i;

      fprintf (stderr, "Reducing via rule %d (line %d), ",
               yyn, yyrline[yyn]);

      /* Print the symbols being reduced, and their result.  */
      for (i = yyprhs[yyn]; yyrhs[i] > 0; i++)
        fprintf (stderr, "%s ", yytname[yyrhs[i]]);
      fprintf (stderr, " -> %s\n", yytname[yyr1[yyn]]);
    }
#endif


  switch (yyn) {

case 4:
#line 68 "parser.y"
{
                                                        insertTree(yyvsp[-2].inum,yyvsp[-1].nptr);
                                                        freeNode(yyvsp[-1].nptr);
                                                ;
    break;}
case 5:
#line 75 "parser.y"
{
                                                        yyval.inum=yyvsp[0].inum;
                                                ;
    break;}
case 6:
#line 79 "parser.y"
{
                                                        yyval.inum=yyvsp[0].inum;
                                                ;
    break;}
case 7:
#line 83 "parser.y"
{
                                                        yyval.inum=yyvsp[0].inum;
                                                ;
    break;}
case 8:
#line 89 "parser.y"
{
                                                        yyval.nptr=mkNode(',',yyvsp[-2].nptr,yyvsp[0].nptr);
                                                ;
    break;}
case 9:
#line 93 "parser.y"
{
                                                        yyval.nptr=yyvsp[0].nptr;
                                                ;
    break;}
case 10:
#line 99 "parser.y"
{
                                                        if(!lookup(yyvsp[0].id)){
                                                                yyval.nptr=mkleafID(VARIABLE,yyvsp[0].id);
                                                        }
                                                        else{
                                                                printf("\n\n-------------------------------------------------");
                                                                printf("\n|  Error: Multiple Declaration of Variable '%s'! |",yyvsp[0].id);
                                                                printf("\n-------------------------------------------------\n\n");
                                                        }
                                                ;
    break;}
case 28:
#line 143 "parser.y"
{
                                                        freeNode(yyvsp[-1].nptr);
                                                ;
    break;}
case 36:
#line 164 "parser.y"
{
                                                        nodeType * temp1, * temp2, * temp3;
                                                        temp2 = yyvsp[-2].nptr;
                                                        temp3 = yyvsp[0].nptr;
                                                        yyval.nptr = mkNode('=',yyvsp[-2].nptr,yyvsp[0].nptr);
                                                        temp1 = yyval.nptr;
                                                        temp2->id.var_type=findType(temp2->id.variable_name);

                                                        if(temp2->id.var_type == INTEGER_TYPE && temp3->opr.var_type == INTEGER_TYPE){
                                                                temp1->id.var_type=INTEGER_TYPE;
                                                                fprintf (outfile, "%d:  %2s = %s\n",nextstat,temp2->id.variable_name,temp3->opr.temp_var);
                                                                nextstat++;
                                                                print_match();
                                                        }
                                                        else if(temp2->id.var_type == FLOAT_TYPE && temp3->opr.var_type == FLOAT_TYPE){
                                                                temp1->id.var_type=FLOAT_TYPE;
                                                                fprintf (outfile, "%d:  %2s = %s\n",nextstat,temp2->id.variable_name,temp3->opr.temp_var);
                                                                nextstat++;
                                                                print_match();
                                                        }
                                                        else if(temp2->id.var_type == INTEGER_TYPE && temp3->conI.var_type == INTEGER_TYPE){
                                                                temp1->id.var_type=INTEGER_TYPE;
                                                                fprintf (outfile, "%d:  %2s = %d\n",nextstat,temp2->id.variable_name,temp3->conI.value);
                                                                nextstat++;
                                                                print_match();
                                                        }
                                                        else if(temp2->id.var_type == FLOAT_TYPE && temp3->conF.var_type == FLOAT_TYPE){
                                                                temp1->id.var_type=FLOAT_TYPE;
                                                                fprintf (outfile, "%d:  %2s = %f\n",nextstat,temp2->id.variable_name,temp3->conF.value);
                                                                nextstat++;
                                                                print_match();
                                                        }
                                                        else if(temp2->id.var_type == findType(temp3->id.variable_name)){
                                                                temp1->id.var_type = temp2->id.var_type;
                                                                fprintf (outfile, "%d:  %2s = %s\n",nextstat,temp2->id.variable_name,temp3->id.variable_name);
                                                                nextstat++;
                                                                print_match();
                                                        }
                                                        else{
                                                                printf("\n\n----------------------------------------------");
                                                                printf("\n| Error in expression: type did not matched! |");
                                                                printf("\n----------------------------------------------\n\n");
                                                        }
                                                ;
    break;}
case 37:
#line 209 "parser.y"
{
                                                        yyval.nptr=yyvsp[0].nptr;
                                                ;
    break;}
case 39:
#line 216 "parser.y"
{
                                                        yyval.nptr=yyvsp[0].nptr;
                                                ;
    break;}
case 43:
#line 227 "parser.y"
{
                                                        if(lookup(yyvsp[0].id)){
                                                                yyval.nptr=mkleafID(VARIABLE,yyvsp[0].id);

                                                                printf("\n\n----------------------------------------------");
                                                                printf("\n|     Variable '%s' is already decleared!     |",yyvsp[0].id);
                                                                printf("\n----------------------------------------------\n\n");
                                                        }
                                                        else{
                                                                printf("\n\n----------------------------------------------");
                                                                printf("\n|    Error: Variable '%s' is not decleared!   |",yyvsp[0].id);
                                                                printf("\n----------------------------------------------\n\n");
                                                        }
                                                ;
    break;}
case 44:
#line 242 "parser.y"
{
                                                        yyval.nptr=yyvsp[0].nptr;
                                                ;
    break;}
case 46:
#line 249 "parser.y"
{
                                                        yyval.nptr=mkleafINT(yyvsp[0].inum);
                                                ;
    break;}
case 47:
#line 253 "parser.y"
{
                                                        yyval.nptr=mkleafFLOAT(yyvsp[0].fnum);
                                                ;
    break;}
case 48:
#line 259 "parser.y"
{
                                                        nodeType * temp1, * temp2, * temp3;
                                                        temp1 = yyvsp[-2].nptr;
                                                        temp3 = yyvsp[0].nptr;
                                                        yyval.nptr = mkNode(yyvsp[-1].inum,yyvsp[-2].nptr,yyvsp[0].nptr);
                                                        temp2 = yyval.nptr;
                                                        newopr=ret_opr(yyvsp[-1].inum);

                                                        if(temp1->conI.var_type == INTEGER_TYPE && temp3->conI.var_type == INTEGER_TYPE){
                                                                if(!is_bool_exp){
                                                                        temp2->opr.var_type=INTEGER_TYPE;
                                                                        newvar=newtemp();
                                                                        temp2->opr.temp_var=strdup(newvar);
                                                                        newopr=ret_opr(temp2->opr.oper);
                                                                        fprintf (outfile, "%d:  %2s = %d %2s %2d\n",nextstat,newvar,temp1->conI.value,newopr,temp3->conI.value);
                                                                        nextstat++;
                                                                }
                                                                else{
                                                                        temp2->opr.var_type=INTEGER_TYPE;
                                                                        newvar=newtemp();
                                                                        temp2->opr.temp_var=strdup(newvar);
                                                                        newopr=ret_opr(temp2->opr.oper);
                                                                        fprintf (outfile, "%d:  if %2d %2s %2d goto %2d\n",nextstat,temp1->conI.value,newopr,temp3->conI.value,nextstat+3);
                                                                        nextstat++;
                                                                        fprintf (outfile, "%d:  %2s = %2d \n",nextstat,newvar,0);
                                                                        nextstat++;
                                                                        fprintf (outfile, "%d:  goto %2d \n",nextstat,nextstat+2);
                                                                        nextstat++;
                                                                        fprintf (outfile, "%d:  %2s = %2d\n",nextstat,newvar,1);
                                                                        nextstat++;
                                                                }
                                                                print_match();
                                                        }
                                                        else if(temp1->conF.var_type == FLOAT_TYPE && temp3->conF.var_type == FLOAT_TYPE){
                                                                if(!is_bool_exp){
                                                                        temp2->opr.var_type=FLOAT_TYPE;
                                                                        newvar=newtemp();
                                                                        temp2->opr.temp_var=strdup(newvar);
                                                                        newopr=ret_opr(temp2->opr.oper);
                                                                        fprintf (outfile, "%d:  %2s = %f %2s %2f\n",nextstat,newvar,temp1->conF.value,newopr,temp3->conF.value);
                                                                        nextstat++;
                                                                }
                                                                else{
                                                                        temp2->opr.var_type=FLOAT_TYPE;
                                                                        newvar=newtemp();
                                                                        temp2->opr.temp_var=strdup(newvar);
                                                                        newopr=ret_opr(temp2->opr.oper);
                                                                        fprintf (outfile, "%d:  if %2f %2s %2f goto %2d\n",nextstat,temp1->conF.value,newopr,temp3->conF.value,nextstat+3);
                                                                        nextstat++;
                                                                        fprintf (outfile, "%d:  %2s = %2d \n",nextstat,newvar,0);
                                                                        nextstat++;
                                                                        fprintf (outfile, "%d:  goto %2d \n",nextstat,nextstat+2);
                                                                        nextstat++;
                                                                        fprintf (outfile, "%d:  %2s = %2d\n",nextstat,newvar,1);
                                                                        nextstat++;
                                                                }
                                                                print_match();
                                                        }
                                                        else if(INTEGER_TYPE == findType(temp1->id.variable_name) && temp3->conI.var_type == INTEGER_TYPE ){
                                                                if(!is_bool_exp){
                                                                        temp2->opr.var_type=INTEGER_TYPE;
                                                                        newvar=newtemp();
                                                                        temp2->opr.temp_var=strdup(newvar);
                                                                        newopr=ret_opr(temp2->opr.oper);
                                                                        fprintf (outfile, "%d:  %2s = %s %2s %2d\n",nextstat,newvar,temp1->id.variable_name,newopr,temp3->conI.value);
                                                                        nextstat++;
                                                                }
                                                                else{
                                                                        temp2->opr.var_type=INTEGER_TYPE;
                                                                        newvar=newtemp();
                                                                        temp2->opr.temp_var=strdup(newvar);
                                                                        newopr=ret_opr(temp2->opr.oper);
                                                                        fprintf (outfile, "%d:  if %2s %2s %2d goto %2d\n",nextstat,temp1->id.variable_name,newopr,temp3->conI.value,nextstat+3);
                                                                        nextstat++;
                                                                        fprintf (outfile, "%d:  %2s = %2d \n",nextstat,newvar,0);
                                                                        nextstat++;
                                                                        fprintf (outfile, "%d:  goto %2d \n",nextstat,nextstat+2);
                                                                        nextstat++;
                                                                        fprintf (outfile, "%d:  %2s = %2d\n",nextstat,newvar,1);
                                                                        nextstat++;
                                                                }
                                                                print_match();
                                                        }
                                                        else if(temp1->conI.var_type == INTEGER_TYPE && INTEGER_TYPE == findType(temp3->id.variable_name)){
                                                                if(!is_bool_exp){
                                                                        temp2->opr.var_type=INTEGER_TYPE;
                                                                        newvar=newtemp();
                                                                        temp2->opr.temp_var=strdup(newvar);
                                                                        newopr=ret_opr(temp2->opr.oper);
                                                                        fprintf (outfile, "%d:  %2s = %d %2s %2s\n",nextstat,newvar,temp1->conI.value,newopr,temp3->id.variable_name);
                                                                        nextstat++;
                                                                }
                                                                else{
                                                                        temp2->opr.var_type=INTEGER_TYPE;
                                                                        newvar=newtemp();
                                                                        temp2->opr.temp_var=strdup(newvar);
                                                                        newopr=ret_opr(temp2->opr.oper);
                                                                        fprintf (outfile, "%d:  if %2d %2s %2s goto %2d\n",nextstat,temp1->conI.value,newopr,temp3->id.variable_name,nextstat+3);
                                                                        nextstat++;
                                                                        fprintf (outfile, "%d:  %2s = %2d \n",nextstat,newvar,0);
                                                                        nextstat++;
                                                                        fprintf (outfile, "%d:  goto %2d \n",nextstat,nextstat+2);
                                                                        nextstat++;
                                                                        fprintf (outfile, "%d:  %2s = %2d\n",nextstat,newvar,1);
                                                                        nextstat++;
                                                                }
                                                                print_match();
                                                        }
                                                        else if(FLOAT_TYPE == findType(temp1->id.variable_name) && temp3->conF.var_type == FLOAT_TYPE){
                                                                if(!is_bool_exp){
                                                                        temp2->opr.var_type=FLOAT_TYPE;
                                                                        newvar=newtemp();
                                                                        temp2->opr.temp_var=strdup(newvar);
                                                                        newopr=ret_opr(temp2->opr.oper);
                                                                        fprintf (outfile, "%d:  %2s = %s %2s %2f\n",nextstat,newvar,temp1->id.variable_name,newopr,temp3->conF.value);
                                                                        nextstat++;
                                                                }
                                                                else{
                                                                        temp2->opr.var_type=FLOAT_TYPE;
                                                                        newvar=newtemp();
                                                                        temp2->opr.temp_var=strdup(newvar);
                                                                        newopr=ret_opr(temp2->opr.oper);
                                                                        fprintf (outfile, "%d:  if %2s %2s %2f goto %2d\n",nextstat,temp1->id.variable_name,newopr,temp3->conF.value,nextstat+3);
                                                                        nextstat++;
                                                                        fprintf (outfile, "%d:  %2s = %2d \n",nextstat,newvar,0);
                                                                        nextstat++;
                                                                        fprintf (outfile, "%d:  goto %2d \n",nextstat,nextstat+2);
                                                                        nextstat++;
                                                                        fprintf (outfile, "%d:  %2s = %2d\n",nextstat,newvar,1);
                                                                        nextstat++;
                                                                }
                                                                print_match();
                                                        }
                                                        else if(temp1->conF.var_type == FLOAT_TYPE && FLOAT_TYPE == findType(temp3->id.variable_name)){
                                                                if(!is_bool_exp){
                                                                        temp2->opr.var_type=FLOAT_TYPE;
                                                                        newvar=newtemp();
                                                                        temp2->opr.temp_var=strdup(newvar);
                                                                        newopr=ret_opr(temp2->opr.oper);
                                                                        fprintf (outfile, "%d:  %2s = %f %2s %2s\n",nextstat,newvar,temp1->conF.value,newopr,temp3->id.variable_name);
                                                                        nextstat++;
                                                                }
                                                                else{
                                                                        temp2->opr.var_type=FLOAT_TYPE;
                                                                        newvar=newtemp();
                                                                        temp2->opr.temp_var=strdup(newvar);
                                                                        newopr=ret_opr(temp2->opr.oper);
                                                                        fprintf (outfile, "%d:  if %2f %2s %2s goto %2d\n",nextstat,temp1->conF.value,newopr,temp3->id.variable_name,nextstat+3);
                                                                        nextstat++;
                                                                        fprintf (outfile, "%d:  %2s = %2d \n",nextstat,newvar,0);
                                                                        nextstat++;
                                                                        fprintf (outfile, "%d:  goto %2d \n",nextstat,nextstat+2);
                                                                        nextstat++;
                                                                        fprintf (outfile, "%d:  %2s = %2d\n",nextstat,newvar,1);
                                                                        nextstat++;
                                                                }
                                                                print_match();
                                                        }
                                                        else if(INTEGER_TYPE == findType(temp1->id.variable_name) && INTEGER_TYPE == findType(temp3->id.variable_name)){
                                                                if(!is_bool_exp){
                                                                        temp2->opr.var_type=INTEGER_TYPE;
                                                                        newvar=newtemp();
                                                                        temp2->opr.temp_var=strdup(newvar);
                                                                        newopr=ret_opr(temp2->opr.oper);
                                                                        fprintf (outfile, "%d:  %2s = %s %2s %2s\n",nextstat,newvar,temp1->id.variable_name,newopr,temp3->id.variable_name);
                                                                        nextstat++;
                                                                }
                                                                else{
                                                                        temp2->opr.var_type=INTEGER_TYPE;
                                                                        newvar=newtemp();
                                                                        temp2->opr.temp_var=strdup(newvar);
                                                                        newopr=ret_opr(temp2->opr.oper);
                                                                        fprintf (outfile, "%d:  if %2s %2s %2s goto %2d\n",nextstat,temp1->id.variable_name,newopr,temp3->id.variable_name,nextstat+3);
                                                                        nextstat++;
                                                                        fprintf (outfile, "%d:  %2s = %2d \n",nextstat,newvar,0);
                                                                        nextstat++;
                                                                        fprintf (outfile, "%d:  goto %2d \n",nextstat,nextstat+2);
                                                                        nextstat++;
                                                                        fprintf (outfile, "%d:  %2s = %2d\n",nextstat,newvar,1);
                                                                        nextstat++;
                                                                }
                                                                print_match();
                                                        }
                                                        else if(FLOAT_TYPE == findType(temp1->id.variable_name) && FLOAT_TYPE == findType(temp3->id.variable_name)){
                                                                if(!is_bool_exp){
                                                                        temp2->opr.var_type=FLOAT_TYPE;
                                                                        newvar=newtemp();
                                                                        temp2->opr.temp_var=strdup(newvar);
                                                                        newopr=ret_opr(temp2->opr.oper);
                                                                        fprintf (outfile, "%d:  %2s = %s %2s %2s\n",nextstat,newvar,temp1->id.variable_name,newopr,temp3->id.variable_name);
                                                                        nextstat++;
                                                                }
                                                                else{
                                                                        temp2->opr.var_type=FLOAT_TYPE;
                                                                        newvar=newtemp();
                                                                        temp2->opr.temp_var=strdup(newvar);
                                                                        newopr=ret_opr(temp2->opr.oper);
                                                                        fprintf (outfile, "%d:  if %2s %2s %2s goto %2d\n",nextstat,temp1->id.variable_name,newopr,temp3->id.variable_name,nextstat+3);
                                                                        nextstat++;
                                                                        fprintf (outfile, "%d:  %2s = %2d \n",nextstat,newvar,0);
                                                                        nextstat++;
                                                                        fprintf (outfile, "%d:  goto %2d \n",nextstat,nextstat+2);
                                                                        nextstat++;
                                                                        fprintf (outfile, "%d:  %2s = %2d\n",nextstat,newvar,1);
                                                                        nextstat++;
                                                                }
                                                                print_match();
                                                        }
                                                        else if(temp1->opr.var_type == temp3->conI.var_type){
                                                                if(!is_bool_exp){
                                                                        temp2->opr.var_type = temp3->conI.var_type;
                                                                        newvar=newtemp();
                                                                        temp2->opr.temp_var=strdup(newvar);
                                                                        newopr=ret_opr(temp2->opr.oper);
                                                                        fprintf (outfile, "%d:  %2s = %s %2s %2d\n",nextstat,newvar,temp1->opr.temp_var,newopr,temp3->conI.value);
                                                                        nextstat++;
                                                                }
                                                                else{
                                                                        temp2->opr.var_type = temp3->conI.var_type;
                                                                        newvar=newtemp();
                                                                        temp2->opr.temp_var=strdup(newvar);
                                                                        newopr=ret_opr(temp2->opr.oper);
                                                                        fprintf (outfile, "%d:  if %2s %2s %2d goto %2d\n",nextstat,temp1->opr.temp_var,newopr,temp3->conI.value,nextstat+3);
                                                                        nextstat++;
                                                                        fprintf (outfile, "%d:  %2s = %2d \n",nextstat,newvar,0);
                                                                        nextstat++;
                                                                        fprintf (outfile, "%d:  goto %2d \n",nextstat,nextstat+2);
                                                                        nextstat++;
                                                                        fprintf (outfile, "%d:  %2s = %2d\n",nextstat,newvar,1);
                                                                        nextstat++;
                                                                }
                                                                print_match();
                                                        }
                                                        else if(temp1->opr.var_type == temp3->conF.var_type){
                                                                if(!is_bool_exp){
                                                                        temp2->opr.var_type = temp3->conF.var_type;
                                                                        newvar=newtemp();
                                                                        temp2->opr.temp_var=strdup(newvar);
                                                                        newopr=ret_opr(temp2->opr.oper);
                                                                        fprintf (outfile, "%d:  %2s = %s %2s %2f\n",nextstat,newvar,temp1->opr.temp_var,newopr,temp3->conF.value);
                                                                        nextstat++;
                                                                }
                                                                else{
                                                                        temp2->opr.var_type = temp3->conF.var_type;
                                                                        newvar=newtemp();
                                                                        temp2->opr.temp_var=strdup(newvar);
                                                                        newopr=ret_opr(temp2->opr.oper);
                                                                        fprintf (outfile, "%d:  if %2s %2s %2f goto %2d\n",nextstat,temp1->opr.temp_var,newopr,temp3->conF.value,nextstat+3);
                                                                        nextstat++;
                                                                        fprintf (outfile, "%d:  %2s = %2d \n",nextstat,newvar,0);
                                                                        nextstat++;
                                                                        fprintf (outfile, "%d:  goto %2d \n",nextstat,nextstat+2);
                                                                        nextstat++;
                                                                        fprintf (outfile, "%d:  %2s = %2d\n",nextstat,newvar,1);
                                                                        nextstat++;
                                                                }
                                                                print_match();
                                                        }
                                                        else if(temp1->opr.var_type == INTEGER_TYPE && INTEGER_TYPE == findType(temp3->id.variable_name)){
                                                                if(!is_bool_exp){
                                                                        temp2->opr.var_type=INTEGER_TYPE;
                                                                        newvar=newtemp();
                                                                        temp2->opr.temp_var=strdup(newvar);
                                                                        newopr=ret_opr(temp2->opr.oper);
                                                                        fprintf (outfile, "%d:  %2s = %s %2s %2s\n",nextstat,newvar,temp1->opr.temp_var,newopr,temp3->id.variable_name);
                                                                        nextstat++;
                                                                }
                                                                else{
                                                                        temp2->opr.var_type=INTEGER_TYPE;
                                                                        newvar=newtemp();
                                                                        temp2->opr.temp_var=strdup(newvar);
                                                                        newopr=ret_opr(temp2->opr.oper);
                                                                        fprintf (outfile, "%d:  if %2s %2s %2s goto %2d\n",nextstat,temp1->opr.temp_var,newopr,temp3->id.variable_name,nextstat+3);
                                                                        nextstat++;
                                                                        fprintf (outfile, "%d:  %2s = %2d \n",nextstat,newvar,0);
                                                                        nextstat++;
                                                                        fprintf (outfile, "%d:  goto %2d \n",nextstat,nextstat+2);
                                                                        nextstat++;
                                                                        fprintf (outfile, "%d:  %2s = %2d\n",nextstat,newvar,1);
                                                                        nextstat++;
                                                                }
                                                                print_match();
                                                        }
                                                        else if(temp1->opr.var_type == FLOAT_TYPE && FLOAT_TYPE == findType(temp3->id.variable_name)){
                                                                if(!is_bool_exp){
                                                                        temp2->opr.var_type=FLOAT_TYPE;
                                                                        newvar=newtemp();
                                                                        temp2->opr.temp_var=strdup(newvar);
                                                                        newopr=ret_opr(temp2->opr.oper);
                                                                        fprintf (outfile, "%d:  %2s = %s %2s %2s\n",nextstat,newvar,temp1->opr.temp_var,newopr,temp3->id.variable_name);
                                                                        nextstat++;
                                                                }
                                                                else{
                                                                        temp2->opr.var_type=FLOAT_TYPE;
                                                                        newvar=newtemp();
                                                                        temp2->opr.temp_var=strdup(newvar);
                                                                        newopr=ret_opr(temp2->opr.oper);
                                                                        fprintf (outfile, "%d:  if %2s %2s %2s goto %2d\n",nextstat,temp1->opr.temp_var,newopr,temp3->id.variable_name,nextstat+3);
                                                                        nextstat++;
                                                                        fprintf (outfile, "%d:  %2s = %2d \n",nextstat,newvar,0);
                                                                        nextstat++;
                                                                        fprintf (outfile, "%d:  goto %2d \n",nextstat,nextstat+2);
                                                                        nextstat++;
                                                                        fprintf (outfile, "%d:  %2s = %2d\n",nextstat,newvar,1);
                                                                        nextstat++;
                                                                }
                                                                print_match();
                                                        }
                                                        else{
                                                                temp2->opr.var_type=-1;
                                                                printf("\n\n-----------------------------------------------------");
                                                                printf("\n| Error in binary_expression: type did not matched! |");
                                                                printf("\n-----------------------------------------------------\n\n");
                                                        }
                                                ;
    break;}
case 49:
#line 575 "parser.y"
{
                                                        yyval.nptr=yyvsp[0].nptr;
                                                ;
    break;}
case 50:
#line 581 "parser.y"
{
                                                        yyval.inum=yyvsp[0].inum;
                                                ;
    break;}
case 51:
#line 585 "parser.y"
{
                                                        yyval.inum=yyvsp[0].inum;
                                                ;
    break;}
case 52:
#line 589 "parser.y"
{
                                                        yyval.inum=yyvsp[0].inum;
                                                ;
    break;}
case 53:
#line 593 "parser.y"
{
                                                        yyval.inum=yyvsp[0].inum;
                                                ;
    break;}
case 54:
#line 597 "parser.y"
{
                                                        yyval.inum=yyvsp[0].inum;
                                                ;
    break;}
case 55:
#line 601 "parser.y"
{
                                                        yyval.inum=yyvsp[0].inum;
                                                ;
    break;}
case 56:
#line 605 "parser.y"
{
                                                        yyval.inum=yyvsp[0].inum;
                                                ;
    break;}
case 57:
#line 609 "parser.y"
{
                                                        yyval.inum=yyvsp[0].inum;
                                                ;
    break;}
case 58:
#line 613 "parser.y"
{
                                                        yyval.inum=yyvsp[0].inum;
                                                ;
    break;}
case 59:
#line 617 "parser.y"
{
                                                        yyval.inum=yyvsp[0].inum;
                                                ;
    break;}
case 60:
#line 621 "parser.y"
{
                                                        yyval.inum=yyvsp[0].inum;
                                                ;
    break;}
case 61:
#line 625 "parser.y"
{
                                                        yyval.inum=yyvsp[0].inum;
                                                ;
    break;}
case 62:
#line 629 "parser.y"
{
                                                        yyval.inum=yyvsp[0].inum;
                                                ;
    break;}
}
   /* the action file gets copied in in place of this dollarsign */
#line 487 "bison.simple"

  yyvsp -= yylen;
  yyssp -= yylen;
#ifdef YYLSP_NEEDED
  yylsp -= yylen;
#endif

#if YYDEBUG != 0
  if (yydebug)
    {
      short *ssp1 = yyss - 1;
      fprintf (stderr, "state stack now");
      while (ssp1 != yyssp)
        fprintf (stderr, " %d", *++ssp1);
      fprintf (stderr, "\n");
    }
#endif

  *++yyvsp = yyval;

#ifdef YYLSP_NEEDED
  yylsp++;
  if (yylen == 0)
    {
      yylsp->first_line = yylloc.first_line;
      yylsp->first_column = yylloc.first_column;
      yylsp->last_line = (yylsp-1)->last_line;
      yylsp->last_column = (yylsp-1)->last_column;
      yylsp->text = 0;
    }
  else
    {
      yylsp->last_line = (yylsp+yylen-1)->last_line;
      yylsp->last_column = (yylsp+yylen-1)->last_column;
    }
#endif

  /* Now "shift" the result of the reduction.
     Determine what state that goes to,
     based on the state we popped back to
     and the rule number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTBASE] + *yyssp;
  if (yystate >= 0 && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTBASE];

  goto yynewstate;

yyerrlab:   /* here on detecting error */

  if (! yyerrstatus)
    /* If not already recovering from an error, report this error.  */
    {
      ++yynerrs;

#ifdef YYERROR_VERBOSE
      yyn = yypact[yystate];

      if (yyn > YYFLAG && yyn < YYLAST)
        {
          int size = 0;
          char *msg;
          int x, count;

          count = 0;
          /* Start X at -yyn if nec to avoid negative indexes in yycheck.  */
          for (x = (yyn < 0 ? -yyn : 0);
               x < (sizeof(yytname) / sizeof(char *)); x++)
            if (yycheck[x + yyn] == x)
              size += strlen(yytname[x]) + 15, count++;
          msg = (char *) malloc(size + 15);
          if (msg != 0)
            {
              strcpy(msg, "parse error");

              if (count < 5)
                {
                  count = 0;
                  for (x = (yyn < 0 ? -yyn : 0);
                       x < (sizeof(yytname) / sizeof(char *)); x++)
                    if (yycheck[x + yyn] == x)
                      {
                        strcat(msg, count == 0 ? ", expecting `" : " or `");
                        strcat(msg, yytname[x]);
                        strcat(msg, "'");
                        count++;
                      }
                }
              yyerror(msg);
              free(msg);
            }
          else
            yyerror ("parse error; also virtual memory exceeded");
        }
      else
#endif /* YYERROR_VERBOSE */
        yyerror("parse error");
    }

  goto yyerrlab1;
yyerrlab1:   /* here on error raised explicitly by an action */

  if (yyerrstatus == 3)
    {
      /* if just tried and failed to reuse lookahead token after an error, discard it.  */

      /* return failure if at end of input */
      if (yychar == YYEOF)
        YYABORT;

#if YYDEBUG != 0
      if (yydebug)
        fprintf(stderr, "Discarding token %d (%s).\n", yychar, yytname[yychar1]);
#endif

      yychar = YYEMPTY;
    }

  /* Else will try to reuse lookahead token
     after shifting the error token.  */

  yyerrstatus = 3;		/* Each real token shifted decrements this */

  goto yyerrhandle;

yyerrdefault:  /* current state does not do anything special for the error token. */

#if 0
  /* This is wrong; only states that explicitly want error tokens
     should shift them.  */
  yyn = yydefact[yystate];  /* If its default is to accept any token, ok.  Otherwise pop it.*/
  if (yyn) goto yydefault;
#endif

yyerrpop:   /* pop the current state because it cannot handle the error token */

  if (yyssp == yyss) YYABORT;
  yyvsp--;
  yystate = *--yyssp;
#ifdef YYLSP_NEEDED
  yylsp--;
#endif

#if YYDEBUG != 0
  if (yydebug)
    {
      short *ssp1 = yyss - 1;
      fprintf (stderr, "Error: state stack now");
      while (ssp1 != yyssp)
        fprintf (stderr, " %d", *++ssp1);
      fprintf (stderr, "\n");
    }
#endif

yyerrhandle:

  yyn = yypact[yystate];
  if (yyn == YYFLAG)
    goto yyerrdefault;

  yyn += YYTERROR;
  if (yyn < 0 || yyn > YYLAST || yycheck[yyn] != YYTERROR)
    goto yyerrdefault;

  yyn = yytable[yyn];
  if (yyn < 0)
    {
      if (yyn == YYFLAG)
        goto yyerrpop;
      yyn = -yyn;
      goto yyreduce;
    }
  else if (yyn == 0)
    goto yyerrpop;

  if (yyn == YYFINAL)
    YYACCEPT;

#if YYDEBUG != 0
  if (yydebug)
    fprintf(stderr, "Shifting error token, ");
#endif

  *++yyvsp = yylval;
#ifdef YYLSP_NEEDED
  *++yylsp = yylloc;
#endif

  yystate = yyn;
  goto yynewstate;
}
#line 636 "parser.y"



void yyerror(char * s){
        printf("Error: %s ?\n",s);
}

void print_match(){
        printf("\n\n------------------");
        printf("\n| *type matched* |");
        printf("\n------------------\n\n");
}

char * newtemp(){
    char buf[12];
    char * name;
    sprintf(buf, "t%d", tempvar);
    tempvar++;
    name=strdup(buf);
    return name;
}

char * ret_opr(int op){
        char * temp_opr;

        switch(op){
        case '+':
                is_bool_exp=0;
                temp_opr=strdup("+");
                break;
        case '-':
                is_bool_exp=0;
                temp_opr=strdup("-");
                break;
        case '*':
                is_bool_exp=0;
                temp_opr=strdup("*");
                break;
        case '/':
                is_bool_exp=0;
                temp_opr=strdup("/");
                break;
        case '%':
                is_bool_exp=0;
                temp_opr=strdup("%");
                break;
        case 274:
                is_bool_exp=0;
                temp_opr=strdup("&&");
                break;
        case 275:
                is_bool_exp=0;
                temp_opr=strdup("||");
                break;
        case '<':
                is_bool_exp=1;
                temp_opr=strdup("<");
                break;
        case '>':
                is_bool_exp=1;
                temp_opr=strdup(">");
                break;
        case 270:
                is_bool_exp=1;
                temp_opr=strdup(">=");
                break;
        case 271:
                is_bool_exp=1;
                temp_opr=strdup("<=");
                break;
        case 272:
                is_bool_exp=1;
                temp_opr=strdup("==");
                break;
        case 273:
                is_bool_exp=1;
                temp_opr=strdup("!=");
                break;
        default:
                is_bool_exp=0;
                printf("error\n");
                break;
    }
    return temp_opr;
}

int main(){
        extern FILE * yyin;
        //Intermediate Code Generator
        outfile=fopen("ICG.txt","w");
        yydebug=1;

        init();
        yyin = fopen("input.txt","r");
        yyparse();
        printf("Parse Completed\n");

        print_table();
        fclose(outfile);

        //Code Generator
        //initiliz();
        //readICG();

        return 0;
}
