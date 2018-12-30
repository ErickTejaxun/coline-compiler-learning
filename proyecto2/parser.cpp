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
    seleccionar = 323,
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
#define YYFINAL  39
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   280

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  88
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  29
/* YYNRULES -- Number of rules.  */
#define YYNRULES  96
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  196

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
       0,   177,   177,   179,   180,   184,   185,   186,   187,   188,
     189,   190,   193,   198,   205,   212,   221,   241,   246,   253,
     259,   268,   269,   270,   276,   285,   286,   289,   295,   303,
     311,   337,   344,   353,   361,   371,   372,   373,   374,   375,
     380,   388,   400,   408,   416,   427,   428,   432,   438,   447,
     458,   459,   464,   465,   468,   469,   470,   471,   472,   478,
     487,   488,   489,   491,   494,   495,   496,   497,   498,   499,
     500,   502,   503,   504,   505,   506,   508,   509,   510,   511,
     512,   513,   514,   515,   516,   517,   518,   519,   524,   529,
     534,   546,   547,   550,   556,   564,   570
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
  "detener", "continuar", "si", "sinosi", "sino", "seleccionar", "caso",
  "defecto", "mientras", "hacer", "para", "lista", "insertar", "obtener",
  "buscar", "pila", "apilar", "desapilar", "cola", "encolar", "desencolar",
  "mostraredd", "leer_teclado", "puntoComa", "punto", "$accept", "INICIO",
  "SENTENCIAS", "INSTRUCCION", "IMPRIMIR", "CONCATENAR", "IMPORTAR",
  "INSCLASE", "ATRIBUTO", "VISIBILIDAD", "FUNCION", "TIPOR", "CLASE",
  "ASIGNACION", "TIPOASIG", "DECLARACION", "DECLARACIONARRAY",
  "DIMENSIONES", "VALORESA", "LVALORES", "VALORES", "VALAS", "TIPO",
  "SENTSELEC", "EXPL", "EXPR", "EXPA", "UNARIOS", "ACCESO", YY_NULLPTR
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

#define YYPACT_NINF -113

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-113)))

#define YYTABLE_NINF -1

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     144,    -1,  -113,  -113,  -113,  -113,    29,    40,    50,  -113,
    -113,  -113,    86,   100,   144,  -113,    16,    18,    32,    98,
    -113,    60,    65,    69,   145,   130,  -113,  -113,  -113,  -113,
    -113,   150,   130,     4,   -14,    48,   130,     3,   152,  -113,
    -113,  -113,  -113,  -113,   165,  -113,  -113,  -113,    26,  -113,
    -113,  -113,  -113,  -113,   -10,   130,   120,   130,   168,   182,
    -113,   126,  -113,   219,  -113,   186,  -113,  -113,   190,   130,
     130,   -14,   187,   130,   193,    35,    -7,   181,   196,   206,
      25,   130,    47,    -9,   139,   137,   239,  -113,   130,   130,
    -113,   130,   130,  -113,  -113,   120,   120,   120,   120,   120,
     120,   120,   120,   120,   120,   120,   214,   130,   128,  -113,
     130,   186,  -113,  -113,  -113,   130,  -113,   217,  -113,    67,
    -113,   146,   222,   220,  -113,   181,   232,  -113,   108,   139,
    -113,   140,   166,   223,  -113,   239,   239,   163,   163,    24,
     236,   236,   236,   236,   236,   236,   204,  -113,  -113,   214,
      64,  -113,  -113,   233,   169,   222,  -113,   231,   181,   256,
     258,   259,  -113,    96,  -113,  -113,   130,  -113,   130,   262,
    -113,   260,  -113,   181,   130,    31,    96,   183,   263,  -113,
     264,    72,    96,  -113,   266,  -113,   267,  -113,  -113,   130,
     130,   268,    96,    77,  -113,  -113
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,    58,    54,    55,    56,    57,     0,     0,     0,    21,
      22,    23,     0,     0,     2,     4,     0,     0,     0,     0,
      11,     0,     0,     0,     0,     0,    35,    36,    37,    38,
      39,     0,     0,     0,     0,     0,     0,     0,     0,     1,
       3,     9,     8,    10,     0,     7,     5,     6,    40,    79,
      81,    80,    82,    83,    77,     0,     0,     0,     0,     0,
      84,     0,    63,    70,    85,    95,    31,    53,    52,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    42,    78,    87,     0,    76,    62,     0,     0,
      46,     0,     0,    91,    92,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    96,     0,     0,    32,
       0,    93,    33,    13,    12,     0,    58,     0,    17,     0,
      18,     0,     0,     0,    16,     0,     0,    41,     0,    88,
      86,     0,     0,    61,    60,    71,    72,    73,    74,    75,
      67,    66,    69,    68,    64,    65,     0,    45,    34,    94,
       0,    28,    26,     0,     0,     0,    20,    40,     0,     0,
       0,     0,    44,    43,    89,    90,     0,    14,     0,     0,
      19,     0,    27,     0,     0,     0,    59,     0,     0,    30,
       0,     0,    51,    47,     0,    15,     0,    29,    49,     0,
       0,     0,    50,     0,    24,    48
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -113,  -113,  -113,   261,  -113,   244,  -113,  -112,  -113,    87,
    -113,  -113,  -113,  -113,     0,     1,  -113,   -17,  -113,  -113,
      84,    -5,     2,  -113,   -25,  -113,   110,  -113,    -4
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    13,    14,    15,    16,    17,    18,   117,   118,   119,
     120,   153,    20,    21,    32,   121,    23,    33,   162,   175,
     181,    66,   122,    67,    68,    62,    63,    64,    34
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint8 yytable[] =
{
      61,    22,    24,    25,    69,    26,    27,    28,    29,   115,
      75,    76,    25,   159,    77,    22,    24,    69,    26,    27,
      28,    29,    30,    26,    27,    28,    29,    91,    92,    71,
      85,    82,    87,    70,    73,    30,   125,    83,    35,    25,
      30,    93,    94,   183,   108,   114,   171,   184,   106,    36,
      84,    49,    50,    51,    52,    53,    54,    55,    37,    78,
      69,   180,    81,   131,   132,   109,   133,   134,   112,    91,
      92,   110,    56,    72,   167,   116,   127,    31,    31,   129,
     168,   126,   146,   128,   188,    57,    31,    19,   189,   195,
     150,    31,     7,   189,   149,    38,    58,    59,    91,    92,
      39,    19,    41,   163,    42,   148,     2,     3,     4,     5,
      60,    49,    50,    51,    52,    53,    54,    55,    43,   161,
     154,   155,   152,    49,    50,    51,    52,    53,    54,    55,
      91,    92,    56,    49,    50,    51,    52,    53,    54,    55,
      90,   176,   147,   177,    56,    57,    45,   130,    44,   182,
     164,    46,     1,    48,    56,    47,    58,    59,    65,    79,
      91,    92,    91,    92,   192,   182,    86,    57,    58,    59,
      60,    91,    92,    80,    91,    92,   165,    88,    58,    59,
      93,    94,    60,     2,     3,     4,     5,     6,     7,   116,
      99,    89,    60,   185,     8,   111,     9,    10,    11,    25,
      91,    92,    12,   113,   123,   135,   136,   137,   138,   139,
     140,   141,   142,   143,   144,   145,   124,    91,    92,   166,
       2,     3,     4,     5,    91,    92,    72,    69,   107,   151,
     157,   158,   156,     9,    10,    11,    93,    94,    91,    92,
     160,   169,    95,    96,    97,    98,    99,   100,   101,   102,
     103,   104,   105,    93,    94,   170,    93,    94,    92,    95,
      96,    97,    98,    99,    97,    98,    99,    81,   172,   173,
     174,   178,   179,   186,   193,    40,   187,   190,   191,    74,
     194
};

