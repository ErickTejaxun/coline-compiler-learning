/* A Bison parser, made by GNU Bison 3.1.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018 Free Software Foundation, Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.

   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "3.1"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* Copy the first part of user declarations.  */
#line 1 "sintactico.yy" /* yacc.c:339  */

#include "scanner.h"//se importa el header del analisis sintactico
#include <iostream> //libreria para imprimir en cosola de C
#include <QString> //libreria para manejo de STRINGS de QT
#include <QList>
#include "nodo.h"
#include <QTextEdit> //libreria QTextEdit de QT para poder mostrar el resultado en pantalla

extern int yylineno; //linea actual donde se encuentra el parser (analisis lexico) lo maneja BISON
extern int columna; //columna actual donde se encuentra el parser (analisis lexico) lo maneja BISON
extern char *yytext; //lexema actual donde esta el parser (analisis lexico) lo maneja BISON
extern nodo *raiz; // Raiz del arbol

int yyerror(const char* mens)
{
    //metodo que se llama al haber un error sintactico
    //SE IMPRIME EN CONSOLA EL ERROR
    //std::cout <<mens<<"-----"<<yytext<< std::endl;
    std::cout << mens <<"----"<<yytext<< "En la linea:" << yylineno  << "Columna:" << columna<<std::endl;
    return 0;
}


QTextEdit * salida;



#line 94 "parser.cpp" /* yacc.c:339  */

# ifndef YY_NULLPTR
#  if defined __cplusplus && 201103L <= __cplusplus
#   define YY_NULLPTR nullptr
#  else
#   define YY_NULLPTR 0
#  endif
# endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 1
#endif

/* In a future release of Bison, this section will be replaced
   by #include "parser.h".  */
#ifndef YY_YY_PARSER_H_INCLUDED
# define YY_YY_PARSER_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    entero = 258,
    decimal = 259,
    caracter = 260,
    booleano = 261,
    cadena = 262,
    id = 263,
    parA = 264,
    parC = 265,
    illave = 266,
    fllave = 267,
    iCor = 268,
    fCor = 269,
    dosP = 270,
    coma = 271,
    aumento = 272,
    decremento = 273,
    masigual = 274,
    porigual = 275,
    menosigual = 276,
    divigual = 277,
    suma = 278,
    menos = 279,
    multi = 280,
    division = 281,
    potencia = 282,
    mayor = 283,
    menor = 284,
    mayorigual = 285,
    menorigual = 286,
    igualigual = 287,
    desigual = 288,
    o = 289,
    y = 290,
    igual = 291,
    no = 292,
    interrogacion = 293,
    tipoBooleano = 294,
    tipoEntero = 295,
    tipoCaracter = 296,
    tipoDecimal = 297,
    imprimir = 298,
    concatenar = 299,
    tamanio = 300,
    verdadero = 301,
    falso = 302,
    convertirAcadena = 303,
    convertirAentero = 304,
    clase = 305,
    este = 306,
    publico = 307,
    privado = 308,
    protegido = 309,
    vacio = 310,
    heredade = 311,
    retornar = 312,
    importar = 313,
    sobreescribir = 314,
    principal = 315,
    nuevo = 316,
    nada = 317,
    detener = 318,
    continuar = 319,
    si = 320,
    sinosi = 321,
    sino = 322,
    selecciona = 323,
    caso = 324,
    defecto = 325,
    mientras = 326,
    hacer = 327,
    para = 328,
    lista = 329,
    insertar = 330,
    obtener = 331,
    buscar = 332,
    pila = 333,
    apilar = 334,
    desapilar = 335,
    cola = 336,
    encolar = 337,
    desencolar = 338,
    mostraredd = 339,
    leer_teclado = 340,
    puntoComa = 341,
    punto = 342
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 33 "sintactico.yy" /* yacc.c:355  */

//se especifican los tipo de valores para los no terminales y lo terminales
char TEXT [256];
class nodo *nodito;

#line 228 "parser.cpp" /* yacc.c:355  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif

/* Location type.  */
#if ! defined YYLTYPE && ! defined YYLTYPE_IS_DECLARED
typedef struct YYLTYPE YYLTYPE;
struct YYLTYPE
{
  int first_line;
  int first_column;
  int last_line;
  int last_column;
};
# define YYLTYPE_IS_DECLARED 1
# define YYLTYPE_IS_TRIVIAL 1
#endif


extern YYSTYPE yylval;
extern YYLTYPE yylloc;
int yyparse (void);

#endif /* !YY_YY_PARSER_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 259 "parser.cpp" /* yacc.c:358  */

#ifdef short
# undef short
#endif

#ifdef YYTYPE_UINT8
typedef YYTYPE_UINT8 yytype_uint8;
#else
typedef unsigned char yytype_uint8;
#endif

#ifdef YYTYPE_INT8
typedef YYTYPE_INT8 yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef YYTYPE_UINT16
typedef YYTYPE_UINT16 yytype_uint16;
#else
typedef unsigned short yytype_uint16;
#endif

#ifdef YYTYPE_INT16
typedef YYTYPE_INT16 yytype_int16;
#else
typedef short yytype_int16;
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif ! defined YYSIZE_T
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(Msgid) dgettext ("bison-runtime", Msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(Msgid) Msgid
# endif
#endif

#ifndef YY_ATTRIBUTE
# if (defined __GNUC__                                               \
      && (2 < __GNUC__ || (__GNUC__ == 2 && 96 <= __GNUC_MINOR__)))  \
     || defined __SUNPRO_C && 0x5110 <= __SUNPRO_C
#  define YY_ATTRIBUTE(Spec) __attribute__(Spec)
# else
#  define YY_ATTRIBUTE(Spec) /* empty */
# endif
#endif

#ifndef YY_ATTRIBUTE_PURE
# define YY_ATTRIBUTE_PURE   YY_ATTRIBUTE ((__pure__))
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# define YY_ATTRIBUTE_UNUSED YY_ATTRIBUTE ((__unused__))
#endif

#if !defined _Noreturn \
     && (!defined __STDC_VERSION__ || __STDC_VERSION__ < 201112)
# if defined _MSC_VER && 1200 <= _MSC_VER
#  define _Noreturn __declspec (noreturn)
# else
#  define _Noreturn YY_ATTRIBUTE ((__noreturn__))
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && ! defined __ICC && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN \
    _Pragma ("GCC diagnostic push") \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")\
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# define YY_IGNORE_MAYBE_UNINITIALIZED_END \
    _Pragma ("GCC diagnostic pop")
#else
# define YY_INITIAL_VALUE(Value) Value
#endif
#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
#endif


#if ! defined yyoverflow || YYERROR_VERBOSE

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
      /* Use EXIT_SUCCESS as a witness for stdlib.h.  */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's 'empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined EXIT_SUCCESS \
       && ! ((defined YYMALLOC || defined malloc) \
             && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef EXIT_SUCCESS
#    define EXIT_SUCCESS 0
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined EXIT_SUCCESS
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */


#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL \
             && defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yytype_int16 yyss_alloc;
  YYSTYPE yyvs_alloc;
  YYLTYPE yyls_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE) + sizeof (YYLTYPE)) \
      + 2 * YYSTACK_GAP_MAXIMUM)

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYSIZE_T yynewbytes;                                            \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / sizeof (*yyptr);                          \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, (Count) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYSIZE_T yyi;                         \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  14
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   2647

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  88
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  52
/* YYNRULES -- Number of rules.  */
#define YYNRULES  159
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  430

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   342

#define YYTRANSLATE(YYX)                                                \
  ((unsigned) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
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
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      85,    86,    87
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   201,   201,   203,   204,   208,   209,   212,   217,   224,
     231,   240,   250,   255,   263,   264,   270,   271,   272,   273,
     282,   283,   286,   287,   288,   289,   290,   291,   293,   294,
     295,   296,   297,   298,   299,   303,   311,   319,   327,   338,
     349,   358,   364,   374,   380,   384,   390,   396,   405,   412,
     419,   429,   434,   440,   448,   455,   461,   470,   471,   472,
     474,   480,   489,   491,   497,   502,   509,   515,   524,   531,
     538,   548,   557,   565,   574,   584,   593,   605,   610,   615,
     622,   628,   636,   644,   658,   665,   674,   682,   690,   701,
     702,   703,   704,   705,   710,   716,   737,   745,   753,   764,
     765,   769,   775,   784,   795,   796,   801,   802,   803,   806,
     807,   808,   809,   810,   816,   825,   826,   827,   828,   831,
     832,   833,   834,   835,   836,   837,   839,   840,   841,   842,
     843,   844,   845,   846,   847,   848,   849,   850,   851,   852,
     853,   854,   855,   860,   866,   871,   876,   881,   889,   894,
     901,   907,   915,   922,   933,   934,   937,   943,   950,   956
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 1
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "entero", "decimal", "caracter",
  "booleano", "cadena", "id", "parA", "parC", "illave", "fllave", "iCor",
  "fCor", "dosP", "coma", "aumento", "decremento", "masigual", "porigual",
  "menosigual", "divigual", "suma", "menos", "multi", "division",
  "potencia", "mayor", "menor", "mayorigual", "menorigual", "igualigual",
  "desigual", "o", "y", "igual", "no", "interrogacion", "tipoBooleano",
  "tipoEntero", "tipoCaracter", "tipoDecimal", "imprimir", "concatenar",
  "tamanio", "verdadero", "falso", "convertirAcadena", "convertirAentero",
  "clase", "este", "publico", "privado", "protegido", "vacio", "heredade",
  "retornar", "importar", "sobreescribir", "principal", "nuevo", "nada",
  "detener", "continuar", "si", "sinosi", "sino", "selecciona", "caso",
  "defecto", "mientras", "hacer", "para", "lista", "insertar", "obtener",
  "buscar", "pila", "apilar", "desapilar", "cola", "encolar", "desencolar",
  "mostraredd", "leer_teclado", "puntoComa", "punto", "$accept", "INICIO",
  "SENTENCIASG", "INSTRUCCIONG", "IMPRIMIR", "CONCATENAR", "IMPORTAR",
  "ICLASES", "ICLASE", "SENTENCIAS", "INSTRUCCION", "PARA", "HACER",
  "MIENTRAS", "SI", "ELSE", "SINOSI", "SELECCIONAR", "CASOS", "LCASOS",
  "CASO", "RETORNO", "ATRIBUTO", "VISIBILIDAD", "INSTANCIA", "LPARAMETROS",
  "PARAMETROS", "PARAMETRO", "PRINCIPAL", "CONSTRUCTOR", "FUNCION", "DIMS",
  "DIM", "CLASE", "ASIGNACION", "TIPOASIG", "DECLARACION",
  "DECLARACIONARRAY", "DIMENSIONES", "VALORESA", "LVALORES", "VALORES",
  "VALAS", "TIPO", "SENTSELEC", "EXPL", "EXPR", "EXPA", "LPAR", "LLAMADA",
  "UNARIOS", "ACCESO", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314,
     315,   316,   317,   318,   319,   320,   321,   322,   323,   324,
     325,   326,   327,   328,   329,   330,   331,   332,   333,   334,
     335,   336,   337,   338,   339,   340,   341,   342
};
# endif

#define YYPACT_NINF -204

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-204)))

