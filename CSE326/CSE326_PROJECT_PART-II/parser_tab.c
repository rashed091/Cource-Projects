
/*  A Bison parser, made from parser.y with Bison version GNU Bison version 1.24
  */

#define YYBISON 1  /* Identify Bison output.  */

#define	VARIABLE	258
#define	INTEGER_NUMBER	259
#define	DECIMAL_NUMBER	260
#define	INTEGER_TYPE	261
#define	FLOAT_TYPE	262
#define	FOR	263
#define	DO	264
#define	WHILE	265
#define	IF	266
#define	ELSE	267
#define	RETURN	268
#define	VOID	269
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
        PROJECT: PART-II
    */
        #include<stdio.h>
        #include<string.h>
        #include"symbol.h"
        int errors;


#line 34 "parser.y"
typedef union {
        char * id;
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
     2,     2,    34,     2,     2,     2,    35,     2,     2,    31,
    32,    25,    23,    28,    24,     2,    26,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,    27,    36,
    33,    37,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,    29,     2,    30,     2,     2,     2,     2,     2,
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
     0,    40,    39,     0,    44,     0,    41,    42,    27,     0,
    14,     0,     6,     0,     7,     0,    42,    28,    43,     0,
    43,     0,     3,     0,    45,    29,    48,    30,     0,    41,
     3,    31,    46,    32,     0,    46,    28,    47,     0,    47,
     0,    14,     0,     0,    41,     3,     0,    49,    50,     0,
    40,    49,     0,     0,    50,    51,     0,     0,    29,    50,
    30,     0,    52,     0,    53,     0,    54,     0,    55,     0,
    56,    27,     0,    13,    56,    27,     0,    13,    27,     0,
     8,    31,    56,    27,    56,    27,    56,    32,    51,     0,
    10,    31,    56,    32,    51,     0,     9,    51,    10,    31,
    56,    32,    27,     0,    11,    31,    56,    32,    51,     0,
    11,    31,    56,    32,    51,    12,    51,     0,    57,    33,
    56,     0,    61,     0,    58,    57,     0,    59,     0,    23,
     0,    24,     0,    34,     0,     3,     0,    60,     0,    31,
    56,    32,     0,     4,     0,     5,     0,    61,    62,    57,
     0,    57,     0,    23,     0,    24,     0,    25,     0,    26,
     0,    35,     0,    36,     0,    37,     0,    16,     0,    17,
     0,    18,     0,    15,     0,    19,     0,    20,     0
};

#endif

#if YYDEBUG != 0
static const short yyrline[] = { 0,
    40,    43,    44,    47,    50,    51,    52,    55,    56,    59,
    69,    72,    81,    82,    83,    84,    87,    96,    99,   100,
   103,   104,   107,   108,   109,   110,   111,   112,   113,   114,
   117,   120,   123,   126,   127,   130,   135,   138,   143,   146,
   147,   148,   151,   156,   157,   160,   161,   164,   165,   172,
   173,   174,   175,   176,   177,   178,   179,   180,   181,   182,
   183,   184
};

static const char * const yytname[] = {   "$","error","$undefined.","VARIABLE",
"INTEGER_NUMBER","DECIMAL_NUMBER","INTEGER_TYPE","FLOAT_TYPE","FOR","DO","WHILE",
"IF","ELSE","RETURN","VOID","GE","LE","EQ","NE","AND","OR","NEWLINE","COMENTS",
"'+'","'-'","'*'","'/'","';'","','","'{'","'}'","'('","')'","'='","'!'","'%'",
"'<'","'>'","program","external","declaration","type_name","variable_list","variable",
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
    58,    59,    61,    62,    50,    51,    52,    53,    54,    55,
    56,     0,     0,     0,     0,     0,    29,    23,    45,    36,
    48,     0,     0,     0,     0,     0,     0,    32,    34,     0,
     0,     0,     0,    33,    35,     0,    31,     0,     0,     0
};

static const short yydefgoto[] = {   108,
     4,     5,     6,    11,    12,     7,     8,    23,    24,    19,
    20,    29,    46,    47,    48,    49,    50,    51,    52,    53,
    54,    55,    56,    82
};

static const short yypact[] = {    11,
-32768,-32768,-32768,-32768,    11,     6,-32768,   -19,-32768,   -16,
   -24,-32768,    11,    32,-32768,    20,    11,    20,    -1,-32768,
    27,    38,    -8,-32768,-32768,-32768,-32768,-32768,    39,-32768,
    11,-32768,-32768,-32768,-32768,     4,    39,    14,    24,    71,
-32768,-32768,-32768,    76,-32768,-32768,-32768,-32768,-32768,-32768,
    29,    18,    76,-32768,-32768,    96,-32768,    76,    49,    76,
    76,-32768,    33,     3,    34,-32768,    76,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,    76,    37,    36,    40,    45,-32768,-32768,-32768,-32768,
-32768,    76,    76,    39,    39,    44,    46,-32768,    73,    76,
    55,    39,    54,-32768,-32768,    39,-32768,    88,    89,-32768
};