static const yytype_uint8 yycheck[] =
{
      25,     0,     0,    13,    13,    19,    20,    21,    22,    16,
      35,    36,    13,   125,    11,    14,    14,    13,    19,    20,
      21,    22,    36,    19,    20,    21,    22,    34,    35,    33,
      55,    48,    57,    33,    34,    36,    11,    54,     9,    13,
      36,    17,    18,    12,    69,    10,   158,    16,    65,     9,
      54,     3,     4,     5,     6,     7,     8,     9,     8,    56,
      13,   173,    36,    88,    89,    70,    91,    92,    73,    34,
      35,    71,    24,    87,    10,     8,    81,    87,    87,    83,
      16,    56,   107,    36,    12,    37,    87,     0,    16,    12,
     115,    87,    44,    16,   111,     9,    48,    49,    34,    35,
       0,    14,    86,   128,    86,   110,    39,    40,    41,    42,
      62,     3,     4,     5,     6,     7,     8,     9,    86,    11,
     119,   119,    55,     3,     4,     5,     6,     7,     8,     9,
      34,    35,    24,     3,     4,     5,     6,     7,     8,     9,
      14,   166,    14,   168,    24,    37,    86,    10,    50,   174,
      10,    86,     8,     8,    24,    86,    48,    49,     8,     7,
      34,    35,    34,    35,   189,   190,    56,    37,    48,    49,
      62,    34,    35,     8,    34,    35,    10,     9,    48,    49,
      17,    18,    62,    39,    40,    41,    42,    43,    44,     8,
      27,     9,    62,    10,    50,     8,    52,    53,    54,    13,
      34,    35,    58,    10,     8,    95,    96,    97,    98,    99,
     100,   101,   102,   103,   104,   105,    10,    34,    35,    15,
      39,    40,    41,    42,    34,    35,    87,    13,    38,    12,
       8,    11,    86,    52,    53,    54,    17,    18,    34,    35,
       8,     8,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    17,    18,    86,    17,    18,    35,    23,
      24,    25,    26,    27,    25,    26,    27,    36,    12,    11,
      11,     9,    12,    10,   190,    14,    12,    11,    11,    35,
      12
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     8,    39,    40,    41,    42,    43,    44,    50,    52,
      53,    54,    58,    89,    90,    91,    92,    93,    94,    97,
     100,   101,   103,   104,   110,    13,    19,    20,    21,    22,
      36,    87,   102,   105,   116,     9,     9,     8,     9,     0,
      91,    86,    86,    86,    50,    86,    86,    86,     8,     3,
       4,     5,     6,     7,     8,     9,    24,    37,    48,    49,
      62,   112,   113,   114,   115,     8,   109,   111,   112,    13,
     102,   116,    87,   102,    93,   112,   112,    11,    56,     7,
       8,    36,   105,   105,   116,   112,   114,   112,     9,     9,
      14,    34,    35,    17,    18,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,   105,    38,   112,   109,
     102,     8,   109,    10,    10,    16,     8,    95,    96,    97,
      98,   103,   110,     8,    10,    11,    56,   109,    36,   116,
      10,   112,   112,   112,   112,   114,   114,   114,   114,   114,
     114,   114,   114,   114,   114,   114,   112,    14,   109,   105,
     112,    12,    55,    99,   103,   110,    86,     8,    11,    95,
       8,    11,   106,   112,    10,    10,    15,    10,    16,     8,
      86,    95,    12,    11,    11,   107,   112,   112,     9,    12,
      95,   108,   112,    12,    16,    10,    10,    12,    12,    16,
      11,    11,   112,   108,    12,    12
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    88,    89,    90,    90,    91,    91,    91,    91,    91,
      91,    91,    92,    92,    93,    93,    94,    95,    95,    96,
      96,    97,    97,    97,    98,    99,    99,   100,   100,   100,
     100,   101,   101,   101,   101,   102,   102,   102,   102,   102,
     103,   103,   104,   104,   104,   105,   105,   106,   107,   107,
     108,   108,   109,   109,   110,   110,   110,   110,   110,   111,
     112,   112,   112,   112,   113,   113,   113,   113,   113,   113,
     113,   114,   114,   114,   114,   114,   114,   114,   114,   114,
     114,   114,   114,   114,   114,   114,   114,   114,   114,   114,
     114,   115,   115,   116,   116,   116,   116
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     2,     1,     2,     2,     2,     2,     2,
       2,     1,     4,     4,     6,     8,     4,     1,     1,     3,
       2,     1,     1,     1,     7,     1,     1,     6,     5,     8,
       7,     3,     4,     4,     5,     1,     1,     1,     1,     1,
       2,     4,     3,     5,     5,     4,     3,     3,     5,     3,
       3,     1,     1,     1,     1,     1,     1,     1,     1,     5,
       3,     3,     2,     1,     3,     3,     3,     3,     3,     3,
       1,     3,     3,     3,     3,     3,     2,     1,     2,     1,
       1,     1,     1,     1,     1,     1,     3,     2,     3,     4,
       4,     2,     2,     3,     4,     2,     3
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
#line 177 "sintactico.yy" /* yacc.c:1651  */
    {(yyval.nodito)=(yyvsp[0].nodito); raiz = (yyval.nodito);}
#line 1599 "parser.cpp" /* yacc.c:1651  */
    break;

  case 3:
#line 179 "sintactico.yy" /* yacc.c:1651  */
    { (yyval.nodito) = (yyvsp[-1].nodito); (yyval.nodito)->add(*(yyvsp[0].nodito));}
#line 1605 "parser.cpp" /* yacc.c:1651  */
    break;

  case 4:
#line 180 "sintactico.yy" /* yacc.c:1651  */
    { nodo *nuevo = new nodo("sentencias","sentencias",(yylsp[0]).first_line, (yylsp[0]).first_column); nuevo->add(*(yyvsp[0].nodito)); (yyval.nodito) = nuevo;}
#line 1611 "parser.cpp" /* yacc.c:1651  */
    break;

  case 5:
#line 184 "sintactico.yy" /* yacc.c:1651  */
    { (yyval.nodito) = (yyvsp[-1].nodito);}
#line 1617 "parser.cpp" /* yacc.c:1651  */
    break;

  case 6:
#line 185 "sintactico.yy" /* yacc.c:1651  */
    { (yyval.nodito) = (yyvsp[-1].nodito);}
#line 1623 "parser.cpp" /* yacc.c:1651  */
    break;

  case 7:
#line 186 "sintactico.yy" /* yacc.c:1651  */
    {(yyval.nodito) = (yyvsp[-1].nodito);}
#line 1629 "parser.cpp" /* yacc.c:1651  */
    break;

  case 8:
#line 187 "sintactico.yy" /* yacc.c:1651  */
    {(yyval.nodito) = (yyvsp[-1].nodito);}
#line 1635 "parser.cpp" /* yacc.c:1651  */
    break;

  case 9:
#line 188 "sintactico.yy" /* yacc.c:1651  */
    {(yyval.nodito) = (yyvsp[-1].nodito);}
#line 1641 "parser.cpp" /* yacc.c:1651  */
    break;

  case 10:
#line 189 "sintactico.yy" /* yacc.c:1651  */
    {(yyval.nodito)=(yyvsp[-1].nodito);}
#line 1647 "parser.cpp" /* yacc.c:1651  */
    break;

  case 11:
#line 190 "sintactico.yy" /* yacc.c:1651  */
    {(yyval.nodito) = (yyvsp[0].nodito);}
#line 1653 "parser.cpp" /* yacc.c:1651  */
    break;

  case 12:
#line 194 "sintactico.yy" /* yacc.c:1651  */
    {
                  (yyval.nodito) = new nodo("imprimir",(yyvsp[-3].TEXT),(yylsp[-3]).first_line,(yylsp[-3]).first_column);
                  (yyval.nodito)->hijos.append(*(yyvsp[-1].nodito));
              }
#line 1662 "parser.cpp" /* yacc.c:1651  */
    break;

  case 13:
#line 199 "sintactico.yy" /* yacc.c:1651  */
    {
                  (yyval.nodito) = new nodo("imprimir",(yyvsp[-3].TEXT),(yylsp[-3]).first_line,(yylsp[-3]).first_column);
                  (yyval.nodito)->hijos.append(*(yyvsp[-1].nodito));
              }
#line 1671 "parser.cpp" /* yacc.c:1651  */
    break;

  case 14:
#line 206 "sintactico.yy" /* yacc.c:1651  */
    {
                  (yyval.nodito) = new nodo("concatenar",(yyvsp[-5].TEXT), (yylsp[-5]).first_line, (yylsp[-5]).first_column);
                  (yyval.nodito)->hijos.append(*(yyvsp[-3].nodito));
                  (yyval.nodito)->hijos.append(*(yyvsp[-1].nodito));
              }
#line 1681 "parser.cpp" /* yacc.c:1651  */
    break;

  case 15:
#line 213 "sintactico.yy" /* yacc.c:1651  */
    {
                  (yyval.nodito) = new nodo("concatenar",(yyvsp[-7].TEXT), (yylsp[-7]).first_line, (yylsp[-7]).first_column);
                  (yyval.nodito)->hijos.append(*(yyvsp[-5].nodito));
                  (yyval.nodito)->hijos.append(*(yyvsp[-3].nodito));
                  (yyval.nodito)->hijos.append(*(yyvsp[-1].nodito));
              }
#line 1692 "parser.cpp" /* yacc.c:1651  */
    break;

  case 16:
#line 222 "sintactico.yy" /* yacc.c:1651  */
    {
                (yyval.nodito) = new nodo("importar",(yyvsp[-3].TEXT),(yylsp[-3]).first_line,(yylsp[-3]).first_column);
                nodo *ruta = new nodo("path",(yyvsp[-1].TEXT),(yylsp[-1]).first_line,(yylsp[-1]).first_column);
                (yyval.nodito)->hijos.append(*ruta);
              }
#line 1702 "parser.cpp" /* yacc.c:1651  */
    break;

  case 17:
#line 242 "sintactico.yy" /* yacc.c:1651  */
    {
                 (yyval.nodito) = new nodo("instrucciones","instrucciones",(yylsp[0]).first_line,(yylsp[0]).first_column);
                 (yyval.nodito)->hijos.append(*(yyvsp[0].nodito));
              }
#line 1711 "parser.cpp" /* yacc.c:1651  */
    break;

  case 18:
#line 247 "sintactico.yy" /* yacc.c:1651  */
    {
                 (yyval.nodito) = new nodo("instrucciones","instrucciones",(yylsp[0]).first_line,(yylsp[0]).first_column);
                 (yyval.nodito)->hijos.append(*(yyvsp[0].nodito));
              }
#line 1720 "parser.cpp" /* yacc.c:1651  */
    break;

  case 19:
#line 254 "sintactico.yy" /* yacc.c:1651  */
    {
                    (yyval.nodito) = (yyvsp[-1].nodito);
                    (yyval.nodito)->hijos.prepend(*(yyvsp[-2].nodito));
                    (yyval.nodito)->tipo = "declatrib";
                }
#line 1730 "parser.cpp" /* yacc.c:1651  */
    break;

  case 20:
#line 260 "sintactico.yy" /* yacc.c:1651  */
    {
                    (yyval.nodito) = (yyvsp[-1].nodito);
                    nodo *nod = new nodo("visibilidad","publico",(yylsp[-1]).first_line, (yylsp[-1]).first_column);
                    (yyval.nodito)->hijos.prepend(*nod);
                    (yyval.nodito)->tipo = "declatrib";
                }
#line 1741 "parser.cpp" /* yacc.c:1651  */
    break;

  case 21:
#line 268 "sintactico.yy" /* yacc.c:1651  */
    {(yyval.nodito) = new nodo("visibilidad",(yyvsp[0].TEXT),(yylsp[0]).first_line, (yylsp[0]).first_column);}
#line 1747 "parser.cpp" /* yacc.c:1651  */
    break;

  case 22:
#line 269 "sintactico.yy" /* yacc.c:1651  */
    {(yyval.nodito) = new nodo("visibilidad",(yyvsp[0].TEXT),(yylsp[0]).first_line, (yylsp[0]).first_column);}
#line 1753 "parser.cpp" /* yacc.c:1651  */
    break;

  case 23:
#line 270 "sintactico.yy" /* yacc.c:1651  */
    {(yyval.nodito) = new nodo("visibilidad",(yyvsp[0].TEXT),(yylsp[0]).first_line, (yylsp[0]).first_column);}
#line 1759 "parser.cpp" /* yacc.c:1651  */
    break;

  case 24:
#line 277 "sintactico.yy" /* yacc.c:1651  */
    {
                (yyval.nodito) = new nodo("funcion",(yyvsp[-4].TEXT),(yylsp[-6]).first_line,(yylsp[-6]).first_column);
                (yyval.nodito)->hijos.append(*(yyvsp[-6].nodito)); // visibilidad
                (yyval.nodito)->hijos.append(*(yyvsp[-5].nodito)); // tipo
            }
#line 1769 "parser.cpp" /* yacc.c:1651  */
    break;

  case 25:
#line 285 "sintactico.yy" /* yacc.c:1651  */
    {(yyval.nodito)=(yyvsp[0].nodito);}
#line 1775 "parser.cpp" /* yacc.c:1651  */
    break;

  case 26:
#line 286 "sintactico.yy" /* yacc.c:1651  */
    {(yyval.nodito)= new nodo("tipo",(yyvsp[0].TEXT),(yylsp[0]).first_line,(yylsp[0]).first_column);}
#line 1781 "parser.cpp" /* yacc.c:1651  */
    break;

  case 27:
#line 290 "sintactico.yy" /* yacc.c:1651  */
    {
                  (yyval.nodito) = new nodo("clase",(yyvsp[-3].TEXT),(yylsp[-5]).first_line, (yylsp[-5]).first_column);
                  (yyval.nodito)->hijos.append(*(yyvsp[-5].nodito));
                  (yyval.nodito)->hijos.append(*(yyvsp[-1].nodito));
              }
#line 1791 "parser.cpp" /* yacc.c:1651  */
    break;

  case 28:
#line 296 "sintactico.yy" /* yacc.c:1651  */
    {
                  (yyval.nodito) = new nodo("clase",(yyvsp[-3].TEXT),(yylsp[-4]).first_line, (yylsp[-4]).first_column);
                  nodo *nod = new nodo("visibilidad","publico",(yylsp[-4]).first_line, (yylsp[-4]).first_column);
                  (yyval.nodito)->hijos.append(*nod);
                  (yyval.nodito)->hijos.append(*(yyvsp[-1].nodito));
              }
#line 1802 "parser.cpp" /* yacc.c:1651  */
    break;

  case 29:
#line 304 "sintactico.yy" /* yacc.c:1651  */
    {
                  (yyval.nodito) = new nodo("clase",(yyvsp[-5].TEXT),(yylsp[-7]).first_line, (yylsp[-7]).first_column);
                  (yyval.nodito)->hijos.append(*(yyvsp[-7].nodito));
                  nodo *padre = new nodo("herencia",(yyvsp[-3].TEXT),(yylsp[-3]).first_line,(yylsp[-3]).first_column);
                  (yyval.nodito)->hijos.append(*padre);
                  (yyval.nodito)->hijos.append(*(yyvsp[-1].nodito));
              }
#line 1814 "parser.cpp" /* yacc.c:1651  */
    break;

  case 30:
#line 312 "sintactico.yy" /* yacc.c:1651  */
    {
                  (yyval.nodito) = new nodo("clase",(yyvsp[-5].TEXT),(yylsp[-6]).first_line, (yylsp[-6]).first_column);
                  nodo *nod = new nodo("visibilidad","publico",(yylsp[-6]).first_line, (yylsp[-6]).first_column);
                  (yyval.nodito)->hijos.append(*nod);
                  nodo *padre = new nodo("herencia",(yyvsp[-3].TEXT),(yylsp[-3]).first_line,(yylsp[-3]).first_column);
                  (yyval.nodito)->hijos.append(*padre);
                  (yyval.nodito)->hijos.append(*(yyvsp[-1].nodito));
              }
#line 1827 "parser.cpp" /* yacc.c:1651  */
    break;

  case 31:
#line 338 "sintactico.yy" /* yacc.c:1651  */
    {
                            (yyval.nodito)=(yyvsp[-1].nodito);
                            nodo *idnodo = new nodo("variable",(yyvsp[-2].TEXT),(yylsp[-2]).first_line, (yylsp[-2]).first_column);
                            (yyval.nodito)->add(*idnodo);
                            (yyval.nodito)->add(*(yyvsp[0].nodito));
                           }
#line 1838 "parser.cpp" /* yacc.c:1651  */
    break;

  case 32:
#line 345 "sintactico.yy" /* yacc.c:1651  */
    {
                            (yyval.nodito)=(yyvsp[-1].nodito);
                            (yyval.nodito)->tipo= "asiga";
                            (yyval.nodito)->add(*(yyvsp[-2].nodito));
                            nodo *idnodo = new nodo("variable",(yyvsp[-3].TEXT),(yylsp[-3]).first_line, (yylsp[-3]).first_column);
                            (yyval.nodito)->add(*idnodo);
                            (yyval.nodito)->add(*(yyvsp[0].nodito));
                           }
#line 1851 "parser.cpp" /* yacc.c:1651  */
    break;

  case 33:
#line 354 "sintactico.yy" /* yacc.c:1651  */
    {
                          (yyval.nodito)=(yyvsp[-1].nodito);
                          nodo *nod = new nodo("id",(yyvsp[-3].TEXT),(yylsp[-3]).first_line, (yylsp[-3]).first_column);
                          (yyvsp[-2].nodito)->hijos.prepend(*nod);
                          (yyval.nodito)->hijos.append(*(yyvsp[-2].nodito));
                          (yyval.nodito)->hijos.append(*(yyvsp[0].nodito));
                          }
#line 1863 "parser.cpp" /* yacc.c:1651  */
    break;

  case 34:
#line 362 "sintactico.yy" /* yacc.c:1651  */
    {
                           (yyval.nodito)=(yyvsp[-1].nodito);
                           nodo *nod = new nodo("id",(yyvsp[-4].TEXT),(yylsp[-4]).first_line, (yylsp[-4]).first_column);
                           nod->hijos.append(*(yyvsp[-3].nodito));
                           (yyval.nodito)->hijos.prepend(*nod);
                           (yyval.nodito)->hijos.append(*(yyvsp[0].nodito));
                           }
#line 1875 "parser.cpp" /* yacc.c:1651  */
    break;

  case 35:
#line 371 "sintactico.yy" /* yacc.c:1651  */
    {(yyval.nodito)=new nodo("asig",(yyvsp[0].TEXT),(yylsp[0]).first_line, (yylsp[0]).first_column);}
#line 1881 "parser.cpp" /* yacc.c:1651  */
    break;

  case 36:
#line 372 "sintactico.yy" /* yacc.c:1651  */
    {(yyval.nodito)=new nodo("asig",(yyvsp[0].TEXT),(yylsp[0]).first_line, (yylsp[0]).first_column);}
#line 1887 "parser.cpp" /* yacc.c:1651  */
    break;

  case 37:
#line 373 "sintactico.yy" /* yacc.c:1651  */
    {(yyval.nodito)=new nodo("asig",(yyvsp[0].TEXT),(yylsp[0]).first_line, (yylsp[0]).first_column);}
#line 1893 "parser.cpp" /* yacc.c:1651  */
    break;

  case 38:
#line 374 "sintactico.yy" /* yacc.c:1651  */
    {(yyval.nodito)=new nodo("asig",(yyvsp[0].TEXT),(yylsp[0]).first_line, (yylsp[0]).first_column);}
#line 1899 "parser.cpp" /* yacc.c:1651  */
    break;

  case 39:
#line 375 "sintactico.yy" /* yacc.c:1651  */
    {(yyval.nodito)=new nodo("asig",(yyvsp[0].TEXT),(yylsp[0]).first_line, (yylsp[0]).first_column);}
#line 1905 "parser.cpp" /* yacc.c:1651  */
    break;

  case 40:
#line 381 "sintactico.yy" /* yacc.c:1651  */
    {
            nodo *nuevo = new nodo("d","d",(yylsp[-1]).first_line, (yylsp[-1]).first_column);
            nuevo->add(*(yyvsp[-1].nodito));
            nodo *nodoid =  new nodo("id",(yyvsp[0].TEXT),(yylsp[0]).first_line,(yylsp[0]).first_column);
            nuevo->add(*nodoid);
            (yyval.nodito) = nuevo;
         }
#line 1917 "parser.cpp" /* yacc.c:1651  */
    break;

  case 41:
#line 388 "sintactico.yy" /* yacc.c:1651  */
    {
             nodo *nuevo = new nodo("da","da",(yylsp[-3]).first_line, (yylsp[-3]).first_column);
             nuevo->add(*(yyvsp[-3].nodito));
             nodo *nodoid =  new nodo("id",(yyvsp[-2].TEXT),(yylsp[-2]).first_line,(yylsp[-2]).first_column);
             nuevo->add(*nodoid);
             nuevo->add(*(yyvsp[0].nodito));
             (yyval.nodito) = nuevo;}
#line 1929 "parser.cpp" /* yacc.c:1651  */
    break;

  case 42:
#line 401 "sintactico.yy" /* yacc.c:1651  */
    {
            nodo *nuevo = new nodo("dar","dar",(yylsp[-2]).first_line, (yylsp[-2]).first_column);
            nuevo->add(*(yyvsp[-2].nodito));
            nodo *nodoid =  new nodo("id",(yyvsp[-1].TEXT),(yylsp[-1]).first_line,(yylsp[-1]).first_column);
            nuevo->add(*nodoid);
            (yyval.nodito) = nuevo;
         }
#line 1941 "parser.cpp" /* yacc.c:1651  */
    break;

  case 43:
#line 408 "sintactico.yy" /* yacc.c:1651  */
    {
             nodo *nuevo = new nodo("dara","dara",(yylsp[-4]).first_line, (yylsp[-4]).first_column);
             nuevo->add(*(yyvsp[-4].nodito));
             nodo *nodoid =  new nodo("id",(yyvsp[-3].TEXT),(yylsp[-3]).first_line,(yylsp[-3]).first_column);
             nuevo->add(*nodoid);
             nuevo->add(*(yyvsp[-2].nodito));
             nuevo->add(*(yyvsp[0].nodito));
             (yyval.nodito) = nuevo;}
#line 1954 "parser.cpp" /* yacc.c:1651  */
    break;

  case 44:
#line 416 "sintactico.yy" /* yacc.c:1651  */
    {
              nodo *nuevo = new nodo("darar","darar",(yylsp[-4]).first_line, (yylsp[-4]).first_column);
              nuevo->add(*(yyvsp[-4].nodito));
              nodo *nodoid =  new nodo("id",(yyvsp[-3].TEXT),(yylsp[-3]).first_line,(yylsp[-3]).first_column);
              nuevo->add(*nodoid);
              nuevo->add(*(yyvsp[-2].nodito));
              nuevo->add(*(yyvsp[0].nodito));
              (yyval.nodito) = nuevo;}
#line 1967 "parser.cpp" /* yacc.c:1651  */
    break;

  case 45:
#line 427 "sintactico.yy" /* yacc.c:1651  */
    {(yyval.nodito)->add(*(yyvsp[-1].nodito));}
#line 1973 "parser.cpp" /* yacc.c:1651  */
    break;

  case 46:
#line 428 "sintactico.yy" /* yacc.c:1651  */
    {  (yyval.nodito)= new nodo("dim","dim",(yylsp[-2]).first_line, (yylsp[-2]).first_column); (yyval.nodito)->add(*(yyvsp[-1].nodito));}
#line 1979 "parser.cpp" /* yacc.c:1651  */
    break;

  case 47:
#line 433 "sintactico.yy" /* yacc.c:1651  */
    {
          (yyval.nodito) = (yyvsp[-1].nodito);
         }
#line 1987 "parser.cpp" /* yacc.c:1651  */
    break;

  case 48:
#line 439 "sintactico.yy" /* yacc.c:1651  */
    {
             (yyval.nodito)=(yyvsp[-4].nodito);
             for (int i= 0 ; i< (yyvsp[-1].nodito)->hijos.count(); i++)
             {
                 nodo nod = (yyvsp[-1].nodito)->hijos[i];
                 (yyval.nodito)->add(nod);
             }
         }
#line 2000 "parser.cpp" /* yacc.c:1651  */
    break;

  case 49:
#line 448 "sintactico.yy" /* yacc.c:1651  */
    {
             (yyval.nodito) = new nodo("lvalores","lvalores",(yylsp[-2]).first_line, (yylsp[-1]).first_column);
             for (int i =0 ; i< (yyvsp[-1].nodito)->hijos.count(); i++)
             {
                 nodo nod =  (yyvsp[-1].nodito)->hijos[i];
                 (yyval.nodito)->add(nod);
             }
         }
#line 2013 "parser.cpp" /* yacc.c:1651  */
    break;

  case 50:
#line 458 "sintactico.yy" /* yacc.c:1651  */
    {(yyval.nodito)=(yyvsp[-2].nodito); (yyval.nodito)->add(*(yyvsp[0].nodito));}
#line 2019 "parser.cpp" /* yacc.c:1651  */
    break;

  case 51:
#line 459 "sintactico.yy" /* yacc.c:1651  */
    {(yyval.nodito)= new nodo("valores","valores",(yylsp[0]).first_line,(yylsp[0]).first_column); (yyval.nodito)->add(*(yyvsp[0].nodito));}
#line 2025 "parser.cpp" /* yacc.c:1651  */
    break;

  case 52:
#line 464 "sintactico.yy" /* yacc.c:1651  */
    {(yyval.nodito)=(yyvsp[0].nodito);}
#line 2031 "parser.cpp" /* yacc.c:1651  */
    break;

  case 53:
#line 465 "sintactico.yy" /* yacc.c:1651  */
    {(yyval.nodito)=(yyvsp[0].nodito);}
#line 2037 "parser.cpp" /* yacc.c:1651  */
    break;

  case 54:
#line 468 "sintactico.yy" /* yacc.c:1651  */
    {(yyval.nodito)= new nodo("tipo",(yyvsp[0].TEXT),(yylsp[0]).first_line,(yylsp[0]).first_column);}
#line 2043 "parser.cpp" /* yacc.c:1651  */
    break;

  case 55:
#line 469 "sintactico.yy" /* yacc.c:1651  */
    {(yyval.nodito)= new nodo("tipo",(yyvsp[0].TEXT),(yylsp[0]).first_line,(yylsp[0]).first_column);}
#line 2049 "parser.cpp" /* yacc.c:1651  */
    break;

  case 56:
#line 470 "sintactico.yy" /* yacc.c:1651  */
    {(yyval.nodito)= new nodo("tipo",(yyvsp[0].TEXT),(yylsp[0]).first_line,(yylsp[0]).first_column);}
#line 2055 "parser.cpp" /* yacc.c:1651  */
    break;

  case 57:
#line 471 "sintactico.yy" /* yacc.c:1651  */
    {(yyval.nodito)= new nodo("tipo",(yyvsp[0].TEXT),(yylsp[0]).first_line,(yylsp[0]).first_column);}
#line 2061 "parser.cpp" /* yacc.c:1651  */
    break;

  case 58:
#line 472 "sintactico.yy" /* yacc.c:1651  */
    {(yyval.nodito)= new nodo("tipo",(yyvsp[0].TEXT),(yylsp[0]).first_line,(yylsp[0]).first_column);}
#line 2067 "parser.cpp" /* yacc.c:1651  */
    break;

  case 59:
#line 479 "sintactico.yy" /* yacc.c:1651  */
    {
             (yyval.nodito) = new nodo("ss","ss",(yylsp[-4]).first_line, (yylsp[-4]).first_column);
             (yyval.nodito)->add(*(yyvsp[-4].nodito)); // Condicion
             (yyval.nodito)->add(*(yyvsp[-2].nodito)); // Valor verdadero
             (yyval.nodito)->add(*(yyvsp[0].nodito)); // Valor falso;
         }
#line 2078 "parser.cpp" /* yacc.c:1651  */
    break;

  case 60:
#line 487 "sintactico.yy" /* yacc.c:1651  */
    {(yyval.nodito) = new nodo("expl",(yyvsp[-1].TEXT),(yylsp[-1]).first_line,(yylsp[-1]).first_column); (yyval.nodito)->add(*(yyvsp[-2].nodito)); (yyval.nodito)->add(*(yyvsp[0].nodito));}
#line 2084 "parser.cpp" /* yacc.c:1651  */
    break;

  case 61:
#line 488 "sintactico.yy" /* yacc.c:1651  */
    {(yyval.nodito) = new nodo("expl",(yyvsp[-1].TEXT),(yylsp[-1]).first_line,(yylsp[-1]).first_column); (yyval.nodito)->add(*(yyvsp[-2].nodito)); (yyval.nodito)->add(*(yyvsp[0].nodito));}
#line 2090 "parser.cpp" /* yacc.c:1651  */
    break;

  case 62:
#line 489 "sintactico.yy" /* yacc.c:1651  */
    {(yyval.nodito) = new nodo("expl",(yyvsp[-1].TEXT),(yylsp[-1]).first_line,(yylsp[-1]).first_column); (yyval.nodito)->add(*(yyvsp[0].nodito));}
#line 2096 "parser.cpp" /* yacc.c:1651  */
    break;

  case 63:
#line 491 "sintactico.yy" /* yacc.c:1651  */
    {(yyval.nodito) =(yyvsp[0].nodito);}
#line 2102 "parser.cpp" /* yacc.c:1651  */
    break;

  case 64:
#line 494 "sintactico.yy" /* yacc.c:1651  */
    {(yyval.nodito) = new nodo("expr",(yyvsp[-1].TEXT),(yylsp[-1]).first_line,(yylsp[-1]).first_column); (yyval.nodito)->add(*(yyvsp[-2].nodito)); (yyval.nodito)->add(*(yyvsp[0].nodito));}
#line 2108 "parser.cpp" /* yacc.c:1651  */
    break;

  case 65:
#line 495 "sintactico.yy" /* yacc.c:1651  */
    {(yyval.nodito) = new nodo("expr",(yyvsp[-1].TEXT),(yylsp[-1]).first_line,(yylsp[-1]).first_column); (yyval.nodito)->add(*(yyvsp[-2].nodito)); (yyval.nodito)->add(*(yyvsp[0].nodito));}
#line 2114 "parser.cpp" /* yacc.c:1651  */
    break;

  case 66:
#line 496 "sintactico.yy" /* yacc.c:1651  */
    {(yyval.nodito) = new nodo("expr",(yyvsp[-1].TEXT),(yylsp[-1]).first_line,(yylsp[-1]).first_column); (yyval.nodito)->add(*(yyvsp[-2].nodito)); (yyval.nodito)->add(*(yyvsp[0].nodito));}
#line 2120 "parser.cpp" /* yacc.c:1651  */
    break;

  case 67:
#line 497 "sintactico.yy" /* yacc.c:1651  */
    {(yyval.nodito) = new nodo("expr",(yyvsp[-1].TEXT),(yylsp[-1]).first_line,(yylsp[-1]).first_column); (yyval.nodito)->add(*(yyvsp[-2].nodito)); (yyval.nodito)->add(*(yyvsp[0].nodito));}
#line 2126 "parser.cpp" /* yacc.c:1651  */
    break;

  case 68:
#line 498 "sintactico.yy" /* yacc.c:1651  */
    {(yyval.nodito) = new nodo("expr",(yyvsp[-1].TEXT),(yylsp[-1]).first_line,(yylsp[-1]).first_column); (yyval.nodito)->add(*(yyvsp[-2].nodito)); (yyval.nodito)->add(*(yyvsp[0].nodito));}
#line 2132 "parser.cpp" /* yacc.c:1651  */
    break;

  case 69:
#line 499 "sintactico.yy" /* yacc.c:1651  */
    {(yyval.nodito) = new nodo("expr",(yyvsp[-1].TEXT),(yylsp[-1]).first_line,(yylsp[-1]).first_column); (yyval.nodito)->add(*(yyvsp[-2].nodito)); (yyval.nodito)->add(*(yyvsp[0].nodito));}
#line 2138 "parser.cpp" /* yacc.c:1651  */
    break;

  case 70:
#line 500 "sintactico.yy" /* yacc.c:1651  */
    {(yyval.nodito) =(yyvsp[0].nodito);}
#line 2144 "parser.cpp" /* yacc.c:1651  */
    break;

  case 71:
#line 502 "sintactico.yy" /* yacc.c:1651  */
    {nodo *nod = new nodo("expa",(yyvsp[-1].TEXT),(yylsp[-1]).first_line, (yylsp[-1]).first_column);  nod->add(*(yyvsp[-2].nodito)); nod->add(*(yyvsp[0].nodito)); (yyval.nodito)=nod;}
#line 2150 "parser.cpp" /* yacc.c:1651  */
    break;

  case 72:
#line 503 "sintactico.yy" /* yacc.c:1651  */
    {nodo *nod = new nodo("expa",(yyvsp[-1].TEXT),(yylsp[-1]).first_line, (yylsp[-1]).first_column); nod->add(*(yyvsp[-2].nodito)); nod->add(*(yyvsp[0].nodito)); (yyval.nodito)=nod;}
#line 2156 "parser.cpp" /* yacc.c:1651  */
    break;

  case 73:
#line 504 "sintactico.yy" /* yacc.c:1651  */
    {nodo *nod = new nodo("expa",(yyvsp[-1].TEXT),(yylsp[-1]).first_line, (yylsp[-1]).first_column); nod->add(*(yyvsp[-2].nodito)); nod->add(*(yyvsp[0].nodito)); (yyval.nodito)=nod;}
#line 2162 "parser.cpp" /* yacc.c:1651  */
    break;

  case 74:
#line 505 "sintactico.yy" /* yacc.c:1651  */
    {nodo *nod = new nodo("expa",(yyvsp[-1].TEXT),(yylsp[-1]).first_line, (yylsp[-1]).first_column); nod->add(*(yyvsp[-2].nodito)); nod->add(*(yyvsp[0].nodito)); (yyval.nodito)=nod;}
#line 2168 "parser.cpp" /* yacc.c:1651  */
    break;

  case 75:
#line 506 "sintactico.yy" /* yacc.c:1651  */
    { nodo *nod = new nodo("expa",(yyvsp[-1].TEXT),(yylsp[-1]).first_line, (yylsp[-1]).first_column); nod->add(*(yyvsp[-2].nodito));  nod->add(*(yyvsp[0].nodito));  (yyval.nodito)=nod ;  }
#line 2174 "parser.cpp" /* yacc.c:1651  */
    break;

  case 76:
#line 508 "sintactico.yy" /* yacc.c:1651  */
    { (yyval.nodito) = new nodo("expa",(yyvsp[-1].TEXT),(yylsp[-1]).first_line, (yylsp[-1]).first_column); (yyval.nodito)->add(*(yyvsp[0].nodito));}
#line 2180 "parser.cpp" /* yacc.c:1651  */
    break;

  case 77:
#line 509 "sintactico.yy" /* yacc.c:1651  */
    { (yyval.nodito) = new nodo("variable",(yyvsp[0].TEXT),(yylsp[0]).first_line, (yylsp[0]).first_column);}
#line 2186 "parser.cpp" /* yacc.c:1651  */
    break;

  case 78:
#line 510 "sintactico.yy" /* yacc.c:1651  */
    {(yyval.nodito) = new nodo("acceso",(yyvsp[-1].TEXT),(yylsp[-1]).first_line,(yylsp[-1]).first_column); (yyval.nodito)->hijos.append(*(yyvsp[0].nodito));}
#line 2192 "parser.cpp" /* yacc.c:1651  */
    break;

  case 79:
#line 511 "sintactico.yy" /* yacc.c:1651  */
    { (yyval.nodito) = new nodo("entero",(yyvsp[0].TEXT),(yylsp[0]).first_line, (yylsp[0]).first_column);}
#line 2198 "parser.cpp" /* yacc.c:1651  */
    break;

  case 80:
#line 512 "sintactico.yy" /* yacc.c:1651  */
    { (yyval.nodito) = new nodo("caracter",(yyvsp[0].TEXT),(yylsp[0]).first_line, (yylsp[0]).first_column);}
#line 2204 "parser.cpp" /* yacc.c:1651  */
    break;

  case 81:
#line 513 "sintactico.yy" /* yacc.c:1651  */
    { (yyval.nodito) = new nodo("caracter",(yyvsp[0].TEXT),(yylsp[0]).first_line, (yylsp[0]).first_column);}
#line 2210 "parser.cpp" /* yacc.c:1651  */
    break;

  case 82:
#line 514 "sintactico.yy" /* yacc.c:1651  */
    { (yyval.nodito) = new nodo("booleano",(yyvsp[0].TEXT),(yylsp[0]).first_line, (yylsp[0]).first_column);}
#line 2216 "parser.cpp" /* yacc.c:1651  */
    break;

  case 83:
#line 515 "sintactico.yy" /* yacc.c:1651  */
    { (yyval.nodito) = new nodo("cadena",(yyvsp[0].TEXT),(yylsp[0]).first_line, (yylsp[0]).first_column);}
#line 2222 "parser.cpp" /* yacc.c:1651  */
    break;

  case 84:
#line 516 "sintactico.yy" /* yacc.c:1651  */
    { (yyval.nodito) = new nodo("nada",(yyvsp[0].TEXT),(yylsp[0]).first_line, (yylsp[0]).first_column);}
#line 2228 "parser.cpp" /* yacc.c:1651  */
    break;

  case 85:
#line 517 "sintactico.yy" /* yacc.c:1651  */
    {(yyval.nodito) = (yyvsp[0].nodito);}
#line 2234 "parser.cpp" /* yacc.c:1651  */
    break;

  case 86:
#line 518 "sintactico.yy" /* yacc.c:1651  */
    {(yyval.nodito)=(yyvsp[-1].nodito);}
#line 2240 "parser.cpp" /* yacc.c:1651  */
    break;

  case 87:
#line 519 "sintactico.yy" /* yacc.c:1651  */
    {
                    (yyval.nodito)=(yyvsp[0].nodito);
                    nodo *nod = new nodo("id",(yyvsp[-1].TEXT),(yylsp[-1]).first_line, (yylsp[-1]).first_column);
                    (yyval.nodito)->hijos.prepend(*nod);
                    }
#line 2250 "parser.cpp" /* yacc.c:1651  */
    break;

  case 88:
#line 524 "sintactico.yy" /* yacc.c:1651  */
    {
                     (yyval.nodito)=(yyvsp[-1].nodito);
                     nodo *nod = new nodo("id",(yyvsp[-2].TEXT),(yylsp[-2]).first_line, (yylsp[-2]).first_column);
                     (yyval.nodito)->hijos.prepend(*nod);
                     }
#line 2260 "parser.cpp" /* yacc.c:1651  */
    break;

  case 89:
#line 530 "sintactico.yy" /* yacc.c:1651  */
    {
            (yyval.nodito) = new nodo("convertacadena","convertacadena",(yylsp[-3]).first_line,(yylsp[-3]).first_column);
            (yyval.nodito)->hijos.append(*(yyvsp[-1].nodito));
         }
#line 2269 "parser.cpp" /* yacc.c:1651  */
    break;

  case 90:
#line 535 "sintactico.yy" /* yacc.c:1651  */
    {
            (yyval.nodito) = new nodo("convertaentero","convertaentero",(yylsp[-3]).first_line,(yylsp[-3]).first_column);
            (yyval.nodito)->hijos.append(*(yyvsp[-1].nodito));
         }
#line 2278 "parser.cpp" /* yacc.c:1651  */
    break;

  case 91:
#line 546 "sintactico.yy" /* yacc.c:1651  */
    {nodo *nod = new nodo("aumento","++",(yylsp[0]).first_line, (yylsp[0]).first_column); nod->add(*(yyvsp[-1].nodito)); (yyval.nodito)= nod;}
#line 2284 "parser.cpp" /* yacc.c:1651  */
    break;

  case 92:
#line 547 "sintactico.yy" /* yacc.c:1651  */
    {nodo *nod = new nodo("decremento","--",(yylsp[0]).first_line, (yylsp[0]).first_column); nod->add(*(yyvsp[-1].nodito)); (yyval.nodito)= nod;}
#line 2290 "parser.cpp" /* yacc.c:1651  */
    break;

  case 93:
#line 551 "sintactico.yy" /* yacc.c:1651  */
    {
             (yyval.nodito) = (yyvsp[-2].nodito);
             nodo *nod= new nodo("id",(yyvsp[0].TEXT),(yylsp[0]).first_line, (yylsp[0]).first_column);
             (yyval.nodito)->hijos.append(*nod);
         }
#line 2300 "parser.cpp" /* yacc.c:1651  */
    break;

  case 94:
#line 557 "sintactico.yy" /* yacc.c:1651  */
    {
            (yyval.nodito) = (yyvsp[-3].nodito);
            nodo *nod= new nodo("idv",(yyvsp[-1].TEXT),(yylsp[-1]).first_line, (yylsp[-1]).first_column);
            nod->hijos.append(*(yyvsp[0].nodito));
            (yyval.nodito)->hijos.append(*nod);
         }
#line 2311 "parser.cpp" /* yacc.c:1651  */
    break;

  case 95:
#line 565 "sintactico.yy" /* yacc.c:1651  */
    {
             (yyval.nodito) = new nodo("acceso","acceso",(yylsp[-1]).first_line, (yylsp[-1]).first_column);
             nodo *nod= new nodo("id",(yyvsp[0].TEXT),(yylsp[-1]).first_line, (yylsp[-1]).first_column);
             (yyval.nodito)->hijos.append(*nod);
         }
#line 2321 "parser.cpp" /* yacc.c:1651  */
    break;

  case 96:
#line 571 "sintactico.yy" /* yacc.c:1651  */
    {
             (yyval.nodito) = new nodo("acceso","acceso",(yylsp[-2]).first_line, (yylsp[-2]).first_column);
             nodo *nod= new nodo("idv",(yyvsp[-1].TEXT),(yylsp[-1]).first_line, (yylsp[-1]).first_column);
             nod->hijos.append(*(yyvsp[0].nodito));
             (yyval.nodito)->hijos.append(*nod);
         }
#line 2332 "parser.cpp" /* yacc.c:1651  */
    break;


#line 2336 "parser.cpp" /* yacc.c:1651  */
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
#line 622 "sintactico.yy" /* yacc.c:1910  */