#define YYTABLE_NINF -114

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     441,   105,  -204,  -204,  -204,    59,    77,   441,  -204,    80,
      99,  -204,     1,   148,  -204,  -204,  -204,   169,   627,   172,
     178,    16,   187,  -204,  -204,  -204,  -204,   192,   198,   205,
     359,  -204,  -204,   171,  -204,  -204,  -204,   139,    51,   223,
    -204,   627,   195,   347,   235,   171,  -204,  -204,   159,   244,
    -204,  -204,   252,   270,   206,   162,  -204,     9,   280,   194,
    -204,   627,   573,   298,  -204,   274,   295,  -204,   334,   347,
     251,   344,   340,   347,   365,  -204,    11,   282,   347,   505,
    -204,   371,  -204,   829,  -204,   627,   379,   347,   380,   385,
     393,  2488,   412,   347,   347,   394,   413,  -204,  -204,  -204,
    -204,  -204,     4,   498,   401,   498,   415,   417,   343,   421,
    -204,  -204,  -204,  -204,   335,  -204,   999,  -204,  -204,   347,
    -204,   901,  2488,  -204,   498,   422,   423,    20,   445,   446,
     343,   498,   447,   448,   450,   437,   451,   378,   382,   855,
    -204,  -204,   384,  -204,  -204,  -204,   386,   387,   388,   389,
     463,   566,   396,   402,   478,   486,   488,   347,   489,   704,
     507,     6,     7,   181,   459,  -204,   498,   498,   429,   508,
     498,   498,   498,  -204,  -204,   401,   401,   401,   401,   401,
     401,   401,   401,   401,   401,   401,   509,  -204,   926,    94,
     498,  2488,  -204,  -204,  -204,  -204,  -204,   505,   249,   118,
     712,   498,   137,   -25,   498,   498,   498,  2488,   439,  -204,
    -204,  -204,  -204,  -204,  -204,  -204,  -204,  -204,    24,  -204,
    -204,  2488,   510,   512,   515,  2488,  -204,   -25,    33,   380,
     429,  2514,   518,  -204,   207,   246,  2563,   492,  -204,   117,
     459,   459,   255,   255,   104,   566,   566,   566,   566,   566,
     566,   517,  -204,  -204,   184,   997,  -204,   505,   137,   505,
     520,   253,    83,   505,   273,   288,   304,  1068,   307,   343,
     453,   454,   523,    70,  1139,  2488,  2488,   521,  1210,  -204,
     498,   422,  -204,    69,   380,  -204,  -204,  -204,   110,   498,
    2488,  -204,  -204,  -204,   505,  -204,  -204,  -204,   498,  -204,
     522,   525,   532,   473,   249,   137,   137,   498,   498,   526,
    2585,  -204,  1281,  1352,  2488,  -204,   -25,  -204,   422,  -204,
     -25,  1423,  -204,   155,  2488,    66,  2488,   536,   137,    17,
      61,   537,  -204,   -25,  -204,  -204,  1494,  -204,  -204,   498,
    1565,   498,   519,   539,   177,  -204,  1636,   498,   783,   783,
     498,   220,  -204,   342,   209,   128,   547,  -204,   546,  -204,
    -204,   348,   173,   553,   554,   555,   560,   309,   -25,  -204,
     561,  -204,   565,   567,  -204,   266,   568,  2488,   569,  -204,
     571,   576,   584,   585,  -204,   498,   498,   498,  2488,   588,
     587,  2488,  1707,  2488,  2488,  2488,  2488,  2488,   -25,   405,
     362,  1778,   498,  2488,  1849,  -204,  1920,  1991,  2062,  2133,
    2204,  -204,   592,  -204,   381,  2275,  -204,  -204,  -204,  -204,
    -204,  -204,  2488,   593,  -204,  2346,  2488,  -204,  2417,  -204
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,    57,    58,    59,     0,     0,     2,     4,     0,
       0,     6,     0,     0,     1,     3,     5,     0,     0,     0,
       0,     0,   113,   109,   110,   111,   112,     0,     0,     0,
       0,    13,    16,     0,    17,    18,    14,     0,     0,     0,
      11,     0,     0,    63,     0,     0,    19,    15,     0,     0,
      81,    12,   113,     0,     0,     0,    56,    94,     0,     0,
      78,     0,     0,     0,   113,     0,    62,    65,     0,    63,
       0,     0,     0,    63,     0,    55,    94,     0,    63,     0,
      79,     0,    77,     0,    80,     0,     0,     0,    66,     0,
       0,     0,     0,    63,    63,     0,     0,   134,   136,   135,
     137,   138,   132,     0,     0,     0,     0,     0,     0,     0,
     139,   108,    95,   107,   106,   118,   125,   147,   140,    63,
      83,     0,     0,    64,     0,    67,     0,   132,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      21,    34,     0,    29,    30,    32,     0,     0,     0,     0,
       0,     0,   147,   140,     0,     0,     0,    63,     0,     0,
       0,   133,   142,     0,   131,   117,     0,     0,   144,     0,
       0,     0,     0,   154,   155,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    82,     0,     0,
       0,     0,    89,    90,    91,    92,    93,     0,   133,   142,
       0,     0,   144,    54,     0,     0,     0,     0,     0,    26,
      25,    68,    20,    33,    27,    24,    22,    23,    94,    28,
      31,     0,     0,     0,     0,     0,   150,   149,     0,   158,
     143,     0,     0,   141,     0,     0,     0,   116,   115,     0,
     126,   127,   128,   129,   130,   122,   121,   124,   123,   119,
     120,     0,    70,   100,     0,     0,    84,     0,   143,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   113,     0,
       0,     0,     0,    96,     0,     0,     0,     0,     0,   151,
       0,   159,   153,     0,   156,   145,   146,    61,     0,     0,
       0,    99,    76,    85,     0,    86,     8,     7,     0,    87,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    94,
       0,    69,     0,     0,     0,    75,   148,   152,   157,    60,
     114,     0,    88,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    98,    97,    73,    72,     0,    74,     9,     0,
       0,     0,     0,     0,     0,    52,     0,     0,     0,     0,
       0,     0,    71,     0,    41,     0,     0,    48,     0,    51,
      40,     0,   132,     0,   140,     0,   140,     0,   105,   101,
       0,    10,     0,     0,    42,    44,     0,     0,     0,    39,
       0,     0,     0,     0,   103,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   104,     0,
       0,     0,     0,     0,     0,    50,     0,     0,     0,     0,
       0,   102,     0,    45,     0,     0,    53,    49,    35,    37,
      36,    38,     0,     0,    43,     0,     0,    47,     0,    46
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -204,  -204,  -204,   570,  -204,   399,  -204,    63,   -16,   262,
     418,  -204,  -204,  -204,  -204,  -204,  -204,  -204,  -204,  -204,
     263,  -204,  -204,    25,  -204,    -4,  -204,   529,  -204,   577,
     581,   -20,   -53,  -204,  -203,  -195,    40,  -204,   -87,  -204,
    -204,   224,  -175,    -7,  -204,   470,  -204,   261,    60,   -47,
     -91,  -100
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     6,     7,     8,   137,   138,     9,    30,    31,   139,
     140,   141,   142,   143,   144,   374,   375,   145,   343,   344,
     345,   146,    32,    33,   111,    65,    66,    67,    34,    35,
      36,    59,    60,    11,   147,   197,   148,   149,   198,   332,
     351,   367,   112,   150,   113,   114,   115,   151,   228,   117,
     118,   199
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
     153,   125,   162,   257,   259,   270,    82,   263,   168,   170,
     171,    38,    18,   159,    51,   161,   231,   124,    78,   190,
      94,    48,   256,    38,    82,    10,    55,    41,  -113,   159,
     202,   153,    10,   124,    38,    77,    68,   124,    70,   192,
     193,   194,   195,   279,   152,    79,    51,    79,   153,   280,
      77,   170,   171,    45,    38,    38,   196,    19,    37,    57,
      79,   230,    68,   294,    58,    89,    68,    51,    13,    92,
      37,    68,    42,    54,    96,   152,    38,    14,    38,   317,
      68,    37,   293,   190,   295,   280,    68,    68,   299,   155,
     156,   160,   152,   160,   232,   170,   171,   153,   258,   298,
     153,    37,    37,   348,    62,    51,   310,   160,   253,   257,
     259,   263,    68,    12,    38,   186,   153,   170,   171,   322,
     319,   173,   174,    37,    83,    37,   280,   231,   170,   171,
     153,   273,   289,   294,   153,   341,   342,   192,   193,   194,
     195,   152,   281,   376,   152,   363,   365,   349,   121,    17,
      68,   170,   171,   224,   196,    20,   192,   193,   194,   195,
     152,    37,   170,   171,   153,   338,    16,    71,   305,   306,
      76,   339,    58,   196,   152,    58,   153,    21,   152,    52,
      39,   304,   159,   153,   153,   153,   124,   153,    40,   170,
     171,   233,   192,   193,   194,   195,    43,   318,   291,   153,
      44,   272,    81,    63,   328,   232,    22,    58,   152,   196,
      23,    24,    25,    26,    49,   170,   171,   285,   170,   171,
     152,   153,   153,   153,   232,    56,    53,   152,   152,   152,
     153,   152,   369,   153,    61,   153,   370,    23,    24,    25,
      26,   170,   171,   152,    69,   153,   341,   358,   271,   153,
       2,     3,     4,    27,    72,   153,   286,   364,   366,    90,
     160,    73,   190,   297,    58,   152,   152,   152,   192,   193,
     194,   195,   173,   174,   152,   372,   373,   152,    74,   152,
     170,   171,   179,   300,    86,   196,   153,   170,   171,   152,
      95,   283,    75,   152,    80,    58,   288,   153,   301,   152,
     153,   153,   153,   153,   153,   153,   153,   170,   171,    85,
     153,    87,   153,   153,   302,   153,   153,   153,   153,   153,
     124,   384,   170,   171,   153,   385,   192,   193,   194,   195,
     152,   153,   389,   390,   153,   153,   160,   153,   170,   171,
     116,   152,    88,   196,   152,   152,   152,   152,   152,   152,
     152,    91,   371,    78,   152,    64,   152,   152,   379,   152,
     152,   152,   152,   152,   116,   164,   116,    22,   152,   170,
     171,    50,   412,   172,    93,   152,   170,   171,   152,   152,
     119,   152,   170,   171,   188,   116,    23,    24,    25,    26,
     122,   423,   116,   124,   160,   126,   170,   171,    23,    24,
      25,    26,    94,   157,    97,    98,    99,   100,   101,   102,
     103,     2,     3,     4,    27,   170,   171,   411,    28,    29,
     116,   385,   154,   158,   166,   104,   167,   116,   116,   169,
     160,   116,   116,   116,   191,   190,   240,   241,   242,   243,
     244,   245,   246,   247,   248,   249,   250,   268,   207,   106,
     107,   116,   108,   255,   200,   201,   204,   205,   116,   206,
     208,   116,   116,   110,   209,   116,   116,   116,   210,   267,
     213,   218,   214,   215,   216,   217,   173,   174,    23,    24,
      25,    26,   219,   274,   177,   178,   179,   278,   220,   221,
     269,     1,   116,     2,     3,     4,   222,   116,   223,     5,
     225,    97,    98,    99,   100,   101,   102,   103,    97,    98,
      99,   100,   101,   102,   103,   229,   232,   236,   116,   251,
     116,   275,   104,   276,   116,   277,   284,   171,   290,   104,
     296,   309,   314,   324,   356,   105,   325,   312,   313,   307,
     308,   116,   105,   326,   327,   347,   106,   107,   350,   108,
     116,   357,   321,   106,   107,   116,   108,   212,   377,   116,
     110,   378,    79,   380,   381,   382,   109,   110,   116,   116,
     383,   116,   386,   163,   387,   165,   336,    15,   388,   391,
     393,    22,   394,   173,   174,    84,   340,   395,   346,   175,
     176,   177,   178,   179,   189,   396,   397,   402,   403,   260,
     116,   203,   116,   422,   426,    46,   212,   359,   116,    47,
     399,   116,    23,    24,    25,    26,   123,     0,     0,     0,
       0,     0,     0,     0,     0,     2,     3,     4,    27,   227,
       0,     0,    28,    29,     0,    22,   234,   235,     0,   392,
     237,   238,   239,     0,     0,     0,   116,   116,   116,     0,
     401,     0,     0,   404,     0,   406,   407,   408,   409,   410,
     254,     0,     0,   116,     0,   415,    23,    24,    25,    26,
     261,   262,     0,   212,   264,   265,   266,     0,     0,     2,
       3,     4,    27,     0,   425,   212,    28,    29,   428,     0,
       0,     0,   212,     0,     0,     0,   212,     0,     0,     0,
       0,   227,     0,     0,     0,     0,   227,    97,    98,    99,
     100,   101,   102,   103,   226,    97,    98,    99,   100,   101,
     102,   103,     0,     0,     0,     0,     0,     0,   104,     0,
     212,   212,     0,     0,     0,     0,   104,     0,     0,   212,
       0,   105,     0,     0,     0,     0,     0,     0,     0,   105,
     316,     0,   106,   107,   212,   108,   129,     0,   212,   320,
     106,   107,     0,   108,   212,     0,   110,     0,   323,     0,
       0,     0,     0,     0,   110,     0,     0,   329,   330,     0,
     333,     0,     0,     0,     0,     0,    97,    98,    99,   100,
     101,   362,   103,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   104,     0,   353,
     212,   355,     0,     0,     0,     0,     0,   361,     0,   212,
     368,     0,   212,     0,   212,   212,   212,   212,   212,     0,
       0,   106,   107,   212,   130,     0,     0,    22,     0,     0,
       0,   120,     0,   212,     0,   110,   212,     0,     0,     0,
       0,     0,     0,     0,     0,   398,   368,   400,    97,    98,
      99,   100,   101,   127,   103,     0,     0,   211,    23,    24,
      25,    26,   414,     0,     0,     0,     0,     0,     0,   104,
       0,     2,     3,     4,    27,     0,     0,     0,    28,    29,
       0,     0,     0,     0,    23,    24,    25,    26,   128,   129,
       0,     0,     0,   106,   107,     0,   130,     0,     0,    22,
       0,     0,   131,   187,     0,     0,     0,   110,     0,     0,
     132,     0,     0,   133,     0,     0,   134,   135,   136,    97,
      98,    99,   100,   101,   127,   103,     0,     0,   252,     0,
      23,    24,    25,    26,     0,     0,     0,     0,     0,     0,
     104,     0,     0,     2,     3,     4,    27,     0,     0,     0,
      28,    29,     0,     0,     0,    23,    24,    25,    26,   128,
     129,     0,     0,     0,   106,   107,     0,   130,     0,     0,
       0,     0,     0,   131,     0,     0,     0,     0,   110,     0,
       0,   132,     0,     0,   133,     0,     0,   134,   135,   136,
      97,    98,    99,   100,   101,   127,   103,     0,     0,   292,
       0,     0,     0,     0,     0,     0,   173,   174,     0,     0,
       0,   104,   175,   176,   177,   178,   179,   180,   181,   182,
     183,   184,   185,     0,     0,     0,    23,    24,    25,    26,
     128,   129,     0,     0,     0,   106,   107,     0,   130,     0,
       0,     0,     0,     0,   131,     0,     0,     0,     0,   110,
       0,     0,   132,     0,     0,   133,     0,     0,   134,   135,
     136,    97,    98,    99,   100,   101,   127,   103,     0,     0,
     303,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   104,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    23,    24,    25,
      26,   128,   129,     0,     0,     0,   106,   107,     0,   130,
       0,     0,     0,     0,     0,   131,     0,     0,     0,     0,
     110,     0,     0,   132,     0,     0,   133,     0,     0,   134,
     135,   136,    97,    98,    99,   100,   101,   127,   103,     0,
       0,   311,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   104,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    23,    24,
      25,    26,   128,   129,     0,     0,     0,   106,   107,     0,
     130,     0,     0,     0,     0,     0,   131,     0,     0,     0,
       0,   110,     0,     0,   132,     0,     0,   133,     0,     0,
     134,   135,   136,    97,    98,    99,   100,   101,   127,   103,
       0,     0,   315,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   104,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    23,
      24,    25,    26,   128,   129,     0,     0,     0,   106,   107,
       0,   130,     0,     0,     0,     0,     0,   131,     0,     0,
       0,     0,   110,     0,     0,   132,     0,     0,   133,     0,
       0,   134,   135,   136,    97,    98,    99,   100,   101,   127,
     103,     0,     0,   334,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   104,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      23,    24,    25,    26,   128,   129,     0,     0,     0,   106,
     107,     0,   130,     0,     0,     0,     0,     0,   131,     0,
       0,     0,     0,   110,     0,     0,   132,     0,     0,   133,
       0,     0,   134,   135,   136,    97,    98,    99,   100,   101,
     127,   103,     0,     0,   335,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   104,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    23,    24,    25,    26,   128,   129,     0,     0,     0,
     106,   107,     0,   130,     0,     0,     0,     0,     0,   131,
       0,     0,     0,     0,   110,     0,     0,   132,     0,     0,
     133,     0,     0,   134,   135,   136,    97,    98,    99,   100,
     101,   127,   103,     0,     0,   337,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   104,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    23,    24,    25,    26,   128,   129,     0,     0,
       0,   106,   107,     0,   130,     0,     0,     0,     0,     0,
     131,     0,     0,     0,     0,   110,     0,     0,   132,     0,
       0,   133,     0,     0,   134,   135,   136,    97,    98,    99,
     100,   101,   127,   103,     0,     0,   352,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   104,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    23,    24,    25,    26,   128,   129,     0,
       0,     0,   106,   107,     0,   130,     0,     0,     0,     0,
       0,   131,     0,     0,     0,     0,   110,     0,     0,   132,
       0,     0,   133,     0,     0,   134,   135,   136,    97,    98,
      99,   100,   101,   127,   103,     0,     0,   354,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   104,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    23,    24,    25,    26,   128,   129,
       0,     0,     0,   106,   107,     0,   130,     0,     0,     0,
       0,     0,   131,     0,     0,     0,     0,   110,     0,     0,
     132,     0,     0,   133,     0,     0,   134,   135,   136,    97,
      98,    99,   100,   101,   127,   103,     0,     0,   360,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     104,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    23,    24,    25,    26,   128,
     129,     0,     0,     0,   106,   107,     0,   130,     0,     0,
       0,     0,     0,   131,     0,     0,     0,     0,   110,     0,
       0,   132,     0,     0,   133,     0,     0,   134,   135,   136,
      97,    98,    99,   100,   101,   127,   103,     0,     0,   405,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   104,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    23,    24,    25,    26,
     128,   129,     0,     0,     0,   106,   107,     0,   130,     0,
       0,     0,     0,     0,   131,     0,     0,     0,     0,   110,
       0,     0,   132,     0,     0,   133,     0,     0,   134,   135,
     136,    97,    98,    99,   100,   101,   127,   103,     0,     0,
     413,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   104,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    23,    24,    25,
      26,   128,   129,     0,     0,     0,   106,   107,     0,   130,
       0,     0,     0,     0,     0,   131,     0,     0,     0,     0,
     110,     0,     0,   132,     0,     0,   133,     0,     0,   134,
     135,   136,    97,    98,    99,   100,   101,   127,   103,     0,
       0,   416,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   104,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    23,    24,
      25,    26,   128,   129,     0,     0,     0,   106,   107,     0,
     130,     0,     0,     0,     0,     0,   131,     0,     0,     0,
       0,   110,     0,     0,   132,     0,     0,   133,     0,     0,
     134,   135,   136,    97,    98,    99,   100,   101,   127,   103,
       0,     0,   417,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   104,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    23,
      24,    25,    26,   128,   129,     0,     0,     0,   106,   107,
       0,   130,     0,     0,     0,     0,     0,   131,     0,     0,
       0,     0,   110,     0,     0,   132,     0,     0,   133,     0,
       0,   134,   135,   136,    97,    98,    99,   100,   101,   127,
     103,     0,     0,   418,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   104,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      23,    24,    25,    26,   128,   129,     0,     0,     0,   106,
     107,     0,   130,     0,     0,     0,     0,     0,   131,     0,
       0,     0,     0,   110,     0,     0,   132,     0,     0,   133,
       0,     0,   134,   135,   136,    97,    98,    99,   100,   101,
     127,   103,     0,     0,   419,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   104,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    23,    24,    25,    26,   128,   129,     0,     0,     0,
     106,   107,     0,   130,     0,     0,     0,     0,     0,   131,
       0,     0,     0,     0,   110,     0,     0,   132,     0,     0,
     133,     0,     0,   134,   135,   136,    97,    98,    99,   100,
     101,   127,   103,     0,     0,   420,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   104,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    23,    24,    25,    26,   128,   129,     0,     0,
       0,   106,   107,     0,   130,     0,     0,     0,     0,     0,
     131,     0,     0,     0,     0,   110,     0,     0,   132,     0,
       0,   133,     0,     0,   134,   135,   136,    97,    98,    99,
     100,   101,   127,   103,     0,     0,   421,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   104,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    23,    24,    25,    26,   128,   129,     0,
       0,     0,   106,   107,     0,   130,     0,     0,     0,     0,
       0,   131,     0,     0,     0,     0,   110,     0,     0,   132,
       0,     0,   133,     0,     0,   134,   135,   136,    97,    98,
      99,   100,   101,   127,   103,     0,     0,   424,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   104,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    23,    24,    25,    26,   128,   129,
       0,     0,     0,   106,   107,     0,   130,     0,     0,     0,
       0,     0,   131,     0,     0,     0,     0,   110,     0,     0,
     132,     0,     0,   133,     0,     0,   134,   135,   136,    97,
      98,    99,   100,   101,   127,   103,     0,     0,   427,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     104,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    23,    24,    25,    26,   128,
     129,     0,     0,     0,   106,   107,     0,   130,     0,     0,
       0,     0,     0,   131,     0,     0,     0,     0,   110,     0,
       0,   132,     0,     0,   133,     0,     0,   134,   135,   136,
      97,    98,    99,   100,   101,   127,   103,     0,     0,   429,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   104,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    23,    24,    25,    26,
     128,   129,     0,     0,     0,   106,   107,     0,   130,     0,
       0,     0,     0,     0,   131,     0,     0,     0,     0,   110,
       0,     0,   132,     0,     0,   133,     0,     0,   134,   135,
     136,    97,    98,    99,   100,   101,   127,   103,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   104,     0,     0,     0,     0,    97,    98,    99,
     100,   101,   102,   103,   282,     0,     0,    23,    24,    25,
      26,   128,   129,     0,     0,     0,   106,   107,   104,   130,
       0,     0,     0,     0,     0,   131,     0,     0,     0,     0,
     110,   105,     0,   132,     0,     0,   133,     0,     0,   134,
     135,   136,   106,   107,     0,   108,    97,    98,    99,   100,
     101,   102,   103,   287,     0,     0,   110,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   104,    97,    98,
      99,   100,   101,   102,   103,     0,   331,     0,     0,     0,
     105,     0,     0,     0,     0,     0,     0,     0,     0,   104,
       0,   106,   107,     0,   108,     0,     0,     0,     0,     0,
       0,     0,   105,     0,     0,   110,     0,     0,     0,     0,
       0,     0,     0,   106,   107,     0,   108,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   110
};