static const short yypgoto[] = {-32768,
    85,    23,    70,-32768,    75,-32768,-32768,-32768,    61,-32768,
    79,    50,   -37,-32768,-32768,-32768,-32768,   -39,   -51,-32768,
-32768,-32768,-32768,-32768
};


#define	YYLAST		133


static const short yytable[] = {    59,
    63,    68,    15,    16,    65,    33,    34,    35,    10,    13,
    36,    37,    38,    39,    14,    40,     1,     2,    83,    31,
    85,    86,    25,    32,     3,    41,    42,    90,    28,    -5,
    91,    43,    88,    44,    58,    17,    45,     1,     2,    17,
    30,    33,    34,    35,    60,    21,    36,    37,    38,    39,
    67,    40,    96,    97,    61,    66,    98,    99,    84,    87,
   103,    41,    42,    92,   105,    89,    93,    43,   107,    44,
   100,    94,    45,    33,    34,    35,    95,   101,    33,    34,
    35,   104,    18,    22,   102,   106,    18,   109,   110,     9,
    26,    57,    64,    41,    42,    27,     0,    62,    41,    42,
    22,    44,     0,     0,    45,     0,    44,     0,     0,    45,
    69,    70,    71,    72,    73,    74,     0,     0,    75,    76,
    77,    78,     0,     0,     0,     0,     0,     0,     0,     0,
    79,    80,    81
};

static const short yycheck[] = {    37,
    40,    53,    27,    28,    44,     3,     4,     5,     3,    29,
     8,     9,    10,    11,    31,    13,     6,     7,    58,    28,
    60,    61,     3,    32,    14,    23,    24,    67,    30,     3,
    82,    29,    30,    31,    31,    13,    34,     6,     7,    17,
     3,     3,     4,     5,    31,    14,     8,     9,    10,    11,
    33,    13,    92,    93,    31,    27,    94,    95,    10,    27,
   100,    23,    24,    27,   102,    32,    31,    29,   106,    31,
    27,    32,    34,     3,     4,     5,    32,    32,     3,     4,
     5,    27,    13,    14,    12,    32,    17,     0,     0,     5,
    16,    31,    43,    23,    24,    17,    -1,    27,    23,    24,
    31,    31,    -1,    -1,    34,    -1,    31,    -1,    -1,    34,
    15,    16,    17,    18,    19,    20,    -1,    -1,    23,    24,
    25,    26,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    35,    36,    37
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

case 10:
#line 60 "parser.y"
{
                                                        if(!lookup(yyvsp[0].id))
                                                                insert("VARIABLE",yyvsp[0].id,VARIABLE);
                                                        else
                                                                printf("Error: Variable '%s' is already defined!\n",yyvsp[0].id);

                                                ;
    break;}
case 12:
#line 73 "parser.y"
{
                                                        if(!lookup(yyvsp[-3].id))
                                                                insert("VARIABLE",yyvsp[-3].id,VARIABLE);
                                                        else
                                                                printf("Error: function '%s' is already defined!\n",yyvsp[-3].id);
                                                ;
    break;}
case 17:
#line 88 "parser.y"
{
                                                        if(!lookup(yyvsp[0].id))
                                                                insert("VARIABLE",yyvsp[0].id,VARIABLE);
                                                        else
                                                                printf("Error: variable '%s' is already defined\n!",yyvsp[0].id);
                                                ;
    break;}
case 36:
#line 131 "parser.y"
{
                                                        if(!lookup(yyvsp[-2].id))
                                                                printf("Error: variable '%s' is not defined!\n",yyvsp[-2].id);
                                                ;
    break;}
case 38:
#line 139 "parser.y"
{
                                                        if(!lookup(yyvsp[0].id))
                                                                printf("Error: variable '%s' is not defined!\n",yyvsp[0].id);
                                                ;
    break;}
case 43:
#line 152 "parser.y"
{
                                                        if(!lookup(yyvsp[0].id))
                                                                printf("Error: variable '%s' is not defined!\n",yyvsp[0].id);
                                                ;
    break;}
case 49:
#line 166 "parser.y"
{
                                                        if(!lookup(yyvsp[0].id))
                                                                printf("Error: variable '%s' is not defined!\n",yyvsp[0].id);
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
#line 187 "parser.y"


yyerror(char * s){
        errors++;
        printf("Error: %s ?\n",s);
}

int main(){
        extern FILE * yyin;
        yydebug=1;
        errors=0;

        init();
        yyin = fopen("input.txt","r");
        yyparse();
        printf("Parse Completed\n");

        if(errors==0)
                print_table();

        return 0;
}