static const yytype_int16 yycheck[] =
{
      91,    88,   102,   198,   199,   208,    59,   202,   108,    34,
      35,    18,    11,     9,    30,   102,     9,    13,     9,    13,
       9,    28,   197,    30,    77,     0,    33,    11,     8,     9,
     130,   122,     7,    13,    41,    55,    43,    13,    45,    19,
      20,    21,    22,    10,    91,    36,    62,    36,   139,    16,
      70,    34,    35,    28,    61,    62,    36,    56,    18,     8,
      36,   161,    69,   258,    13,    69,    73,    83,     9,    73,
      30,    78,    56,    33,    78,   122,    83,     0,    85,    10,
      87,    41,   257,    13,   259,    16,    93,    94,   263,    93,
      94,    87,   139,    87,    87,    34,    35,   188,   198,    16,
     191,    61,    62,    86,    41,   121,    36,    87,    14,   304,
     305,   306,   119,     8,   121,   119,   207,    34,    35,   294,
      10,    17,    18,    83,    61,    85,    16,     9,    34,    35,
     221,   218,    15,   328,   225,    69,    70,    19,    20,    21,
      22,   188,   229,    15,   191,   348,   349,    86,    85,    50,
     157,    34,    35,   157,    36,     7,    19,    20,    21,    22,
     207,   121,    34,    35,   255,    10,    86,     8,   268,   269,
       8,    16,    13,    36,   221,    13,   267,     8,   225,     8,
       8,   268,     9,   274,   275,   276,    13,   278,    10,    34,
      35,    10,    19,    20,    21,    22,     9,   284,    14,   290,
       8,   208,     8,     8,   304,    87,     8,    13,   255,    36,
      39,    40,    41,    42,     9,    34,    35,    10,    34,    35,
     267,   312,   313,   314,    87,    86,    55,   274,   275,   276,
     321,   278,    12,   324,    11,   326,    16,    39,    40,    41,
      42,    34,    35,   290,     9,   336,    69,    70,   208,   340,
      52,    53,    54,    55,    10,   346,    10,   348,   349,     8,
      87,     9,    13,    10,    13,   312,   313,   314,    19,    20,
      21,    22,    17,    18,   321,    66,    67,   324,     8,   326,
      34,    35,    27,    10,    10,    36,   377,    34,    35,   336,
       8,   231,    86,   340,    14,    13,   236,   388,    10,   346,
     391,   392,   393,   394,   395,   396,   397,    34,    35,    11,
     401,    16,   403,   404,    10,   406,   407,   408,   409,   410,
      13,    12,    34,    35,   415,    16,    19,    20,    21,    22,
     377,   422,    66,    67,   425,   426,    87,   428,    34,    35,
      79,   388,     8,    36,   391,   392,   393,   394,   395,   396,
     397,    11,    10,     9,   401,     8,   403,   404,    10,   406,
     407,   408,   409,   410,   103,   104,   105,     8,   415,    34,
      35,    12,    10,    38,     9,   422,    34,    35,   425,   426,
       9,   428,    34,    35,   122,   124,    39,    40,    41,    42,
      11,    10,   131,    13,    87,    10,    34,    35,    39,    40,
      41,    42,     9,     9,     3,     4,     5,     6,     7,     8,
       9,    52,    53,    54,    55,    34,    35,    12,    59,    60,
     159,    16,    10,    10,     9,    24,     9,   166,   167,     8,
      87,   170,   171,   172,    11,    13,   175,   176,   177,   178,
     179,   180,   181,   182,   183,   184,   185,     8,    11,    48,
      49,   190,    51,   191,     9,     9,     9,     9,   197,     9,
       9,   200,   201,    62,    86,   204,   205,   206,    86,   207,
      86,     8,    86,    86,    86,    86,    17,    18,    39,    40,
      41,    42,    86,   221,    25,    26,    27,   225,    86,    11,
      51,    50,   231,    52,    53,    54,    10,   236,    10,    58,
      11,     3,     4,     5,     6,     7,     8,     9,     3,     4,
       5,     6,     7,     8,     9,     8,    87,     9,   257,    10,
     259,    11,    24,    11,   263,    10,     8,    35,    11,    24,
      10,     8,    11,    11,    15,    37,    11,   275,   276,    86,
      86,   280,    37,    11,    71,     9,    48,    49,    11,    51,
     289,    12,   290,    48,    49,   294,    51,   139,    11,   298,
      62,    15,    36,    10,    10,    10,    61,    62,   307,   308,
      10,   310,    11,   103,     9,   105,   314,     7,    11,    11,
      11,     8,    11,    17,    18,    12,   324,    11,   326,    23,
      24,    25,    26,    27,   124,    11,    11,     9,    11,   200,
     339,   131,   341,    11,    11,    28,   188,   344,   347,    28,
     386,   350,    39,    40,    41,    42,    87,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    52,    53,    54,    55,   159,
      -1,    -1,    59,    60,    -1,     8,   166,   167,    -1,   377,
     170,   171,   172,    -1,    -1,    -1,   385,   386,   387,    -1,
     388,    -1,    -1,   391,    -1,   393,   394,   395,   396,   397,
     190,    -1,    -1,   402,    -1,   403,    39,    40,    41,    42,
     200,   201,    -1,   255,   204,   205,   206,    -1,    -1,    52,
      53,    54,    55,    -1,   422,   267,    59,    60,   426,    -1,
      -1,    -1,   274,    -1,    -1,    -1,   278,    -1,    -1,    -1,
      -1,   231,    -1,    -1,    -1,    -1,   236,     3,     4,     5,
       6,     7,     8,     9,    10,     3,     4,     5,     6,     7,
       8,     9,    -1,    -1,    -1,    -1,    -1,    -1,    24,    -1,
     312,   313,    -1,    -1,    -1,    -1,    24,    -1,    -1,   321,
      -1,    37,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    37,
     280,    -1,    48,    49,   336,    51,    44,    -1,   340,   289,
      48,    49,    -1,    51,   346,    -1,    62,    -1,   298,    -1,
      -1,    -1,    -1,    -1,    62,    -1,    -1,   307,   308,    -1,
     310,    -1,    -1,    -1,    -1,    -1,     3,     4,     5,     6,
       7,     8,     9,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    24,    -1,   339,
     392,   341,    -1,    -1,    -1,    -1,    -1,   347,    -1,   401,
     350,    -1,   404,    -1,   406,   407,   408,   409,   410,    -1,
      -1,    48,    49,   415,    51,    -1,    -1,     8,    -1,    -1,
      -1,    12,    -1,   425,    -1,    62,   428,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   385,   386,   387,     3,     4,
       5,     6,     7,     8,     9,    -1,    -1,    12,    39,    40,
      41,    42,   402,    -1,    -1,    -1,    -1,    -1,    -1,    24,
      -1,    52,    53,    54,    55,    -1,    -1,    -1,    59,    60,
      -1,    -1,    -1,    -1,    39,    40,    41,    42,    43,    44,
      -1,    -1,    -1,    48,    49,    -1,    51,    -1,    -1,     8,
      -1,    -1,    57,    12,    -1,    -1,    -1,    62,    -1,    -1,
      65,    -1,    -1,    68,    -1,    -1,    71,    72,    73,     3,
       4,     5,     6,     7,     8,     9,    -1,    -1,    12,    -1,
      39,    40,    41,    42,    -1,    -1,    -1,    -1,    -1,    -1,
      24,    -1,    -1,    52,    53,    54,    55,    -1,    -1,    -1,
      59,    60,    -1,    -1,    -1,    39,    40,    41,    42,    43,
      44,    -1,    -1,    -1,    48,    49,    -1,    51,    -1,    -1,
      -1,    -1,    -1,    57,    -1,    -1,    -1,    -1,    62,    -1,
      -1,    65,    -1,    -1,    68,    -1,    -1,    71,    72,    73,
       3,     4,     5,     6,     7,     8,     9,    -1,    -1,    12,
      -1,    -1,    -1,    -1,    -1,    -1,    17,    18,    -1,    -1,
      -1,    24,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    -1,    -1,    -1,    39,    40,    41,    42,
      43,    44,    -1,    -1,    -1,    48,    49,    -1,    51,    -1,
      -1,    -1,    -1,    -1,    57,    -1,    -1,    -1,    -1,    62,
      -1,    -1,    65,    -1,    -1,    68,    -1,    -1,    71,    72,
      73,     3,     4,     5,     6,     7,     8,     9,    -1,    -1,
      12,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    24,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    39,    40,    41,
      42,    43,    44,    -1,    -1,    -1,    48,    49,    -1,    51,
      -1,    -1,    -1,    -1,    -1,    57,    -1,    -1,    -1,    -1,
      62,    -1,    -1,    65,    -1,    -1,    68,    -1,    -1,    71,
      72,    73,     3,     4,     5,     6,     7,     8,     9,    -1,
      -1,    12,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    24,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    39,    40,
      41,    42,    43,    44,    -1,    -1,    -1,    48,    49,    -1,
      51,    -1,    -1,    -1,    -1,    -1,    57,    -1,    -1,    -1,
      -1,    62,    -1,    -1,    65,    -1,    -1,    68,    -1,    -1,
      71,    72,    73,     3,     4,     5,     6,     7,     8,     9,
      -1,    -1,    12,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    24,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    39,
      40,    41,    42,    43,    44,    -1,    -1,    -1,    48,    49,
      -1,    51,    -1,    -1,    -1,    -1,    -1,    57,    -1,    -1,
      -1,    -1,    62,    -1,    -1,    65,    -1,    -1,    68,    -1,
      -1,    71,    72,    73,     3,     4,     5,     6,     7,     8,
       9,    -1,    -1,    12,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    24,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      39,    40,    41,    42,    43,    44,    -1,    -1,    -1,    48,
      49,    -1,    51,    -1,    -1,    -1,    -1,    -1,    57,    -1,
      -1,    -1,    -1,    62,    -1,    -1,    65,    -1,    -1,    68,
      -1,    -1,    71,    72,    73,     3,     4,     5,     6,     7,
       8,     9,    -1,    -1,    12,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    24,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    39,    40,    41,    42,    43,    44,    -1,    -1,    -1,
      48,    49,    -1,    51,    -1,    -1,    -1,    -1,    -1,    57,
      -1,    -1,    -1,    -1,    62,    -1,    -1,    65,    -1,    -1,
      68,    -1,    -1,    71,    72,    73,     3,     4,     5,     6,
       7,     8,     9,    -1,    -1,    12,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    24,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    39,    40,    41,    42,    43,    44,    -1,    -1,
      -1,    48,    49,    -1,    51,    -1,    -1,    -1,    -1,    -1,
      57,    -1,    -1,    -1,    -1,    62,    -1,    -1,    65,    -1,
      -1,    68,    -1,    -1,    71,    72,    73,     3,     4,     5,
       6,     7,     8,     9,    -1,    -1,    12,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    24,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    39,    40,    41,    42,    43,    44,    -1,
      -1,    -1,    48,    49,    -1,    51,    -1,    -1,    -1,    -1,
      -1,    57,    -1,    -1,    -1,    -1,    62,    -1,    -1,    65,
      -1,    -1,    68,    -1,    -1,    71,    72,    73,     3,     4,
       5,     6,     7,     8,     9,    -1,    -1,    12,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    24,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    39,    40,    41,    42,    43,    44,
      -1,    -1,    -1,    48,    49,    -1,    51,    -1,    -1,    -1,
      -1,    -1,    57,    -1,    -1,    -1,    -1,    62,    -1,    -1,
      65,    -1,    -1,    68,    -1,    -1,    71,    72,    73,     3,
       4,     5,     6,     7,     8,     9,    -1,    -1,    12,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      24,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    39,    40,    41,    42,    43,
      44,    -1,    -1,    -1,    48,    49,    -1,    51,    -1,    -1,
      -1,    -1,    -1,    57,    -1,    -1,    -1,    -1,    62,    -1,
      -1,    65,    -1,    -1,    68,    -1,    -1,    71,    72,    73,
       3,     4,     5,     6,     7,     8,     9,    -1,    -1,    12,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    24,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    39,    40,    41,    42,
      43,    44,    -1,    -1,    -1,    48,    49,    -1,    51,    -1,
      -1,    -1,    -1,    -1,    57,    -1,    -1,    -1,    -1,    62,
      -1,    -1,    65,    -1,    -1,    68,    -1,    -1,    71,    72,
      73,     3,     4,     5,     6,     7,     8,     9,    -1,    -1,
      12,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    24,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    39,    40,    41,
      42,    43,    44,    -1,    -1,    -1,    48,    49,    -1,    51,
      -1,    -1,    -1,    -1,    -1,    57,    -1,    -1,    -1,    -1,
      62,    -1,    -1,    65,    -1,    -1,    68,    -1,    -1,    71,
      72,    73,     3,     4,     5,     6,     7,     8,     9,    -1,
      -1,    12,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    24,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    39,    40,
      41,    42,    43,    44,    -1,    -1,    -1,    48,    49,    -1,
      51,    -1,    -1,    -1,    -1,    -1,    57,    -1,    -1,    -1,
      -1,    62,    -1,    -1,    65,    -1,    -1,    68,    -1,    -1,
      71,    72,    73,     3,     4,     5,     6,     7,     8,     9,
      -1,    -1,    12,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    24,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    39,
      40,    41,    42,    43,    44,    -1,    -1,    -1,    48,    49,
      -1,    51,    -1,    -1,    -1,    -1,    -1,    57,    -1,    -1,
      -1,    -1,    62,    -1,    -1,    65,    -1,    -1,    68,    -1,
      -1,    71,    72,    73,     3,     4,     5,     6,     7,     8,
       9,    -1,    -1,    12,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    24,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      39,    40,    41,    42,    43,    44,    -1,    -1,    -1,    48,
      49,    -1,    51,    -1,    -1,    -1,    -1,    -1,    57,    -1,
      -1,    -1,    -1,    62,    -1,    -1,    65,    -1,    -1,    68,
      -1,    -1,    71,    72,    73,     3,     4,     5,     6,     7,
       8,     9,    -1,    -1,    12,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    24,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    39,    40,    41,    42,    43,    44,    -1,    -1,    -1,
      48,    49,    -1,    51,    -1,    -1,    -1,    -1,    -1,    57,
      -1,    -1,    -1,    -1,    62,    -1,    -1,    65,    -1,    -1,
      68,    -1,    -1,    71,    72,    73,     3,     4,     5,     6,
       7,     8,     9,    -1,    -1,    12,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    24,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    39,    40,    41,    42,    43,    44,    -1,    -1,
      -1,    48,    49,    -1,    51,    -1,    -1,    -1,    -1,    -1,
      57,    -1,    -1,    -1,    -1,    62,    -1,    -1,    65,    -1,
      -1,    68,    -1,    -1,    71,    72,    73,     3,     4,     5,
       6,     7,     8,     9,    -1,    -1,    12,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    24,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    39,    40,    41,    42,    43,    44,    -1,
      -1,    -1,    48,    49,    -1,    51,    -1,    -1,    -1,    -1,
      -1,    57,    -1,    -1,    -1,    -1,    62,    -1,    -1,    65,
      -1,    -1,    68,    -1,    -1,    71,    72,    73,     3,     4,
       5,     6,     7,     8,     9,    -1,    -1,    12,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    24,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    39,    40,    41,    42,    43,    44,
      -1,    -1,    -1,    48,    49,    -1,    51,    -1,    -1,    -1,
      -1,    -1,    57,    -1,    -1,    -1,    -1,    62,    -1,    -1,
      65,    -1,    -1,    68,    -1,    -1,    71,    72,    73,     3,
       4,     5,     6,     7,     8,     9,    -1,    -1,    12,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      24,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    39,    40,    41,    42,    43,
      44,    -1,    -1,    -1,    48,    49,    -1,    51,    -1,    -1,
      -1,    -1,    -1,    57,    -1,    -1,    -1,    -1,    62,    -1,
      -1,    65,    -1,    -1,    68,    -1,    -1,    71,    72,    73,
       3,     4,     5,     6,     7,     8,     9,    -1,    -1,    12,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    24,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    39,    40,    41,    42,
      43,    44,    -1,    -1,    -1,    48,    49,    -1,    51,    -1,
      -1,    -1,    -1,    -1,    57,    -1,    -1,    -1,    -1,    62,
      -1,    -1,    65,    -1,    -1,    68,    -1,    -1,    71,    72,
      73,     3,     4,     5,     6,     7,     8,     9,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    24,    -1,    -1,    -1,    -1,     3,     4,     5,
       6,     7,     8,     9,    10,    -1,    -1,    39,    40,    41,
      42,    43,    44,    -1,    -1,    -1,    48,    49,    24,    51,
      -1,    -1,    -1,    -1,    -1,    57,    -1,    -1,    -1,    -1,
      62,    37,    -1,    65,    -1,    -1,    68,    -1,    -1,    71,
      72,    73,    48,    49,    -1,    51,     3,     4,     5,     6,
       7,     8,     9,    10,    -1,    -1,    62,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    24,     3,     4,
       5,     6,     7,     8,     9,    -1,    11,    -1,    -1,    -1,
      37,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    24,
      -1,    48,    49,    -1,    51,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    37,    -1,    -1,    62,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    48,    49,    -1,    51,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    62
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    50,    52,    53,    54,    58,    89,    90,    91,    94,
     111,   121,     8,     9,     0,    91,    86,    50,    11,    56,
       7,     8,     8,    39,    40,    41,    42,    55,    59,    60,
      95,    96,   110,   111,   116,   117,   118,   124,   131,     8,
      10,    11,    56,     9,     8,   111,   117,   118,   131,     9,
      12,    96,     8,    55,   124,   131,    86,     8,    13,   119,
     120,    11,    95,     8,     8,   113,   114,   115,   131,     9,
     131,     8,    10,     9,     8,    86,     8,   119,     9,    36,
      14,     8,   120,    95,    12,    11,    10,    16,     8,   113,
       8,    11,   113,     9,     9,     8,   113,     3,     4,     5,
       6,     7,     8,     9,    24,    37,    48,    49,    51,    61,
      62,   112,   130,   132,   133,   134,   135,   137,   138,     9,
      12,    95,    11,   115,    13,   126,    10,     8,    43,    44,
      51,    57,    65,    68,    71,    72,    73,    92,    93,    97,
      98,    99,   100,   101,   102,   105,   109,   122,   124,   125,
     131,   135,   137,   138,    10,   113,   113,     9,    10,     9,
      87,   126,   139,   133,   135,   133,     9,     9,   139,     8,
      34,    35,    38,    17,    18,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,   113,    12,    97,   133,
      13,    11,    19,    20,    21,    22,    36,   123,   126,   139,
       9,     9,   139,   133,     9,     9,     9,    11,     9,    86,
      86,    12,    98,    86,    86,    86,    86,    86,     8,    86,
      86,    11,    10,    10,   113,    11,    10,   133,   136,     8,
     139,     9,    87,    10,   133,   133,     9,   133,   133,   133,
     135,   135,   135,   135,   135,   135,   135,   135,   135,   135,
     135,    10,    12,    14,   133,    97,   130,   123,   139,   123,
      93,   133,   133,   123,   133,   133,   133,    97,     8,    51,
     122,   124,   131,   126,    97,    11,    11,    10,    97,    10,
      16,   126,    10,   136,     8,    10,    10,    10,   136,    15,
      11,    14,    12,   130,   123,   130,    10,    10,    16,   130,
      10,    10,    10,    12,   126,   139,   139,    86,    86,     8,
      36,    12,    97,    97,    11,    12,   133,    10,   126,    10,
     133,    97,   130,   133,    11,    11,    11,    71,   139,   133,
     133,    11,   127,   133,    12,    12,    97,    12,    10,    16,
      97,    69,    70,   106,   107,   108,    97,     9,    86,    86,
      11,   128,    12,   133,    12,   133,    15,    12,    70,   108,
      12,   133,     8,   122,   138,   122,   138,   129,   133,    12,
      16,    10,    66,    67,   103,   104,    15,    11,    15,    10,
      10,    10,    10,    10,    12,    16,    11,     9,    11,    66,
      67,    11,    97,    11,    11,    11,    11,    11,   133,   129,
     133,    97,     9,    11,    97,    12,    97,    97,    97,    97,
      97,    12,    10,    12,   133,    97,    12,    12,    12,    12,
      12,    12,    11,    10,    12,    97,    11,    12,    97,    12
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    88,    89,    90,    90,    91,    91,    92,    92,    93,
      93,    94,    95,    95,    96,    96,    96,    96,    96,    96,
      97,    97,    98,    98,    98,    98,    98,    98,    98,    98,
      98,    98,    98,    98,    98,    99,    99,    99,    99,   100,
     101,   102,   102,   103,   103,   103,   104,   104,   105,   106,
     106,   107,   107,   108,   109,   110,   110,   111,   111,   111,
     112,   112,   113,   113,   114,   114,   115,   115,   116,   117,
     117,   118,   118,   118,   118,   118,   118,   119,   119,   120,
     121,   121,   121,   121,   122,   122,   122,   122,   122,   123,
     123,   123,   123,   123,   124,   124,   125,   125,   125,   126,
     126,   127,   128,   128,   129,   129,   130,   130,   130,   131,
     131,   131,   131,   131,   132,   133,   133,   133,   133,   134,
     134,   134,   134,   134,   134,   134,   135,   135,   135,   135,
     135,   135,   135,   135,   135,   135,   135,   135,   135,   135,
     135,   135,   135,   135,   135,   135,   135,   135,   136,   136,
     137,   137,   137,   137,   138,   138,   139,   139,   139,   139
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     2,     1,     2,     1,     4,     4,     6,
       8,     4,     2,     1,     1,     2,     1,     1,     1,     2,
       2,     1,     2,     2,     2,     2,     2,     2,     2,     1,
       1,     2,     1,     2,     1,    11,    11,    11,    11,     8,
       7,     7,     8,     5,     1,     4,     8,     7,     7,     6,
       5,     2,     1,     6,     2,     3,     2,     1,     1,     1,
       5,     4,     1,     0,     3,     1,     2,     3,     6,     8,
       7,    10,     9,     9,     9,     8,     8,     2,     1,     2,
       6,     5,     8,     7,     3,     4,     4,     4,     5,     1,
       1,     1,     1,     1,     2,     4,     3,     5,     5,     4,
       3,     3,     5,     3,     3,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     5,     3,     3,     2,     1,     3,
       3,     3,     3,     3,     3,     1,     3,     3,     3,     3,
       3,     2,     1,     2,     1,     1,     1,     1,     1,     1,
       1,     3,     2,     3,     2,     4,     4,     1,     3,     1,
       3,     4,     5,     4,     2,     2,     3,     4,     2,     3
};


#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)
#define YYEMPTY         (-2)
#define YYEOF           0

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                  \
do                                                              \
  if (yychar == YYEMPTY)                                        \
    {                                                           \
      yychar = (Token);                                         \
      yylval = (Value);                                         \
      YYPOPSTACK (yylen);                                       \
      yystate = *yyssp;                                         \
      goto yybackup;                                            \
    }                                                           \
  else                                                          \
    {                                                           \
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;                                                  \
    }                                                           \
while (0)

/* Error token number */
#define YYTERROR        1
#define YYERRCODE       256


/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)                                \
    do                                                                  \
      if (N)                                                            \
        {                                                               \
          (Current).first_line   = YYRHSLOC (Rhs, 1).first_line;        \
          (Current).first_column = YYRHSLOC (Rhs, 1).first_column;      \
          (Current).last_line    = YYRHSLOC (Rhs, N).last_line;         \
          (Current).last_column  = YYRHSLOC (Rhs, N).last_column;       \
        }                                                               \
      else                                                              \
        {                                                               \
          (Current).first_line   = (Current).last_line   =              \
            YYRHSLOC (Rhs, 0).last_line;                                \
          (Current).first_column = (Current).last_column =              \
            YYRHSLOC (Rhs, 0).last_column;                              \
        }                                                               \
    while (0)
#endif

#define YYRHSLOC(Rhs, K) ((Rhs)[K])


/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)                        \
do {                                            \
  if (yydebug)                                  \
    YYFPRINTF Args;                             \
} while (0)


/* YY_LOCATION_PRINT -- Print the location on the stream.
   This macro was not mandated originally: define only if we know
   we won't break user code: when these are the locations we know.  */

#ifndef YY_LOCATION_PRINT
# if defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL

/* Print *YYLOCP on YYO.  Private, do not rely on its existence. */

YY_ATTRIBUTE_UNUSED
static unsigned
yy_location_print_ (FILE *yyo, YYLTYPE const * const yylocp)
{
  unsigned res = 0;
  int end_col = 0 != yylocp->last_column ? yylocp->last_column - 1 : 0;
  if (0 <= yylocp->first_line)
    {
      res += YYFPRINTF (yyo, "%d", yylocp->first_line);
      if (0 <= yylocp->first_column)
        res += YYFPRINTF (yyo, ".%d", yylocp->first_column);
    }
  if (0 <= yylocp->last_line)
    {
      if (yylocp->first_line < yylocp->last_line)
        {
          res += YYFPRINTF (yyo, "-%d", yylocp->last_line);
          if (0 <= end_col)
            res += YYFPRINTF (yyo, ".%d", end_col);
        }
      else if (0 <= end_col && yylocp->first_column < end_col)
        res += YYFPRINTF (yyo, "-%d", end_col);
    }
  return res;
 }

#  define YY_LOCATION_PRINT(File, Loc)          \
  yy_location_print_ (File, &(Loc))

# else
#  define YY_LOCATION_PRINT(File, Loc) ((void) 0)
# endif
#endif


# define YY_SYMBOL_PRINT(Title, Type, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Type, Value, Location); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*----------------------------------------.
| Print this symbol's value on YYOUTPUT.  |
`----------------------------------------*/

static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep, YYLTYPE const * const yylocationp)
{
  FILE *yyo = yyoutput;
  YYUSE (yyo);
  YYUSE (yylocationp);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# endif
  YYUSE (yytype);
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep, YYLTYPE const * const yylocationp)
{
  YYFPRINTF (yyoutput, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  YY_LOCATION_PRINT (yyoutput, *yylocationp);
  YYFPRINTF (yyoutput, ": ");
  yy_symbol_value_print (yyoutput, yytype, yyvaluep, yylocationp);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)                            \
do {                                                            \
  if (yydebug)                                                  \
    yy_stack_print ((Bottom), (Top));                           \
} while (0)


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

static void
yy_reduce_print (yytype_int16 *yyssp, YYSTYPE *yyvsp, YYLTYPE *yylsp, int yyrule)
{
  unsigned long yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       yystos[yyssp[yyi + 1 - yynrhs]],
                       &(yyvsp[(yyi + 1) - (yynrhs)])
                       , &(yylsp[(yyi + 1) - (yynrhs)])                       );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, yylsp, Rule); \
} while (0)

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif


#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined __GLIBC__ && defined _STRING_H
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
static YYSIZE_T
yystrlen (const char *yystr)
{
  YYSIZE_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
#  endif
# endif

# ifndef yystpcpy
#  if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#   define yystpcpy stpcpy
#  else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
static char *
yystpcpy (char *yydest, const char *yysrc)
{
  char *yyd = yydest;
  const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
#  endif
# endif

# ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYSIZE_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYSIZE_T yyn = 0;
      char const *yyp = yystr;

      for (;;)
        switch (*++yyp)
          {
          case '\'':
          case ',':
            goto do_not_strip_quotes;

          case '\\':
            if (*++yyp != '\\')
              goto do_not_strip_quotes;
            /* Fall through.  */
          default:
            if (yyres)
              yyres[yyn] = *yyp;
            yyn++;
            break;

          case '"':
            if (yyres)
              yyres[yyn] = '\0';
            return yyn;
          }
    do_not_strip_quotes: ;
    }

  if (! yyres)
    return yystrlen (yystr);

  return yystpcpy (yyres, yystr) - yyres;
}
# endif

/* Copy into *YYMSG, which is of size *YYMSG_ALLOC, an error message
   about the unexpected token YYTOKEN for the state stack whose top is
   YYSSP.

   Return 0 if *YYMSG was successfully written.  Return 1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return 2 if the
   required number of bytes is too large to store.  */
static int
yysyntax_error (YYSIZE_T *yymsg_alloc, char **yymsg,
                yytype_int16 *yyssp, int yytoken)
{
  YYSIZE_T yysize0 = yytnamerr (YY_NULLPTR, yytname[yytoken]);
  YYSIZE_T yysize = yysize0;
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat. */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Number of reported tokens (one for the "unexpected", one per
     "expected"). */
  int yycount = 0;

  /* There are many possibilities here to consider:
     - If this state is a consistent state with a default action, then
       the only way this function was invoked is if the default action
       is an error action.  In that case, don't check for expected
       tokens because there are none.
     - The only way there can be no lookahead present (in yychar) is if
       this state is a consistent state with a default action.  Thus,
       detecting the absence of a lookahead is sufficient to determine
       that there is no unexpected or expected token to report.  In that
       case, just report a simple "syntax error".
     - Don't assume there isn't a lookahead just because this state is a
       consistent state with a default action.  There might have been a
       previous inconsistent state, consistent state with a non-default
       action, or user semantic action that manipulated yychar.
     - Of course, the expected token list depends on states to have
       correct lookahead information, and it depends on the parser not
       to perform extra reductions after fetching a lookahead from the
       scanner and before detecting a syntax error.  Thus, state merging
       (from LALR or IELR) and default reductions corrupt the expected
       token list.  However, the list is correct for canonical LR with
       one exception: it will still contain any token that will not be
       accepted due to an error action in a later state.
  */
  if (yytoken != YYEMPTY)
    {
      int yyn = yypact[*yyssp];
      yyarg[yycount++] = yytname[yytoken];
      if (!yypact_value_is_default (yyn))
        {
          /* Start YYX at -YYN if negative to avoid negative indexes in
             YYCHECK.  In other words, skip the first -YYN actions for
             this state because they are default actions.  */
          int yyxbegin = yyn < 0 ? -yyn : 0;
          /* Stay within bounds of both yycheck and yytname.  */
          int yychecklim = YYLAST - yyn + 1;
          int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
          int yyx;

          for (yyx = yyxbegin; yyx < yyxend; ++yyx)
            if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR
                && !yytable_value_is_error (yytable[yyx + yyn]))
              {
                if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
                  {
                    yycount = 1;
                    yysize = yysize0;
                    break;
                  }
                yyarg[yycount++] = yytname[yyx];
                {
                  YYSIZE_T yysize1 = yysize + yytnamerr (YY_NULLPTR, yytname[yyx]);
                  if (! (yysize <= yysize1
                         && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
                    return 2;
                  yysize = yysize1;
                }
              }
        }
    }

  switch (yycount)
    {
# define YYCASE_(N, S)                      \
      case N:                               \
        yyformat = S;                       \
      break
    default: /* Avoid compiler warnings. */
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
# undef YYCASE_
    }

  {
    YYSIZE_T yysize1 = yysize + yystrlen (yyformat);
    if (! (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
      return 2;
    yysize = yysize1;
  }

  if (*yymsg_alloc < yysize)
    {
      *yymsg_alloc = 2 * yysize;
      if (! (yysize <= *yymsg_alloc
             && *yymsg_alloc <= YYSTACK_ALLOC_MAXIMUM))
        *yymsg_alloc = YYSTACK_ALLOC_MAXIMUM;
      return 1;
    }

  /* Avoid sprintf, as that infringes on the user's name space.
     Don't have undefined behavior even if the translation
     produced a string with the wrong number of "%s"s.  */
  {
    char *yyp = *yymsg;
    int yyi = 0;
    while ((*yyp = *yyformat) != '\0')
      if (*yyp == '%' && yyformat[1] == 's' && yyi < yycount)
        {
          yyp += yytnamerr (yyp, yyarg[yyi++]);
          yyformat += 2;
        }
      else
        {
          yyp++;
          yyformat++;
        }
  }
  return 0;
}
#endif /* YYERROR_VERBOSE */

/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep, YYLTYPE *yylocationp)
{
  YYUSE (yyvaluep);
  YYUSE (yylocationp);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}




/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;
/* Location data for the lookahead symbol.  */
YYLTYPE yylloc
# if defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL
  = { 1, 1, 1, 1 }
# endif
;
/* Number of syntax errors so far.  */
int yynerrs;


/*----------.
| yyparse.  |
`----------*/

int
yyparse (void)
{
    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       'yyss': related to states.
       'yyvs': related to semantic values.
       'yyls': related to locations.

       Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yytype_int16 yyssa[YYINITDEPTH];
    yytype_int16 *yyss;
    yytype_int16 *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    /* The location stack.  */
    YYLTYPE yylsa[YYINITDEPTH];
    YYLTYPE *yyls;
    YYLTYPE *yylsp;

    /* The locations where the error started and ended.  */
    YYLTYPE yyerror_range[3];

    YYSIZE_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken = 0;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;
  YYLTYPE yyloc;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N), yylsp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yyssp = yyss = yyssa;
  yyvsp = yyvs = yyvsa;
  yylsp = yyls = yylsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */
  yylsp[0] = yylloc;
  goto yysetstate;

/*------------------------------------------------------------.
| yynewstate -- Push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
 yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;

 yysetstate:
  *yyssp = yystate;

  if (yyss + yystacksize - 1 <= yyssp)
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = yyssp - yyss + 1;

#ifdef yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        YYSTYPE *yyvs1 = yyvs;
        yytype_int16 *yyss1 = yyss;
        YYLTYPE *yyls1 = yyls;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * sizeof (*yyssp),
                    &yyvs1, yysize * sizeof (*yyvsp),
                    &yyls1, yysize * sizeof (*yylsp),
                    &yystacksize);

        yyls = yyls1;
        yyss = yyss1;
        yyvs = yyvs1;
      }
#else /* no yyoverflow */
# ifndef YYSTACK_RELOCATE
      goto yyexhaustedlab;
# else
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yytype_int16 *yyss1 = yyss;
        union yyalloc *yyptr =
          (union yyalloc *) YYSTACK_ALLOC (YYSTACK_BYTES (yystacksize));
        if (! yyptr)
          goto yyexhaustedlab;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
        YYSTACK_RELOCATE (yyls_alloc, yyls);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;
      yylsp = yyls + yysize - 1;

      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
                  (unsigned long) yystacksize));

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }

  YYDPRINTF ((stderr, "Entering state %d\n", yystate));

  if (yystate == YYFINAL)
    YYACCEPT;

  goto yybackup;

/*-----------.
| yybackup.  |
`-----------*/
yybackup:

  /* Do appropriate processing given the current state.  Read a
     lookahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to lookahead token.  */
  yyn = yypact[yystate];
  if (yypact_value_is_default (yyn))
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = yylex ();
    }

  if (yychar <= YYEOF)
    {
      yychar = yytoken = YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yytable_value_is_error (yyn))
        goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);

  /* Discard the shifted token.  */
  yychar = YYEMPTY;

  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END
  *++yylsp = yylloc;
  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- Do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     '$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];

  /* Default location. */
  YYLLOC_DEFAULT (yyloc, (yylsp - yylen), yylen);
  yyerror_range[1] = yyloc;
  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 2:
#line 201 "sintactico.yy" /* yacc.c:1651  */
    {(yyval.nodito)=(yyvsp[0].nodito); raiz = (yyval.nodito);}
#line 2168 "parser.cpp" /* yacc.c:1651  */
    break;

  case 3:
#line 203 "sintactico.yy" /* yacc.c:1651  */
    { (yyval.nodito) = (yyvsp[-1].nodito); (yyval.nodito)->add(*(yyvsp[0].nodito));}
#line 2174 "parser.cpp" /* yacc.c:1651  */
    break;

  case 4:
#line 204 "sintactico.yy" /* yacc.c:1651  */
    { nodo *nuevo = new nodo("sentencias","sentencias",(yylsp[0]).first_line, (yylsp[0]).first_column); nuevo->add(*(yyvsp[0].nodito)); (yyval.nodito) = nuevo;}
#line 2180 "parser.cpp" /* yacc.c:1651  */
    break;

  case 5:
#line 208 "sintactico.yy" /* yacc.c:1651  */
    {(yyval.nodito)=(yyvsp[-1].nodito);}
#line 2186 "parser.cpp" /* yacc.c:1651  */
    break;

  case 6:
#line 209 "sintactico.yy" /* yacc.c:1651  */
    {(yyval.nodito) = (yyvsp[0].nodito);}
#line 2192 "parser.cpp" /* yacc.c:1651  */
    break;

  case 7:
#line 213 "sintactico.yy" /* yacc.c:1651  */
    {
                  (yyval.nodito) = new nodo("imprimir",(yyvsp[-3].TEXT),(yylsp[-3]).first_line,(yylsp[-3]).first_column);
                  (yyval.nodito)->hijos.append(*(yyvsp[-1].nodito));
              }
#line 2201 "parser.cpp" /* yacc.c:1651  */
    break;

  case 8:
#line 218 "sintactico.yy" /* yacc.c:1651  */
    {
                  (yyval.nodito) = new nodo("imprimir",(yyvsp[-3].TEXT),(yylsp[-3]).first_line,(yylsp[-3]).first_column);
                  (yyval.nodito)->hijos.append(*(yyvsp[-1].nodito));
              }
#line 2210 "parser.cpp" /* yacc.c:1651  */
    break;

  case 9:
#line 225 "sintactico.yy" /* yacc.c:1651  */
    {
                  (yyval.nodito) = new nodo("concatenar",(yyvsp[-5].TEXT), (yylsp[-5]).first_line, (yylsp[-5]).first_column);
                  (yyval.nodito)->hijos.append(*(yyvsp[-3].nodito));
                  (yyval.nodito)->hijos.append(*(yyvsp[-1].nodito));
              }
#line 2220 "parser.cpp" /* yacc.c:1651  */
    break;

  case 10:
#line 232 "sintactico.yy" /* yacc.c:1651  */
    {
                  (yyval.nodito) = new nodo("concatenar",(yyvsp[-7].TEXT), (yylsp[-7]).first_line, (yylsp[-7]).first_column);
                  (yyval.nodito)->hijos.append(*(yyvsp[-5].nodito));
                  (yyval.nodito)->hijos.append(*(yyvsp[-3].nodito));
                  (yyval.nodito)->hijos.append(*(yyvsp[-1].nodito));
              }
#line 2231 "parser.cpp" /* yacc.c:1651  */
    break;

  case 11:
#line 241 "sintactico.yy" /* yacc.c:1651  */
    {
                (yyval.nodito) = new nodo("importar",(yyvsp[-3].TEXT),(yylsp[-3]).first_line,(yylsp[-3]).first_column);
                nodo *ruta = new nodo("path",(yyvsp[-1].TEXT),(yylsp[-1]).first_line,(yylsp[-1]).first_column);
                (yyval.nodito)->hijos.append(*ruta);
              }
#line 2241 "parser.cpp" /* yacc.c:1651  */
    break;

  case 12:
#line 251 "sintactico.yy" /* yacc.c:1651  */
    {
                 (yyval.nodito)=(yyvsp[-1].nodito);
                 (yyval.nodito)->hijos.append(*(yyvsp[0].nodito));
              }
#line 2250 "parser.cpp" /* yacc.c:1651  */
    break;

  case 13:
#line 256 "sintactico.yy" /* yacc.c:1651  */
    {
                 (yyval.nodito) = new nodo("instrucciones","instrucciones",(yylsp[0]).first_line,(yylsp[0]).first_column);
                 (yyval.nodito)->hijos.append(*(yyvsp[0].nodito));
              }
#line 2259 "parser.cpp" /* yacc.c:1651  */
    break;

  case 14:
#line 263 "sintactico.yy" /* yacc.c:1651  */
    {(yyval.nodito)=(yyvsp[0].nodito);}
#line 2265 "parser.cpp" /* yacc.c:1651  */
    break;

  case 15:
#line 265 "sintactico.yy" /* yacc.c:1651  */
    {
            (yyval.nodito)=(yyvsp[0].nodito);
            nodo *sobre = new nodo("sobreescribir","sobreescribir",(yylsp[-1]).first_line,(yylsp[-1]).first_column);
            (yyval.nodito)->hijos.prepend(*sobre);
       }
#line 2275 "parser.cpp" /* yacc.c:1651  */
    break;

  case 16:
#line 270 "sintactico.yy" /* yacc.c:1651  */
    {(yyval.nodito)=(yyvsp[0].nodito);}
#line 2281 "parser.cpp" /* yacc.c:1651  */
    break;

  case 17:
#line 271 "sintactico.yy" /* yacc.c:1651  */
    {(yyval.nodito)= (yyvsp[0].nodito);}
#line 2287 "parser.cpp" /* yacc.c:1651  */
    break;

  case 18:
#line 272 "sintactico.yy" /* yacc.c:1651  */
    {(yyval.nodito)=(yyvsp[0].nodito);}
#line 2293 "parser.cpp" /* yacc.c:1651  */
    break;

  case 19:
#line 274 "sintactico.yy" /* yacc.c:1651  */
    {
             (yyval.nodito)=(yyvsp[0].nodito);
             nodo *sobre = new nodo("sobreescribir","sobreescribir",(yylsp[-1]).first_line,(yylsp[-1]).first_column);
             (yyval.nodito)->hijos.prepend(*sobre);
        }
#line 2303 "parser.cpp" /* yacc.c:1651  */
    break;

  case 20:
#line 282 "sintactico.yy" /* yacc.c:1651  */
    { (yyval.nodito) = (yyvsp[-1].nodito); (yyval.nodito)->add(*(yyvsp[0].nodito));}
#line 2309 "parser.cpp" /* yacc.c:1651  */
    break;

  case 21:
#line 283 "sintactico.yy" /* yacc.c:1651  */
    { nodo *nuevo = new nodo("sentencias","sentencias",(yylsp[0]).first_line, (yylsp[0]).first_column); nuevo->add(*(yyvsp[0].nodito)); (yyval.nodito) = nuevo;}
#line 2315 "parser.cpp" /* yacc.c:1651  */
    break;

  case 22:
#line 286 "sintactico.yy" /* yacc.c:1651  */
    { (yyval.nodito) = (yyvsp[-1].nodito);}
#line 2321 "parser.cpp" /* yacc.c:1651  */
    break;

  case 23:
#line 287 "sintactico.yy" /* yacc.c:1651  */
    { (yyval.nodito) = (yyvsp[-1].nodito);}
#line 2327 "parser.cpp" /* yacc.c:1651  */
    break;

  case 24:
#line 288 "sintactico.yy" /* yacc.c:1651  */
    {(yyval.nodito) = (yyvsp[-1].nodito);}
#line 2333 "parser.cpp" /* yacc.c:1651  */
    break;

  case 25:
#line 289 "sintactico.yy" /* yacc.c:1651  */
    {(yyval.nodito) = (yyvsp[-1].nodito);}
#line 2339 "parser.cpp" /* yacc.c:1651  */
    break;

  case 26:
#line 290 "sintactico.yy" /* yacc.c:1651  */
    {(yyval.nodito) = (yyvsp[-1].nodito);}
#line 2345 "parser.cpp" /* yacc.c:1651  */
    break;

  case 27:
#line 291 "sintactico.yy" /* yacc.c:1651  */
    {(yyval.nodito)=(yyvsp[-1].nodito);}
#line 2351 "parser.cpp" /* yacc.c:1651  */
    break;

  case 28:
#line 293 "sintactico.yy" /* yacc.c:1651  */
    {(yyval.nodito)=(yyvsp[-1].nodito);}
#line 2357 "parser.cpp" /* yacc.c:1651  */
    break;

  case 29:
#line 294 "sintactico.yy" /* yacc.c:1651  */
    {(yyval.nodito)=(yyvsp[0].nodito);}
#line 2363 "parser.cpp" /* yacc.c:1651  */
    break;

  case 30:
#line 295 "sintactico.yy" /* yacc.c:1651  */
    {(yyval.nodito)=(yyvsp[0].nodito);}
#line 2369 "parser.cpp" /* yacc.c:1651  */
    break;

  case 31:
#line 296 "sintactico.yy" /* yacc.c:1651  */
    {(yyval.nodito)=(yyvsp[-1].nodito);}
#line 2375 "parser.cpp" /* yacc.c:1651  */
    break;

  case 32:
#line 297 "sintactico.yy" /* yacc.c:1651  */
    {(yyval.nodito)=(yyvsp[0].nodito);}
#line 2381 "parser.cpp" /* yacc.c:1651  */
    break;

  case 33:
#line 298 "sintactico.yy" /* yacc.c:1651  */
    {(yyval.nodito)=(yyvsp[-1].nodito);}
#line 2387 "parser.cpp" /* yacc.c:1651  */
    break;

  case 34:
#line 299 "sintactico.yy" /* yacc.c:1651  */
    {(yyval.nodito)=(yyvsp[0].nodito);}
#line 2393 "parser.cpp" /* yacc.c:1651  */
    break;

  case 35:
#line 304 "sintactico.yy" /* yacc.c:1651  */
    {
            (yyval.nodito) = new nodo("ciclo","para",(yylsp[-10]).first_line,(yylsp[-10]).first_column);
            (yyval.nodito)->hijos.append(*(yyvsp[-8].nodito));// Asignacion
            (yyval.nodito)->hijos.append(*(yyvsp[-6].nodito)); // Condicion
            (yyval.nodito)->hijos.append(*(yyvsp[-4].nodito)); // Asignacion
            (yyval.nodito)->hijos.append(*(yyvsp[-1].nodito)); // Sentencias
        }
#line 2405 "parser.cpp" /* yacc.c:1651  */
    break;

  case 36:
#line 312 "sintactico.yy" /* yacc.c:1651  */
    {
            (yyval.nodito) = new nodo("ciclo","para",(yylsp[-10]).first_line,(yylsp[-10]).first_column);
            (yyval.nodito)->hijos.append(*(yyvsp[-8].nodito));// Declaracion
            (yyval.nodito)->hijos.append(*(yyvsp[-6].nodito)); // Condicion
            (yyval.nodito)->hijos.append(*(yyvsp[-4].nodito)); // Asignacion
            (yyval.nodito)->hijos.append(*(yyvsp[-1].nodito)); // Sentencias
        }
#line 2417 "parser.cpp" /* yacc.c:1651  */
    break;

  case 37:
#line 320 "sintactico.yy" /* yacc.c:1651  */
    {
            (yyval.nodito) = new nodo("ciclo","para",(yylsp[-10]).first_line,(yylsp[-10]).first_column);
            (yyval.nodito)->hijos.append(*(yyvsp[-8].nodito));// Asignacion
            (yyval.nodito)->hijos.append(*(yyvsp[-6].nodito)); // Condicion
            (yyval.nodito)->hijos.append(*(yyvsp[-4].nodito)); // decremento / aumento
            (yyval.nodito)->hijos.append(*(yyvsp[-1].nodito)); // Sentencias
        }
#line 2429 "parser.cpp" /* yacc.c:1651  */
    break;

  case 38:
#line 328 "sintactico.yy" /* yacc.c:1651  */
    {
            (yyval.nodito) = new nodo("ciclo","para",(yylsp[-10]).first_line,(yylsp[-10]).first_column);
            (yyval.nodito)->hijos.append(*(yyvsp[-8].nodito));// Declaracion
            (yyval.nodito)->hijos.append(*(yyvsp[-6].nodito)); // Condicion
            (yyval.nodito)->hijos.append(*(yyvsp[-4].nodito)); // Asignacion
            (yyval.nodito)->hijos.append(*(yyvsp[-1].nodito)); // Sentencias
        }
#line 2441 "parser.cpp" /* yacc.c:1651  */
    break;

  case 39:
#line 340 "sintactico.yy" /* yacc.c:1651  */
    {
            (yyval.nodito) = new nodo("ciclo","hacer",(yylsp[-7]).first_line,(yylsp[-7]).first_column);
            (yyval.nodito)->hijos.append(*(yyvsp[-5].nodito));// sentencias
            (yyval.nodito)->hijos.append(*(yyvsp[-1].nodito));// condicion;
        }
#line 2451 "parser.cpp" /* yacc.c:1651  */
    break;

  case 40:
#line 350 "sintactico.yy" /* yacc.c:1651  */
    {
           (yyval.nodito) = new nodo("ciclo","mientrsa",(yylsp[-6]).first_line,(yylsp[-6]).first_column);
           (yyval.nodito)->hijos.append(*(yyvsp[-4].nodito)); // Condicion
           (yyval.nodito)->hijos.append(*(yyvsp[-1].nodito));
         }
#line 2461 "parser.cpp" /* yacc.c:1651  */
    break;

  case 41:
#line 359 "sintactico.yy" /* yacc.c:1651  */
    {
             (yyval.nodito) = new nodo("seleecion","si",(yylsp[-6]).first_line,(yylsp[-6]).first_column);
             (yyval.nodito)->hijos.append(*(yyvsp[-4].nodito));// condicion
             (yyval.nodito)->hijos.append(*(yyvsp[-1].nodito)); // Sentencias
         }
#line 2471 "parser.cpp" /* yacc.c:1651  */
    break;

  case 42:
#line 365 "sintactico.yy" /* yacc.c:1651  */
    {
             (yyval.nodito)=(yyvsp[0].nodito);
             (yyval.nodito)->valor = "si";
             (yyval.nodito)->hijos.prepend(*(yyvsp[-2].nodito)); // Sentencias
             (yyval.nodito)->hijos.prepend(*(yyvsp[-5].nodito));// condicion
         }
#line 2482 "parser.cpp" /* yacc.c:1651  */
    break;

  case 43:
#line 376 "sintactico.yy" /* yacc.c:1651  */
    {
             (yyval.nodito)=(yyvsp[-4].nodito);
             (yyval.nodito)->hijos.append(*(yyvsp[-1].nodito));
          }
#line 2491 "parser.cpp" /* yacc.c:1651  */
    break;

  case 44:
#line 381 "sintactico.yy" /* yacc.c:1651  */
    {
             (yyval.nodito)=(yyvsp[0].nodito);
         }
#line 2499 "parser.cpp" /* yacc.c:1651  */
    break;

  case 45:
#line 385 "sintactico.yy" /* yacc.c:1651  */
    {
            (yyval.nodito)= (yyvsp[-1].nodito);
         }
#line 2507 "parser.cpp" /* yacc.c:1651  */
    break;

  case 46:
#line 391 "sintactico.yy" /* yacc.c:1651  */
    {
           (yyval.nodito)=(yyvsp[-7].nodito);
           (yyval.nodito)->hijos.append(*(yyvsp[-4].nodito)); // condicion
           (yyval.nodito)->hijos.append(*(yyvsp[-1].nodito)); // Sentenencias
         }
#line 2517 "parser.cpp" /* yacc.c:1651  */
    break;

  case 47:
#line 397 "sintactico.yy" /* yacc.c:1651  */
    {
           (yyval.nodito)= new nodo("seleccion","sinosi",(yylsp[-6]).first_line,(yylsp[-6]).first_column);
           (yyval.nodito)->hijos.append(*(yyvsp[-4].nodito)); // condicion
           (yyval.nodito)->hijos.append(*(yyvsp[-1].nodito)); // Sentenencias
         }
#line 2527 "parser.cpp" /* yacc.c:1651  */
    break;

  case 48:
#line 406 "sintactico.yy" /* yacc.c:1651  */
    {
             (yyval.nodito) = new nodo("seleccionar","$1",(yylsp[-6]).first_line,(yylsp[-6]).first_column);
             (yyval.nodito)->hijos.append(*(yyvsp[-4].nodito));
             (yyval.nodito)->hijos.append(*(yyvsp[-1].nodito));
         }
#line 2537 "parser.cpp" /* yacc.c:1651  */
    break;

  case 49:
#line 413 "sintactico.yy" /* yacc.c:1651  */
    {
        (yyval.nodito)=(yyvsp[-5].nodito);
        nodo *def = new nodo("caso","defecto",(yylsp[-4]).first_line,(yylsp[-4]).first_column);
        def->hijos.append(*(yyvsp[-1].nodito));
        (yyval.nodito)->hijos.append(*def);
     }
#line 2548 "parser.cpp" /* yacc.c:1651  */
    break;

  case 50:
#line 420 "sintactico.yy" /* yacc.c:1651  */
    {
        (yyval.nodito)= new nodo("casos","casos",(yylsp[-4]).first_line,(yylsp[-4]).first_column);
        nodo *def = new nodo("caso","defecto",(yylsp[-4]).first_line,(yylsp[-4]).first_column);
        def->hijos.append(*(yyvsp[-1].nodito));
        (yyval.nodito)->hijos.append(*def);
     }
#line 2559 "parser.cpp" /* yacc.c:1651  */
    break;

  case 51:
#line 430 "sintactico.yy" /* yacc.c:1651  */
    {
             (yyval.nodito)=(yyvsp[-1].nodito);
             (yyval.nodito)->hijos.append(*(yyvsp[0].nodito));
         }
#line 2568 "parser.cpp" /* yacc.c:1651  */
    break;

  case 52:
#line 435 "sintactico.yy" /* yacc.c:1651  */
    {
           (yyval.nodito)= new nodo("casos","casos",(yylsp[0]).first_line,(yylsp[0]).first_column);
           (yyval.nodito)->hijos.append(*(yyvsp[0].nodito));
         }
#line 2577 "parser.cpp" /* yacc.c:1651  */
    break;

  case 53:
#line 441 "sintactico.yy" /* yacc.c:1651  */
    {
            (yyval.nodito) = new nodo("caso","caso",(yylsp[-5]).first_line,(yylsp[-5]).first_column);
            (yyval.nodito)->hijos.append(*(yyvsp[-4].nodito));
            (yyval.nodito)->hijos.append(*(yyvsp[-1].nodito));
         }
#line 2587 "parser.cpp" /* yacc.c:1651  */
    break;

  case 54:
#line 449 "sintactico.yy" /* yacc.c:1651  */
    {
                (yyval.nodito)=new nodo("retorno","retorno",(yylsp[-1]).first_line,(yylsp[-1]).first_column);
                (yyval.nodito)->hijos.append(*(yyvsp[0].nodito));
              }
#line 2596 "parser.cpp" /* yacc.c:1651  */
    break;

  case 55:
#line 456 "sintactico.yy" /* yacc.c:1651  */
    {
                (yyval.nodito) = (yyvsp[-1].nodito);
                (yyval.nodito)->hijos.prepend(*(yyvsp[-2].nodito));
                (yyval.nodito)->tipo = "declatrib";
            }
#line 2606 "parser.cpp" /* yacc.c:1651  */
    break;

  case 56:
#line 462 "sintactico.yy" /* yacc.c:1651  */
    {
                (yyval.nodito) = (yyvsp[-1].nodito);
                nodo *nod = new nodo("visibilidad","publico",(yylsp[-1]).first_line, (yylsp[-1]).first_column);
                (yyval.nodito)->hijos.prepend(*nod);
                (yyval.nodito)->tipo = "declatrib";
            }
#line 2617 "parser.cpp" /* yacc.c:1651  */
    break;

  case 57:
#line 470 "sintactico.yy" /* yacc.c:1651  */
    {(yyval.nodito) = new nodo("visibilidad",(yyvsp[0].TEXT),(yylsp[0]).first_line, (yylsp[0]).first_column);}
#line 2623 "parser.cpp" /* yacc.c:1651  */
    break;

  case 58:
#line 471 "sintactico.yy" /* yacc.c:1651  */
    {(yyval.nodito) = new nodo("visibilidad",(yyvsp[0].TEXT),(yylsp[0]).first_line, (yylsp[0]).first_column);}
#line 2629 "parser.cpp" /* yacc.c:1651  */
    break;

  case 59:
#line 472 "sintactico.yy" /* yacc.c:1651  */
    {(yyval.nodito) = new nodo("visibilidad",(yyvsp[0].TEXT),(yylsp[0]).first_line, (yylsp[0]).first_column);}
#line 2635 "parser.cpp" /* yacc.c:1651  */
    break;

  case 60:
#line 475 "sintactico.yy" /* yacc.c:1651  */
    {
                 nodo *cons = new nodo("constructor",(yyvsp[-3].TEXT),(yylsp[-3]).first_line,(yylsp[-3]).first_column);
                 cons->hijos.append(*(yyvsp[-1].nodito)); // LISTA DE PARAMETROS
                 (yyval.nodito) = cons;
            }
#line 2645 "parser.cpp" /* yacc.c:1651  */
    break;

  case 61:
#line 481 "sintactico.yy" /* yacc.c:1651  */
    {
                 nodo *cons = new nodo("constructor",(yyvsp[-2].TEXT),(yylsp[-2]).first_line,(yylsp[-2]).first_column);
                 nodo *lpar = new nodo("lpar","lpar",(yylsp[-3]).first_line,(yylsp[-3]).first_column);
                 cons->hijos.append(*lpar); // LISTA DE PARAMETROS
                 (yyval.nodito) = cons;
            }
#line 2656 "parser.cpp" /* yacc.c:1651  */
    break;

  case 62:
#line 489 "sintactico.yy" /* yacc.c:1651  */
    {(yyval.nodito)=(yyvsp[0].nodito);}
#line 2662 "parser.cpp" /* yacc.c:1651  */
    break;

  case 63:
#line 491 "sintactico.yy" /* yacc.c:1651  */
    {
                (yyval.nodito) = new nodo("parametros","parametros",0,0);
            }
#line 2670 "parser.cpp" /* yacc.c:1651  */
    break;

  case 64:
#line 498 "sintactico.yy" /* yacc.c:1651  */
    {
                (yyval.nodito)=(yyvsp[-2].nodito);
                (yyval.nodito)->hijos.append(*(yyvsp[0].nodito));
            }
#line 2679 "parser.cpp" /* yacc.c:1651  */
    break;

  case 65:
#line 503 "sintactico.yy" /* yacc.c:1651  */
    {
                (yyval.nodito) = new nodo("parametros","parametros",(yylsp[0]).first_line, (yylsp[0]).first_column);
                (yyval.nodito)->hijos.append(*(yyvsp[0].nodito));
            }
#line 2688 "parser.cpp" /* yacc.c:1651  */
    break;

  case 66:
#line 510 "sintactico.yy" /* yacc.c:1651  */
    {
                (yyvsp[-1].nodito)->tipo = (yyvsp[-1].nodito)->valor;
                (yyvsp[-1].nodito)->valor = (yyvsp[0].TEXT);
                (yyval.nodito) = (yyvsp[-1].nodito);
            }
#line 2698 "parser.cpp" /* yacc.c:1651  */
    break;

  case 67:
#line 516 "sintactico.yy" /* yacc.c:1651  */
    {
                (yyvsp[-2].nodito)->tipo = (yyvsp[-2].nodito)->valor;
                (yyvsp[-2].nodito)->valor = (yyvsp[-1].TEXT);
                (yyval.nodito) = (yyvsp[-2].nodito);
                (yyval.nodito)->hijos.append(*(yyvsp[0].nodito));
            }
#line 2709 "parser.cpp" /* yacc.c:1651  */
    break;

  case 68:
#line 525 "sintactico.yy" /* yacc.c:1651  */
    {
                (yyval.nodito) = new nodo("principal",(yyvsp[-5].TEXT), (yylsp[-5]).first_line, (yylsp[-5]).first_column);
                (yyval.nodito)->hijos.append(*(yyvsp[-1].nodito));
           }
#line 2718 "parser.cpp" /* yacc.c:1651  */
    break;

  case 69:
#line 532 "sintactico.yy" /* yacc.c:1651  */
    {
                    (yyval.nodito) = new nodo("constructor",(yyvsp[-6].TEXT),(yylsp[-7]).first_line,(yylsp[-7]).first_column);
                    (yyval.nodito)->hijos.append(*(yyvsp[-7].nodito)); // visibilidad
                    (yyval.nodito)->hijos.append(*(yyvsp[-4].nodito)); // parametros
                    (yyval.nodito)->hijos.append(*(yyvsp[-1].nodito)); // instrucciones
                }
#line 2729 "parser.cpp" /* yacc.c:1651  */
    break;

  case 70:
#line 539 "sintactico.yy" /* yacc.c:1651  */
    {
                    (yyval.nodito) = new nodo("constructor",(yyvsp[-6].TEXT),(yylsp[-6]).first_line,(yylsp[-6]).first_column);
                    nodo *vis = new nodo("visibilidad","publico",(yylsp[-6]).first_line,(yylsp[-6]).first_column);
                    (yyval.nodito)->hijos.append(*vis); // visibilidad
                    (yyval.nodito)->hijos.append(*(yyvsp[-4].nodito));  // parametros
                    (yyval.nodito)->hijos.append(*(yyvsp[-1].nodito)); // instrucciones
                }
#line 2741 "parser.cpp" /* yacc.c:1651  */
    break;

  case 71:
#line 549 "sintactico.yy" /* yacc.c:1651  */
    {
                (yyval.nodito) = new nodo("funcion",(yyvsp[-6].TEXT),(yylsp[-9]).first_line,(yylsp[-9]).first_column);
                (yyval.nodito)->hijos.append(*(yyvsp[-9].nodito)); // visibilidad
                (yyval.nodito)->hijos.append(*(yyvsp[-8].nodito)); // tipo
                (yyval.nodito)->hijos.append(*(yyvsp[-7].nodito)); // dimensiones del retorno
                (yyval.nodito)->hijos.append(*(yyvsp[-4].nodito)); // lista de parametros
                (yyval.nodito)->hijos.append(*(yyvsp[-1].nodito)); // lista de instrucciones;
            }
#line 2754 "parser.cpp" /* yacc.c:1651  */
    break;

  case 72:
#line 558 "sintactico.yy" /* yacc.c:1651  */
    {
                (yyval.nodito) = new nodo("funcion",(yyvsp[-6].TEXT),(yylsp[-8]).first_line,(yylsp[-8]).first_column);
                (yyval.nodito)->hijos.append(*(yyvsp[-8].nodito)); // visibilidad
                (yyval.nodito)->hijos.append(*(yyvsp[-7].nodito)); // tipo
                (yyval.nodito)->hijos.append(*(yyvsp[-4].nodito)); // lista de parametros
                (yyval.nodito)->hijos.append(*(yyvsp[-1].nodito)); // lista de instrucciones;
            }
#line 2766 "parser.cpp" /* yacc.c:1651  */
    break;

  case 73:
#line 566 "sintactico.yy" /* yacc.c:1651  */
    {
                (yyval.nodito) = new nodo("funcion",(yyvsp[-6].TEXT),(yylsp[-8]).first_line,(yylsp[-8]).first_column);
                (yyval.nodito)->hijos.append(*(yyvsp[-8].nodito)); // visibilidad
                nodo *tipo = new nodo("tipo",(yyvsp[-7].TEXT),(yylsp[-7]).first_line,(yylsp[-7]).first_column);
                (yyval.nodito)->hijos.append(*tipo); // tipo
                (yyval.nodito)->hijos.append(*(yyvsp[-4].nodito)); // lista de parametros
                (yyval.nodito)->hijos.append(*(yyvsp[-1].nodito)); // lista de instrucciones;
            }
#line 2779 "parser.cpp" /* yacc.c:1651  */
    break;

  case 74:
#line 575 "sintactico.yy" /* yacc.c:1651  */
    {
                (yyval.nodito) = new nodo("funcion",(yyvsp[-6].TEXT),(yylsp[-8]).first_line,(yylsp[-8]).first_column);
                nodo *vis = new nodo("visibilidad","publico",(yylsp[-8]).first_line, (yylsp[-8]).first_column);
                (yyval.nodito)->hijos.append(*vis); // visibilidad
                (yyval.nodito)->hijos.append(*(yyvsp[-8].nodito)); // tipo
                (yyval.nodito)->hijos.append(*(yyvsp[-7].nodito)); // dimensiones del retorno
                (yyval.nodito)->hijos.append(*(yyvsp[-4].nodito)); // lista de parametros
                (yyval.nodito)->hijos.append(*(yyvsp[-1].nodito)); // lista de instrucciones;
            }
#line 2793 "parser.cpp" /* yacc.c:1651  */
    break;

  case 75:
#line 585 "sintactico.yy" /* yacc.c:1651  */
    {
                (yyval.nodito) = new nodo("funcion",(yyvsp[-6].TEXT),(yylsp[-7]).first_line,(yylsp[-7]).first_column);
                nodo *vis = new nodo("visibilidad","publico",(yylsp[-7]).first_line, (yylsp[-7]).first_column);
                (yyval.nodito)->hijos.append(*vis); // visibilidad
                (yyval.nodito)->hijos.append(*(yyvsp[-7].nodito)); // tipo
                (yyval.nodito)->hijos.append(*(yyvsp[-4].nodito)); // lista de parametros
                (yyval.nodito)->hijos.append(*(yyvsp[-1].nodito)); // lista de instrucciones;
            }
#line 2806 "parser.cpp" /* yacc.c:1651  */
    break;

  case 76:
#line 594 "sintactico.yy" /* yacc.c:1651  */
    {
                (yyval.nodito) = new nodo("funcion",(yyvsp[-6].TEXT),(yylsp[-7]).first_line,(yylsp[-7]).first_column);
                nodo *vis = new nodo("visibilidad","publico",(yylsp[-7]).first_line, (yylsp[-7]).first_column);
                (yyval.nodito)->hijos.append(*vis); // visibilidad
                nodo *tipo = new nodo("tipo",(yyvsp[-7].TEXT),(yylsp[-7]).first_line,(yylsp[-7]).first_column);
                (yyval.nodito)->hijos.append(*tipo); // tipo
                (yyval.nodito)->hijos.append(*(yyvsp[-4].nodito)); // lista de parametros.
                (yyval.nodito)->hijos.append(*(yyvsp[-1].nodito)); // lista de instrucciones;
            }
#line 2820 "parser.cpp" /* yacc.c:1651  */
    break;

  case 77:
#line 606 "sintactico.yy" /* yacc.c:1651  */
    {
             (yyval.nodito)= (yyvsp[-1].nodito);
             (yyval.nodito)->hijos.append(*(yyvsp[0].nodito));
        }
#line 2829 "parser.cpp" /* yacc.c:1651  */
    break;

  case 78:
#line 610 "sintactico.yy" /* yacc.c:1651  */
    {
             (yyval.nodito)= new nodo("dims","dims",(yylsp[0]).first_line, (yylsp[0]).first_column);
             (yyval.nodito)->hijos.append(*(yyvsp[0].nodito));
          }
#line 2838 "parser.cpp" /* yacc.c:1651  */
    break;

  case 79:
#line 615 "sintactico.yy" /* yacc.c:1651  */
    { (yyval.nodito) = new nodo("dim","dim",(yylsp[-1]).first_line,(yylsp[-1]).first_column);}
#line 2844 "parser.cpp" /* yacc.c:1651  */
    break;

  case 80:
#line 623 "sintactico.yy" /* yacc.c:1651  */
    {
                  (yyval.nodito) = new nodo("clase",(yyvsp[-3].TEXT),(yylsp[-5]).first_line, (yylsp[-5]).first_column);
                  (yyval.nodito)->hijos.append(*(yyvsp[-5].nodito));
                  (yyval.nodito)->hijos.append(*(yyvsp[-1].nodito));
              }
#line 2854 "parser.cpp" /* yacc.c:1651  */
    break;

  case 81:
#line 629 "sintactico.yy" /* yacc.c:1651  */
    {
                  (yyval.nodito) = new nodo("clase",(yyvsp[-3].TEXT),(yylsp[-4]).first_line, (yylsp[-4]).first_column);
                  nodo *nod = new nodo("visibilidad","publico",(yylsp[-4]).first_line, (yylsp[-4]).first_column);
                  (yyval.nodito)->hijos.append(*nod);
                  (yyval.nodito)->hijos.append(*(yyvsp[-1].nodito));
              }
#line 2865 "parser.cpp" /* yacc.c:1651  */
    break;

  case 82:
#line 637 "sintactico.yy" /* yacc.c:1651  */
    {
                  (yyval.nodito) = new nodo("clase",(yyvsp[-5].TEXT),(yylsp[-7]).first_line, (yylsp[-7]).first_column);
                  (yyval.nodito)->hijos.append(*(yyvsp[-7].nodito));
                  nodo *padre = new nodo("herencia",(yyvsp[-3].TEXT),(yylsp[-3]).first_line,(yylsp[-3]).first_column);
                  (yyval.nodito)->hijos.append(*padre);
                  (yyval.nodito)->hijos.append(*(yyvsp[-1].nodito));
              }
#line 2877 "parser.cpp" /* yacc.c:1651  */
    break;

  case 83:
#line 645 "sintactico.yy" /* yacc.c:1651  */
    {
                  (yyval.nodito) = new nodo("clase",(yyvsp[-5].TEXT),(yylsp[-6]).first_line, (yylsp[-6]).first_column);
                  nodo *nod = new nodo("visibilidad","publico",(yylsp[-6]).first_line, (yylsp[-6]).first_column);
                  (yyval.nodito)->hijos.append(*nod);
                  nodo *padre = new nodo("herencia",(yyvsp[-3].TEXT),(yylsp[-3]).first_line,(yylsp[-3]).first_column);
                  (yyval.nodito)->hijos.append(*padre);
                  (yyval.nodito)->hijos.append(*(yyvsp[-1].nodito));
              }
#line 2890 "parser.cpp" /* yacc.c:1651  */
    break;

  case 84:
#line 659 "sintactico.yy" /* yacc.c:1651  */
    {
                            (yyval.nodito)=(yyvsp[-1].nodito);
                            nodo *idnodo = new nodo("variable",(yyvsp[-2].TEXT),(yylsp[-2]).first_line, (yylsp[-2]).first_column);
                            (yyval.nodito)->add(*idnodo);
                            (yyval.nodito)->add(*(yyvsp[0].nodito));
                           }
#line 2901 "parser.cpp" /* yacc.c:1651  */
    break;

  case 85:
#line 666 "sintactico.yy" /* yacc.c:1651  */
    {
                            (yyval.nodito)=(yyvsp[-1].nodito);
                            (yyval.nodito)->tipo= "asiga";
                            (yyval.nodito)->add(*(yyvsp[-2].nodito));
                            nodo *idnodo = new nodo("variable",(yyvsp[-3].TEXT),(yylsp[-3]).first_line, (yylsp[-3]).first_column);
                            (yyval.nodito)->add(*idnodo);
                            (yyval.nodito)->add(*(yyvsp[0].nodito));
                           }
#line 2914 "parser.cpp" /* yacc.c:1651  */
    break;

  case 86:
#line 675 "sintactico.yy" /* yacc.c:1651  */
    {
                          (yyval.nodito)=(yyvsp[-1].nodito);
                          nodo *nod = new nodo("id",(yyvsp[-3].TEXT),(yylsp[-3]).first_line, (yylsp[-3]).first_column);
                          (yyvsp[-2].nodito)->hijos.prepend(*nod);
                          (yyval.nodito)->hijos.append(*(yyvsp[-2].nodito));
                          (yyval.nodito)->hijos.append(*(yyvsp[0].nodito));
                          }
#line 2926 "parser.cpp" /* yacc.c:1651  */
    break;

  case 87:
#line 683 "sintactico.yy" /* yacc.c:1651  */
    {
                          (yyval.nodito)=(yyvsp[-1].nodito);
                          nodo *nod = new nodo("id",(yyvsp[-3].TEXT),(yylsp[-3]).first_line, (yylsp[-3]).first_column);
                          (yyvsp[-2].nodito)->hijos.prepend(*nod);
                          (yyval.nodito)->hijos.append(*(yyvsp[-2].nodito));
                          (yyval.nodito)->hijos.append(*(yyvsp[0].nodito));
                          }
#line 2938 "parser.cpp" /* yacc.c:1651  */
    break;

  case 88:
#line 691 "sintactico.yy" /* yacc.c:1651  */
    {
                           (yyval.nodito)=(yyvsp[-1].nodito);
                           nodo *nod = new nodo("id",(yyvsp[-4].TEXT),(yylsp[-4]).first_line, (yylsp[-4]).first_column);
                           nod->hijos.append(*(yyvsp[-3].nodito));
                           (yyval.nodito)->hijos.prepend(*nod);
                           (yyval.nodito)->hijos.append(*(yyvsp[0].nodito));
                           }
#line 2950 "parser.cpp" /* yacc.c:1651  */
    break;

  case 89:
#line 701 "sintactico.yy" /* yacc.c:1651  */
    {(yyval.nodito)=new nodo("asig",(yyvsp[0].TEXT),(yylsp[0]).first_line, (yylsp[0]).first_column);}
#line 2956 "parser.cpp" /* yacc.c:1651  */
    break;

  case 90:
#line 702 "sintactico.yy" /* yacc.c:1651  */
    {(yyval.nodito)=new nodo("asig",(yyvsp[0].TEXT),(yylsp[0]).first_line, (yylsp[0]).first_column);}
#line 2962 "parser.cpp" /* yacc.c:1651  */
    break;

  case 91:
#line 703 "sintactico.yy" /* yacc.c:1651  */
    {(yyval.nodito)=new nodo("asig",(yyvsp[0].TEXT),(yylsp[0]).first_line, (yylsp[0]).first_column);}
#line 2968 "parser.cpp" /* yacc.c:1651  */
    break;

  case 92:
#line 704 "sintactico.yy" /* yacc.c:1651  */
    {(yyval.nodito)=new nodo("asig",(yyvsp[0].TEXT),(yylsp[0]).first_line, (yylsp[0]).first_column);}
#line 2974 "parser.cpp" /* yacc.c:1651  */
    break;

  case 93:
#line 705 "sintactico.yy" /* yacc.c:1651  */
    {(yyval.nodito)=new nodo("asig",(yyvsp[0].TEXT),(yylsp[0]).first_line, (yylsp[0]).first_column);}
#line 2980 "parser.cpp" /* yacc.c:1651  */
    break;

  case 94:
#line 711 "sintactico.yy" /* yacc.c:1651  */
    {
            nodo *nuevo = new nodo("d",(yyvsp[0].TEXT),(yylsp[-1]).first_line, (yylsp[-1]).first_column);
            nuevo->add(*(yyvsp[-1].nodito)); // tipo
            (yyval.nodito) = nuevo;
         }
#line 2990 "parser.cpp" /* yacc.c:1651  */
    break;

  case 95:
#line 717 "sintactico.yy" /* yacc.c:1651  */
    {
             nodo *nuevo = new nodo("da",(yyvsp[-2].TEXT),(yylsp[-3]).first_line, (yylsp[-3]).first_column);
             nuevo->add(*(yyvsp[-3].nodito)); // tipo
             nuevo->add(*(yyvsp[0].nodito)); // valor
             (yyval.nodito) = nuevo;
         }
#line 3001 "parser.cpp" /* yacc.c:1651  */
    break;

  case 96:
#line 738 "sintactico.yy" /* yacc.c:1651  */
    {
            nodo *nuevo = new nodo("dar","dar",(yylsp[-2]).first_line, (yylsp[-2]).first_column);
            nuevo->add(*(yyvsp[-2].nodito));
            nodo *nodoid =  new nodo("id",(yyvsp[-1].TEXT),(yylsp[-1]).first_line,(yylsp[-1]).first_column);
            nuevo->add(*nodoid);
            (yyval.nodito) = nuevo;
         }
#line 3013 "parser.cpp" /* yacc.c:1651  */
    break;

  case 97:
#line 745 "sintactico.yy" /* yacc.c:1651  */
    {
             nodo *nuevo = new nodo("dara","dara",(yylsp[-4]).first_line, (yylsp[-4]).first_column);
             nuevo->add(*(yyvsp[-4].nodito));
             nodo *nodoid =  new nodo("id",(yyvsp[-3].TEXT),(yylsp[-3]).first_line,(yylsp[-3]).first_column);
             nuevo->add(*nodoid);
             nuevo->add(*(yyvsp[-2].nodito));
             nuevo->add(*(yyvsp[0].nodito));
             (yyval.nodito) = nuevo;}
#line 3026 "parser.cpp" /* yacc.c:1651  */
    break;

  case 98:
#line 753 "sintactico.yy" /* yacc.c:1651  */
    {
              nodo *nuevo = new nodo("darar","darar",(yylsp[-4]).first_line, (yylsp[-4]).first_column);
              nuevo->add(*(yyvsp[-4].nodito));
              nodo *nodoid =  new nodo("id",(yyvsp[-3].TEXT),(yylsp[-3]).first_line,(yylsp[-3]).first_column);
              nuevo->add(*nodoid);
              nuevo->add(*(yyvsp[-2].nodito));
              nuevo->add(*(yyvsp[0].nodito));
              (yyval.nodito) = nuevo;}
#line 3039 "parser.cpp" /* yacc.c:1651  */
    break;

  case 99:
#line 764 "sintactico.yy" /* yacc.c:1651  */
    {(yyval.nodito)->add(*(yyvsp[-1].nodito));}
#line 3045 "parser.cpp" /* yacc.c:1651  */
    break;

  case 100:
#line 765 "sintactico.yy" /* yacc.c:1651  */
    {  (yyval.nodito)= new nodo("dim","dim",(yylsp[-2]).first_line, (yylsp[-2]).first_column); (yyval.nodito)->add(*(yyvsp[-1].nodito));}
#line 3051 "parser.cpp" /* yacc.c:1651  */
    break;

  case 101:
#line 770 "sintactico.yy" /* yacc.c:1651  */
    {
          (yyval.nodito) = (yyvsp[-1].nodito);
         }
#line 3059 "parser.cpp" /* yacc.c:1651  */
    break;

  case 102:
#line 776 "sintactico.yy" /* yacc.c:1651  */
    {
             (yyval.nodito)=(yyvsp[-4].nodito);
             for (int i= 0 ; i< (yyvsp[-1].nodito)->hijos.count(); i++)
             {
                 nodo nod = (yyvsp[-1].nodito)->hijos[i];
                 (yyval.nodito)->add(nod);
             }
         }
#line 3072 "parser.cpp" /* yacc.c:1651  */
    break;

  case 103:
#line 785 "sintactico.yy" /* yacc.c:1651  */
    {
             (yyval.nodito) = new nodo("lvalores","lvalores",(yylsp[-2]).first_line, (yylsp[-1]).first_column);
             for (int i =0 ; i< (yyvsp[-1].nodito)->hijos.count(); i++)
             {
                 nodo nod =  (yyvsp[-1].nodito)->hijos[i];
                 (yyval.nodito)->add(nod);
             }
         }
#line 3085 "parser.cpp" /* yacc.c:1651  */
    break;

  case 104:
#line 795 "sintactico.yy" /* yacc.c:1651  */
    {(yyval.nodito)=(yyvsp[-2].nodito); (yyval.nodito)->add(*(yyvsp[0].nodito));}
#line 3091 "parser.cpp" /* yacc.c:1651  */
    break;

  case 105:
#line 796 "sintactico.yy" /* yacc.c:1651  */
    {(yyval.nodito)= new nodo("valores","valores",(yylsp[0]).first_line,(yylsp[0]).first_column); (yyval.nodito)->add(*(yyvsp[0].nodito));}
#line 3097 "parser.cpp" /* yacc.c:1651  */
    break;

  case 106:
#line 801 "sintactico.yy" /* yacc.c:1651  */
    {(yyval.nodito)=(yyvsp[0].nodito);}
#line 3103 "parser.cpp" /* yacc.c:1651  */
    break;

  case 107:
#line 802 "sintactico.yy" /* yacc.c:1651  */
    {(yyval.nodito)=(yyvsp[0].nodito);}
#line 3109 "parser.cpp" /* yacc.c:1651  */
    break;

  case 108:
#line 803 "sintactico.yy" /* yacc.c:1651  */
    {(yyval.nodito)=(yyvsp[0].nodito);}
#line 3115 "parser.cpp" /* yacc.c:1651  */
    break;

  case 109:
#line 806 "sintactico.yy" /* yacc.c:1651  */
    {(yyval.nodito)= new nodo("tipo",(yyvsp[0].TEXT),(yylsp[0]).first_line,(yylsp[0]).first_column);}
#line 3121 "parser.cpp" /* yacc.c:1651  */
    break;

  case 110:
#line 807 "sintactico.yy" /* yacc.c:1651  */
    {(yyval.nodito)= new nodo("tipo",(yyvsp[0].TEXT),(yylsp[0]).first_line,(yylsp[0]).first_column);}
#line 3127 "parser.cpp" /* yacc.c:1651  */
    break;

  case 111:
#line 808 "sintactico.yy" /* yacc.c:1651  */
    {(yyval.nodito)= new nodo("tipo",(yyvsp[0].TEXT),(yylsp[0]).first_line,(yylsp[0]).first_column);}
#line 3133 "parser.cpp" /* yacc.c:1651  */
    break;

  case 112:
#line 809 "sintactico.yy" /* yacc.c:1651  */
    {(yyval.nodito)= new nodo("tipo",(yyvsp[0].TEXT),(yylsp[0]).first_line,(yylsp[0]).first_column);}
#line 3139 "parser.cpp" /* yacc.c:1651  */
    break;

  case 113:
#line 810 "sintactico.yy" /* yacc.c:1651  */
    {(yyval.nodito)= new nodo("tipo",(yyvsp[0].TEXT),(yylsp[0]).first_line,(yylsp[0]).first_column);}
#line 3145 "parser.cpp" /* yacc.c:1651  */
    break;

  case 114:
#line 817 "sintactico.yy" /* yacc.c:1651  */
    {
             (yyval.nodito) = new nodo("ss","ss",(yylsp[-4]).first_line, (yylsp[-4]).first_column);
             (yyval.nodito)->add(*(yyvsp[-4].nodito)); // Condicion
             (yyval.nodito)->add(*(yyvsp[-2].nodito)); // Valor verdadero
             (yyval.nodito)->add(*(yyvsp[0].nodito)); // Valor falso;
         }
#line 3156 "parser.cpp" /* yacc.c:1651  */
    break;

  case 115:
#line 825 "sintactico.yy" /* yacc.c:1651  */
    {(yyval.nodito) = new nodo("expl",(yyvsp[-1].TEXT),(yylsp[-1]).first_line,(yylsp[-1]).first_column); (yyval.nodito)->add(*(yyvsp[-2].nodito)); (yyval.nodito)->add(*(yyvsp[0].nodito));}
#line 3162 "parser.cpp" /* yacc.c:1651  */
    break;

  case 116:
#line 826 "sintactico.yy" /* yacc.c:1651  */
    {(yyval.nodito) = new nodo("expl",(yyvsp[-1].TEXT),(yylsp[-1]).first_line,(yylsp[-1]).first_column); (yyval.nodito)->add(*(yyvsp[-2].nodito)); (yyval.nodito)->add(*(yyvsp[0].nodito));}
#line 3168 "parser.cpp" /* yacc.c:1651  */
    break;

  case 117:
#line 827 "sintactico.yy" /* yacc.c:1651  */
    {(yyval.nodito) = new nodo("expl",(yyvsp[-1].TEXT),(yylsp[-1]).first_line,(yylsp[-1]).first_column); (yyval.nodito)->add(*(yyvsp[0].nodito));}
#line 3174 "parser.cpp" /* yacc.c:1651  */
    break;

  case 118:
#line 828 "sintactico.yy" /* yacc.c:1651  */
    {(yyval.nodito) =(yyvsp[0].nodito);}
#line 3180 "parser.cpp" /* yacc.c:1651  */
    break;

  case 119:
#line 831 "sintactico.yy" /* yacc.c:1651  */
    {(yyval.nodito) = new nodo("expr",(yyvsp[-1].TEXT),(yylsp[-1]).first_line,(yylsp[-1]).first_column); (yyval.nodito)->add(*(yyvsp[-2].nodito)); (yyval.nodito)->add(*(yyvsp[0].nodito));}
#line 3186 "parser.cpp" /* yacc.c:1651  */
    break;

  case 120:
#line 832 "sintactico.yy" /* yacc.c:1651  */
    {(yyval.nodito) = new nodo("expr",(yyvsp[-1].TEXT),(yylsp[-1]).first_line,(yylsp[-1]).first_column); (yyval.nodito)->add(*(yyvsp[-2].nodito)); (yyval.nodito)->add(*(yyvsp[0].nodito));}
#line 3192 "parser.cpp" /* yacc.c:1651  */
    break;

  case 121:
#line 833 "sintactico.yy" /* yacc.c:1651  */
    {(yyval.nodito) = new nodo("expr",(yyvsp[-1].TEXT),(yylsp[-1]).first_line,(yylsp[-1]).first_column); (yyval.nodito)->add(*(yyvsp[-2].nodito)); (yyval.nodito)->add(*(yyvsp[0].nodito));}
#line 3198 "parser.cpp" /* yacc.c:1651  */
    break;

  case 122:
#line 834 "sintactico.yy" /* yacc.c:1651  */
    {(yyval.nodito) = new nodo("expr",(yyvsp[-1].TEXT),(yylsp[-1]).first_line,(yylsp[-1]).first_column); (yyval.nodito)->add(*(yyvsp[-2].nodito)); (yyval.nodito)->add(*(yyvsp[0].nodito));}
#line 3204 "parser.cpp" /* yacc.c:1651  */
    break;

  case 123:
#line 835 "sintactico.yy" /* yacc.c:1651  */
    {(yyval.nodito) = new nodo("expr",(yyvsp[-1].TEXT),(yylsp[-1]).first_line,(yylsp[-1]).first_column); (yyval.nodito)->add(*(yyvsp[-2].nodito)); (yyval.nodito)->add(*(yyvsp[0].nodito));}
#line 3210 "parser.cpp" /* yacc.c:1651  */
    break;

  case 124:
#line 836 "sintactico.yy" /* yacc.c:1651  */
    {(yyval.nodito) = new nodo("expr",(yyvsp[-1].TEXT),(yylsp[-1]).first_line,(yylsp[-1]).first_column); (yyval.nodito)->add(*(yyvsp[-2].nodito)); (yyval.nodito)->add(*(yyvsp[0].nodito));}
#line 3216 "parser.cpp" /* yacc.c:1651  */
    break;

  case 125:
#line 837 "sintactico.yy" /* yacc.c:1651  */
    {(yyval.nodito) =(yyvsp[0].nodito);}
#line 3222 "parser.cpp" /* yacc.c:1651  */
    break;

  case 126:
#line 839 "sintactico.yy" /* yacc.c:1651  */
    {nodo *nod = new nodo("expa",(yyvsp[-1].TEXT),(yylsp[-1]).first_line, (yylsp[-1]).first_column);  nod->add(*(yyvsp[-2].nodito)); nod->add(*(yyvsp[0].nodito)); (yyval.nodito)=nod;}
#line 3228 "parser.cpp" /* yacc.c:1651  */
    break;

  case 127:
#line 840 "sintactico.yy" /* yacc.c:1651  */
    {nodo *nod = new nodo("expa",(yyvsp[-1].TEXT),(yylsp[-1]).first_line, (yylsp[-1]).first_column); nod->add(*(yyvsp[-2].nodito)); nod->add(*(yyvsp[0].nodito)); (yyval.nodito)=nod;}
#line 3234 "parser.cpp" /* yacc.c:1651  */
    break;

  case 128:
#line 841 "sintactico.yy" /* yacc.c:1651  */
    {nodo *nod = new nodo("expa",(yyvsp[-1].TEXT),(yylsp[-1]).first_line, (yylsp[-1]).first_column); nod->add(*(yyvsp[-2].nodito)); nod->add(*(yyvsp[0].nodito)); (yyval.nodito)=nod;}
#line 3240 "parser.cpp" /* yacc.c:1651  */
    break;

  case 129:
#line 842 "sintactico.yy" /* yacc.c:1651  */
    {nodo *nod = new nodo("expa",(yyvsp[-1].TEXT),(yylsp[-1]).first_line, (yylsp[-1]).first_column); nod->add(*(yyvsp[-2].nodito)); nod->add(*(yyvsp[0].nodito)); (yyval.nodito)=nod;}
#line 3246 "parser.cpp" /* yacc.c:1651  */
    break;

  case 130:
#line 843 "sintactico.yy" /* yacc.c:1651  */
    { nodo *nod = new nodo("expa",(yyvsp[-1].TEXT),(yylsp[-1]).first_line, (yylsp[-1]).first_column); nod->add(*(yyvsp[-2].nodito));  nod->add(*(yyvsp[0].nodito));  (yyval.nodito)=nod ;  }
#line 3252 "parser.cpp" /* yacc.c:1651  */
    break;

  case 131:
#line 844 "sintactico.yy" /* yacc.c:1651  */
    { (yyval.nodito) = new nodo("expa",(yyvsp[-1].TEXT),(yylsp[-1]).first_line, (yylsp[-1]).first_column); (yyval.nodito)->add(*(yyvsp[0].nodito));}
#line 3258 "parser.cpp" /* yacc.c:1651  */
    break;

  case 132:
#line 845 "sintactico.yy" /* yacc.c:1651  */
    { (yyval.nodito) = new nodo("variable",(yyvsp[0].TEXT),(yylsp[0]).first_line, (yylsp[0]).first_column);}
#line 3264 "parser.cpp" /* yacc.c:1651  */
    break;

  case 133:
#line 846 "sintactico.yy" /* yacc.c:1651  */
    {(yyval.nodito) = new nodo("acceso",(yyvsp[-1].TEXT),(yylsp[-1]).first_line,(yylsp[-1]).first_column); (yyval.nodito)->hijos.append(*(yyvsp[0].nodito));}
#line 3270 "parser.cpp" /* yacc.c:1651  */
    break;

  case 134:
#line 847 "sintactico.yy" /* yacc.c:1651  */
    { (yyval.nodito) = new nodo("entero",(yyvsp[0].TEXT),(yylsp[0]).first_line, (yylsp[0]).first_column);}
#line 3276 "parser.cpp" /* yacc.c:1651  */
    break;

  case 135:
#line 848 "sintactico.yy" /* yacc.c:1651  */
    { (yyval.nodito) = new nodo("caracter",(yyvsp[0].TEXT),(yylsp[0]).first_line, (yylsp[0]).first_column);}
#line 3282 "parser.cpp" /* yacc.c:1651  */
    break;

  case 136:
#line 849 "sintactico.yy" /* yacc.c:1651  */
    { (yyval.nodito) = new nodo("caracter",(yyvsp[0].TEXT),(yylsp[0]).first_line, (yylsp[0]).first_column);}
#line 3288 "parser.cpp" /* yacc.c:1651  */
    break;

  case 137:
#line 850 "sintactico.yy" /* yacc.c:1651  */
    { (yyval.nodito) = new nodo("booleano",(yyvsp[0].TEXT),(yylsp[0]).first_line, (yylsp[0]).first_column);}
#line 3294 "parser.cpp" /* yacc.c:1651  */
    break;

  case 138:
#line 851 "sintactico.yy" /* yacc.c:1651  */
    { (yyval.nodito) = new nodo("cadena",(yyvsp[0].TEXT),(yylsp[0]).first_line, (yylsp[0]).first_column);}
#line 3300 "parser.cpp" /* yacc.c:1651  */
    break;

  case 139:
#line 852 "sintactico.yy" /* yacc.c:1651  */
    { (yyval.nodito) = new nodo("nada",(yyvsp[0].TEXT),(yylsp[0]).first_line, (yylsp[0]).first_column);}
#line 3306 "parser.cpp" /* yacc.c:1651  */
    break;

  case 140:
#line 853 "sintactico.yy" /* yacc.c:1651  */
    {(yyval.nodito) = (yyvsp[0].nodito);}
#line 3312 "parser.cpp" /* yacc.c:1651  */
    break;

  case 141:
#line 854 "sintactico.yy" /* yacc.c:1651  */
    {(yyval.nodito)=(yyvsp[-1].nodito);}
#line 3318 "parser.cpp" /* yacc.c:1651  */
    break;

  case 142:
#line 855 "sintactico.yy" /* yacc.c:1651  */
    {
                    (yyval.nodito)=(yyvsp[0].nodito);
                    nodo *nod = new nodo("id",(yyvsp[-1].TEXT),(yylsp[-1]).first_line, (yylsp[-1]).first_column);
                    (yyval.nodito)->hijos.prepend(*nod);
                    }
#line 3328 "parser.cpp" /* yacc.c:1651  */
    break;

  case 143:
#line 860 "sintactico.yy" /* yacc.c:1651  */
    {
                     (yyval.nodito)=(yyvsp[-1].nodito);
                     nodo *nod = new nodo("id",(yyvsp[-2].TEXT),(yylsp[-2]).first_line, (yylsp[-2]).first_column);
                     (yyval.nodito)->hijos.prepend(*nod);
                     }
#line 3338 "parser.cpp" /* yacc.c:1651  */
    break;

  case 144:
#line 866 "sintactico.yy" /* yacc.c:1651  */
    {
                     (yyval.nodito)=(yyvsp[0].nodito);
                     nodo *nod = new nodo("id",(yyvsp[-1].TEXT),(yylsp[-1]).first_line, (yylsp[-1]).first_column);
                     (yyval.nodito)->hijos.prepend(*nod);
                     }
#line 3348 "parser.cpp" /* yacc.c:1651  */
    break;

  case 145:
#line 872 "sintactico.yy" /* yacc.c:1651  */
    {
            (yyval.nodito) = new nodo("convertacadena","convertacadena",(yylsp[-3]).first_line,(yylsp[-3]).first_column);
            (yyval.nodito)->hijos.append(*(yyvsp[-1].nodito));
         }
#line 3357 "parser.cpp" /* yacc.c:1651  */
    break;

  case 146:
#line 877 "sintactico.yy" /* yacc.c:1651  */
    {
            (yyval.nodito) = new nodo("convertaentero","convertaentero",(yylsp[-3]).first_line,(yylsp[-3]).first_column);
            (yyval.nodito)->hijos.append(*(yyvsp[-1].nodito));
         }
#line 3366 "parser.cpp" /* yacc.c:1651  */
    break;

  case 147:
#line 882 "sintactico.yy" /* yacc.c:1651  */
    {
             (yyval.nodito)=(yyvsp[0].nodito);
         }
#line 3374 "parser.cpp" /* yacc.c:1651  */
    break;

  case 148:
#line 890 "sintactico.yy" /* yacc.c:1651  */
    {
        (yyval.nodito)=(yyvsp[-2].nodito);
        (yyval.nodito)->hijos.append(*(yyvsp[0].nodito));
     }
#line 3383 "parser.cpp" /* yacc.c:1651  */
    break;

  case 149:
#line 895 "sintactico.yy" /* yacc.c:1651  */
    {
        (yyval.nodito) = new nodo("lpar","lpar",(yylsp[0]).first_line,(yylsp[0]).first_column);
        (yyval.nodito)->hijos.append(*(yyvsp[0].nodito));
     }
#line 3392 "parser.cpp" /* yacc.c:1651  */
    break;

  case 150:
#line 902 "sintactico.yy" /* yacc.c:1651  */
    {
             (yyval.nodito) = new nodo("llamada",(yyvsp[-2].TEXT),(yylsp[-2]).first_line,(yylsp[-2]).first_column);
             /*nodo *params = new nodo("lpar","lpar",@2.first_line,@2.first_column);
             $$->hijos.append(*params);*/
         }
#line 3402 "parser.cpp" /* yacc.c:1651  */
    break;

  case 151:
#line 908 "sintactico.yy" /* yacc.c:1651  */
    {
             (yyval.nodito) = new nodo("llamada",(yyvsp[-3].TEXT),(yylsp[-3]).first_line,(yylsp[-3]).first_column);
             for(int i= 0; i<(yyvsp[-1].nodito)->hijos.count(); i++)
             {
                (yyval.nodito)->hijos.append((yyvsp[-1].nodito)->hijos[i]);
             }
         }
#line 3414 "parser.cpp" /* yacc.c:1651  */
    break;

  case 152:
#line 916 "sintactico.yy" /* yacc.c:1651  */
    {
          (yyval.nodito) = (yyvsp[-3].nodito);
          (yyval.nodito)->tipo = "llamada";
          nodo *id = new nodo("id",(yyvsp[-4].TEXT),(yylsp[-4]).first_line,(yylsp[-4]).first_column);
          (yyval.nodito)->hijos.prepend(*id);
        }
#line 3425 "parser.cpp" /* yacc.c:1651  */
    break;

  case 153:
#line 923 "sintactico.yy" /* yacc.c:1651  */
    {
           (yyval.nodito) = (yyvsp[-2].nodito);
           (yyval.nodito)->tipo = "llamada";
           nodo *id = new nodo("id",(yyvsp[-3].TEXT),(yylsp[-3]).first_line,(yylsp[-3]).first_column);
           (yyval.nodito)->hijos.prepend(*id);
         }
#line 3436 "parser.cpp" /* yacc.c:1651  */
    break;

  case 154:
#line 933 "sintactico.yy" /* yacc.c:1651  */
    {nodo *nod = new nodo("aumento","++",(yylsp[0]).first_line, (yylsp[0]).first_column); nod->add(*(yyvsp[-1].nodito)); (yyval.nodito)= nod;}
#line 3442 "parser.cpp" /* yacc.c:1651  */
    break;

  case 155:
#line 934 "sintactico.yy" /* yacc.c:1651  */
    {nodo *nod = new nodo("decremento","--",(yylsp[0]).first_line, (yylsp[0]).first_column); nod->add(*(yyvsp[-1].nodito)); (yyval.nodito)= nod;}
#line 3448 "parser.cpp" /* yacc.c:1651  */
    break;

  case 156:
#line 938 "sintactico.yy" /* yacc.c:1651  */
    {
             (yyval.nodito) = (yyvsp[-2].nodito);
             nodo *nod= new nodo("id",(yyvsp[0].TEXT),(yylsp[0]).first_line, (yylsp[0]).first_column);
             (yyval.nodito)->hijos.append(*nod);
         }
#line 3458 "parser.cpp" /* yacc.c:1651  */
    break;

  case 157:
#line 944 "sintactico.yy" /* yacc.c:1651  */
    {
            (yyval.nodito) = (yyvsp[-3].nodito);
            nodo *nod= new nodo("idv",(yyvsp[-1].TEXT),(yylsp[-1]).first_line, (yylsp[-1]).first_column);
            nod->hijos.append(*(yyvsp[0].nodito));
            (yyval.nodito)->hijos.append(*nod);
         }
#line 3469 "parser.cpp" /* yacc.c:1651  */
    break;

  case 158:
#line 951 "sintactico.yy" /* yacc.c:1651  */
    {
             (yyval.nodito) = new nodo("acceso","acceso",(yylsp[-1]).first_line, (yylsp[-1]).first_column);
             nodo *nod= new nodo("id",(yyvsp[0].TEXT),(yylsp[-1]).first_line, (yylsp[-1]).first_column);
             (yyval.nodito)->hijos.append(*nod);
         }
#line 3479 "parser.cpp" /* yacc.c:1651  */
    break;

  case 159:
#line 957 "sintactico.yy" /* yacc.c:1651  */
    {
             (yyval.nodito) = new nodo("acceso","acceso",(yylsp[-2]).first_line, (yylsp[-2]).first_column);
             nodo *nod= new nodo("idv",(yyvsp[-1].TEXT),(yylsp[-1]).first_line, (yylsp[-1]).first_column);
             nod->hijos.append(*(yyvsp[0].nodito));
             (yyval.nodito)->hijos.append(*nod);
         }
#line 3490 "parser.cpp" /* yacc.c:1651  */
    break;


#line 3494 "parser.cpp" /* yacc.c:1651  */
      default: break;
    }
  /* User semantic actions sometimes alter yychar, and that requires
     that yytoken be updated with the new translation.  We take the
     approach of translating immediately before every use of yytoken.
     One alternative is translating here after every semantic action,
     but that translation would be missed if the semantic action invokes
     YYABORT, YYACCEPT, or YYERROR immediately after altering yychar or
     if it invokes YYBACKUP.  In the case of YYABORT or YYACCEPT, an
     incorrect destructor might then be invoked immediately.  In the
     case of YYERROR or YYBACKUP, subsequent parser actions might lead
     to an incorrect destructor call or verbose syntax error message
     before the lookahead is translated.  */
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;
  *++yylsp = yyloc;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYEMPTY : YYTRANSLATE (yychar);

  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
# define YYSYNTAX_ERROR yysyntax_error (&yymsg_alloc, &yymsg, \
                                        yyssp, yytoken)
      {
        char const *yymsgp = YY_("syntax error");
        int yysyntax_error_status;
        yysyntax_error_status = YYSYNTAX_ERROR;
        if (yysyntax_error_status == 0)
          yymsgp = yymsg;
        else if (yysyntax_error_status == 1)
          {
            if (yymsg != yymsgbuf)
              YYSTACK_FREE (yymsg);
            yymsg = (char *) YYSTACK_ALLOC (yymsg_alloc);
            if (!yymsg)
              {
                yymsg = yymsgbuf;
                yymsg_alloc = sizeof yymsgbuf;
                yysyntax_error_status = 2;
              }
            else
              {
                yysyntax_error_status = YYSYNTAX_ERROR;
                yymsgp = yymsg;
              }
          }
        yyerror (yymsgp);
        if (yysyntax_error_status == 2)
          goto yyexhaustedlab;
      }
# undef YYSYNTAX_ERROR
#endif
    }

  yyerror_range[1] = yylloc;

  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
         error, discard it.  */

      if (yychar <= YYEOF)
        {
          /* Return failure if at end of input.  */
          if (yychar == YYEOF)
            YYABORT;
        }
      else
        {
          yydestruct ("Error: discarding",
                      yytoken, &yylval, &yylloc);
          yychar = YYEMPTY;
        }
    }

  /* Else will try to reuse lookahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:

  /* Pacify compilers like GCC when the user code never invokes
     YYERROR and the label yyerrorlab therefore never appears in user
     code.  */
  if (/*CONSTCOND*/ 0)
     goto yyerrorlab;

  /* Do not reclaim the symbols of the rule whose action triggered
     this YYERROR.  */
  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;      /* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYTERROR;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYTERROR)
            {
              yyn = yytable[yyn];
              if (0 < yyn)
                break;
            }
        }

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
        YYABORT;

      yyerror_range[1] = *yylsp;
      yydestruct ("Error: popping",
                  yystos[yystate], yyvsp, yylsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  yyerror_range[2] = yylloc;
  /* Using YYLLOC is tempting, but would change the location of
     the lookahead.  YYLOC is available though.  */
  YYLLOC_DEFAULT (yyloc, yyerror_range, 2);
  *++yylsp = yyloc;

  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", yystos[yyn], yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturn;

/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturn;

#if !defined yyoverflow || YYERROR_VERBOSE
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval, &yylloc);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  yystos[*yyssp], yyvsp, yylsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
#if YYERROR_VERBOSE
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
#endif
  return yyresult;
}
#line 963 "sintactico.yy" /* yacc.c:1910  */

