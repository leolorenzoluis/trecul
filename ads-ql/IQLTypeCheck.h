/** \file
 *  This C header file was generated by $ANTLR version 3.2 Sep 23, 2009 12:02:23
 *
 *     -  From the grammar source file : IQLTypeCheck.g
 *     -                            On : 2012-04-10 13:49:30
 *     -           for the tree parser : IQLTypeCheckTreeParser *
 * Editing it, at least manually, is not wise. 
 *
 * C language generator and runtime by Jim Idle, jimi|hereisanat|idle|dotgoeshere|ws.
 *
 *
 * The tree parser IQLTypeCheck has the callable functions (rules) shown below,
 * which will invoke the code for the associated rule in the source grammar
 * assuming that the input stream is pointing to a token/text stream that could begin
 * this rule.
 * 
 * For instance if you call the first (topmost) rule in a parser grammar, you will
 * get the results of a full parse, but calling a rule half way through the grammar will
 * allow you to pass part of a full token stream to the parser, such as for syntax checking
 * in editors and so on.
 *
 * The parser entry points are called indirectly (by function pointer to function) via
 * a parser context typedef pIQLTypeCheck, which is returned from a call to IQLTypeCheckNew().
 *
 * The methods in pIQLTypeCheck are  as follows:
 *
 *  - void      pIQLTypeCheck->graph(pIQLTypeCheck)
 *  - void      pIQLTypeCheck->node(pIQLTypeCheck)
 *  - void      pIQLTypeCheck->nodeParam(pIQLTypeCheck)
 *  - void      pIQLTypeCheck->edge(pIQLTypeCheck)
 *  - void      pIQLTypeCheck->recordFormat(pIQLTypeCheck)
 *  - void      pIQLTypeCheck->fieldFormat(pIQLTypeCheck)
 *  - IQLFieldTypeRef      pIQLTypeCheck->singleExpression(pIQLTypeCheck)
 *  - void      pIQLTypeCheck->declareStatement(pIQLTypeCheck)
 *  - IQLFieldTypeRef      pIQLTypeCheck->returnExpression(pIQLTypeCheck)
 *  - void      pIQLTypeCheck->recordConstructor(pIQLTypeCheck)
 *  - void      pIQLTypeCheck->fieldConstructor(pIQLTypeCheck)
 *  - pANTLR3_STRING      pIQLTypeCheck->localVarOrId(pIQLTypeCheck)
 *  - void      pIQLTypeCheck->statement(pIQLTypeCheck)
 *  - void      pIQLTypeCheck->variableDeclaration(pIQLTypeCheck)
 *  - void      pIQLTypeCheck->setStatement(pIQLTypeCheck)
 *  - IQLFieldTypeRef      pIQLTypeCheck->variableReference(pIQLTypeCheck)
 *  - void      pIQLTypeCheck->switchStatement(pIQLTypeCheck)
 *  - void      pIQLTypeCheck->switchBlock(pIQLTypeCheck)
 *  - void      pIQLTypeCheck->printStatement(pIQLTypeCheck)
 *  - void      pIQLTypeCheck->ifStatement(pIQLTypeCheck)
 *  - void      pIQLTypeCheck->statementBlock(pIQLTypeCheck)
 *  - void      pIQLTypeCheck->whileStatement(pIQLTypeCheck)
 *  - IQLFieldTypeRef      pIQLTypeCheck->builtInType(pIQLTypeCheck)
 *  - int      pIQLTypeCheck->typeNullability(pIQLTypeCheck)
 *  - IQLTypeCheck_expression_return      pIQLTypeCheck->expression(pIQLTypeCheck)
 *  - void      pIQLTypeCheck->whenExpression(pIQLTypeCheck)
 *  - void      pIQLTypeCheck->elseExpression(pIQLTypeCheck)
 *
 * The return type for any particular rule is of course determined by the source
 * grammar file.
 */
// [The "BSD licence"]
// Copyright (c) 2005-2009 Jim Idle, Temporal Wave LLC
// http://www.temporal-wave.com
// http://www.linkedin.com/in/jimidle
//
// All rights reserved.
//
// Redistribution and use in source and binary forms, with or without
// modification, are permitted provided that the following conditions
// are met:
// 1. Redistributions of source code must retain the above copyright
//    notice, this list of conditions and the following disclaimer.
// 2. Redistributions in binary form must reproduce the above copyright
//    notice, this list of conditions and the following disclaimer in the
//    documentation and/or other materials provided with the distribution.
// 3. The name of the author may not be used to endorse or promote products
//    derived from this software without specific prior written permission.
//
// THIS SOFTWARE IS PROVIDED BY THE AUTHOR ``AS IS'' AND ANY EXPRESS OR
// IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES
// OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE DISCLAIMED.
// IN NO EVENT SHALL THE AUTHOR BE LIABLE FOR ANY DIRECT, INDIRECT,
// INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT
// NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE,
// DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY
// THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
// (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF
// THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.

#ifndef	_IQLTypeCheck_H
#define _IQLTypeCheck_H
/* =============================================================================
 * Standard antlr3 C runtime definitions
 */
#include    <antlr3.h>

/* End of standard antlr 3 runtime definitions
 * =============================================================================
 */
 
#ifdef __cplusplus
extern "C" {
#endif

// Forward declare the context typedef so that we can use it before it is
// properly defined. Delegators and delegates (from import statements) are
// interdependent and their context structures contain pointers to each other
// C only allows such things to be declared if you pre-declare the typedef.
//
typedef struct IQLTypeCheck_Ctx_struct IQLTypeCheck, * pIQLTypeCheck;



#include "LLVMGen.h"


#ifdef	ANTLR3_WINDOWS
// Disable: Unreferenced parameter,							- Rules with parameters that are not used
//          constant conditional,							- ANTLR realizes that a prediction is always true (synpred usually)
//          initialized but unused variable					- tree rewrite variables declared but not needed
//          Unreferenced local variable						- lexer rule declares but does not always use _type
//          potentially unitialized variable used			- retval always returned from a rule 
//			unreferenced local function has been removed	- susually getTokenNames or freeScope, they can go without warnigns
//
// These are only really displayed at warning level /W4 but that is the code ideal I am aiming at
// and the codegen must generate some of these warnings by necessity, apart from 4100, which is
// usually generated when a parser rule is given a parameter that it does not use. Mostly though
// this is a matter of orthogonality hence I disable that one.
//
#pragma warning( disable : 4100 )
#pragma warning( disable : 4101 )
#pragma warning( disable : 4127 )
#pragma warning( disable : 4189 )
#pragma warning( disable : 4505 )
#pragma warning( disable : 4701 )
#endif
typedef struct IQLTypeCheck_expression_return_struct
{
    pANTLR3_BASE_TREE       start;
    pANTLR3_BASE_TREE       stop;   
    pANTLR3_STRING name;
    IQLFieldTypeRef ty;
}
    IQLTypeCheck_expression_return;



/** Context tracking structure for IQLTypeCheck
 */
struct IQLTypeCheck_Ctx_struct
{
    /** Built in ANTLR3 context tracker contains all the generic elements
     *  required for context tracking.
     */
    pANTLR3_TREE_PARSER	    pTreeParser;


     void (*graph)	(struct IQLTypeCheck_Ctx_struct * ctx, IQLGraphContextRef ctxt);
     void (*node)	(struct IQLTypeCheck_Ctx_struct * ctx, IQLGraphContextRef ctxt);
     void (*nodeParam)	(struct IQLTypeCheck_Ctx_struct * ctx, IQLGraphContextRef ctxt);
     void (*edge)	(struct IQLTypeCheck_Ctx_struct * ctx, IQLGraphContextRef ctxt);
     void (*recordFormat)	(struct IQLTypeCheck_Ctx_struct * ctx, IQLRecordTypeContextRef ctxt, IQLTypeCheckContextRef tyCtxt);
     void (*fieldFormat)	(struct IQLTypeCheck_Ctx_struct * ctx, IQLRecordTypeContextRef ctxt, IQLTypeCheckContextRef tyCtxt);
     IQLFieldTypeRef (*singleExpression)	(struct IQLTypeCheck_Ctx_struct * ctx, IQLTypeCheckContextRef ctxt);
     void (*declareStatement)	(struct IQLTypeCheck_Ctx_struct * ctx, IQLTypeCheckContextRef ctxt);
     IQLFieldTypeRef (*returnExpression)	(struct IQLTypeCheck_Ctx_struct * ctx, IQLTypeCheckContextRef ctxt);
     void (*recordConstructor)	(struct IQLTypeCheck_Ctx_struct * ctx, IQLTypeCheckContextRef ctxt);
     void (*fieldConstructor)	(struct IQLTypeCheck_Ctx_struct * ctx, IQLTypeCheckContextRef ctxt);
     pANTLR3_STRING (*localVarOrId)	(struct IQLTypeCheck_Ctx_struct * ctx);
     void (*statement)	(struct IQLTypeCheck_Ctx_struct * ctx, IQLTypeCheckContextRef ctxt);
     void (*variableDeclaration)	(struct IQLTypeCheck_Ctx_struct * ctx, IQLTypeCheckContextRef ctxt);
     void (*setStatement)	(struct IQLTypeCheck_Ctx_struct * ctx, IQLTypeCheckContextRef ctxt);
     IQLFieldTypeRef (*variableReference)	(struct IQLTypeCheck_Ctx_struct * ctx, IQLTypeCheckContextRef ctxt);
     void (*switchStatement)	(struct IQLTypeCheck_Ctx_struct * ctx, IQLTypeCheckContextRef ctxt);
     void (*switchBlock)	(struct IQLTypeCheck_Ctx_struct * ctx, IQLTypeCheckContextRef ctxt);
     void (*printStatement)	(struct IQLTypeCheck_Ctx_struct * ctx, IQLTypeCheckContextRef ctxt);
     void (*ifStatement)	(struct IQLTypeCheck_Ctx_struct * ctx, IQLTypeCheckContextRef ctxt);
     void (*statementBlock)	(struct IQLTypeCheck_Ctx_struct * ctx, IQLTypeCheckContextRef ctxt);
     void (*whileStatement)	(struct IQLTypeCheck_Ctx_struct * ctx, IQLTypeCheckContextRef ctxt);
     IQLFieldTypeRef (*builtInType)	(struct IQLTypeCheck_Ctx_struct * ctx, IQLTypeCheckContextRef ctxt);
     int (*typeNullability)	(struct IQLTypeCheck_Ctx_struct * ctx);
     IQLTypeCheck_expression_return (*expression)	(struct IQLTypeCheck_Ctx_struct * ctx, IQLTypeCheckContextRef ctxt);
     void (*whenExpression)	(struct IQLTypeCheck_Ctx_struct * ctx, IQLTypeCheckContextRef ctxt);
     void (*elseExpression)	(struct IQLTypeCheck_Ctx_struct * ctx, IQLTypeCheckContextRef ctxt);
    // Delegated rules
    const char * (*getGrammarFileName)();
    void	    (*free)   (struct IQLTypeCheck_Ctx_struct * ctx);
        
};

// Function protoypes for the constructor functions that external translation units
// such as delegators and delegates may wish to call.
//
ANTLR3_API pIQLTypeCheck IQLTypeCheckNew         (pANTLR3_COMMON_TREE_NODE_STREAM instream);
ANTLR3_API pIQLTypeCheck IQLTypeCheckNewSSD      (pANTLR3_COMMON_TREE_NODE_STREAM instream, pANTLR3_RECOGNIZER_SHARED_STATE state);

/** Symbolic definitions of all the tokens that the tree parser will work with.
 * \{
 *
 * Antlr will define EOF, but we can't use that as it it is too common in
 * in C header files and that would be confusing. There is no way to filter this out at the moment
 * so we just undef it here for now. That isn't the value we get back from C recognizers
 * anyway. We are looking for ANTLR3_TOKEN_EOF.
 */
#ifdef	EOF
#undef	EOF
#endif
#ifdef	Tokens
#undef	Tokens
#endif 
#define TK_AS      13
#define TK_ELSE      43
#define EXPONENT      106
#define FLOAT_SUFFIX      107
#define TK_IN      82
#define TK_JOIN      86
#define TK_IF      42
#define HEX_INTEGER_LITERAL      58
#define TK_DESC      75
#define DOUBLE_QUOTED_STRING_LITERAL      11
#define TK_LIKE      48
#define TK_INTO      85
#define TK_SUM      50
#define EOF      -1
#define TK_IS      47
#define TK_RETURNS      18
#define TK_NOT      35
#define STRING_LITERAL      57
#define TK_WITH      97
#define TK_ANY      67
#define FLOATING_POINT_LITERAL      59
#define BIGINT_SUFFIX      105
#define TK_HAVING      81
#define TK_BEGIN      38
#define TK_ORDER      90
#define TK_PRECISION      26
#define TK_FROM      78
#define TK_SWITCH      37
#define TK_ON      89
#define TK_OR      45
#define TK_TRUE      62
#define TK_MAX      51
#define ARRAY      8
#define TK_BREAK      21
#define TK_COUNT      73
#define TK_KEY      87
#define OCTAL_ESCAPE      100
#define TK_BETWEEN      70
#define TK_UNION      95
#define T__126      126
#define T__125      125
#define T__128      128
#define T__127      127
#define WS      102
#define T__129      129
#define TK_EXISTS      77
#define TK_LEFT      88
#define TK_WHEN      53
#define SL_COMMENT      104
#define TK_GROUP      80
#define TK_CAST      56
#define DECIMAL_BIGINT_LITERAL      7
#define TK_RIGHT      92
#define TK_CREATE      15
#define DECIMAL_INTEGER_LITERAL      10
#define T__130      130
#define TK_NULL      34
#define T__131      131
#define DECIMAL_LITERAL      60
#define T__132      132
#define T__133      133
#define T__134      134
#define TK_BOOLEAN      31
#define TK_WHERE      96
#define T__118      118
#define T__119      119
#define TK_FUNCTION      17
#define T__116      116
#define T__117      117
#define T__114      114
#define T__115      115
#define T__124      124
#define T__123      123
#define TK_END      39
#define T__122      122
#define TK_INTERVAL      55
#define T__121      121
#define T__120      120
#define LITERAL_CAST      5
#define TK_SELECT      93
#define ID      9
#define QUOTED_ID      14
#define TK_CHAR      27
#define ML_COMMENT      103
#define ESCAPE_SEQUENCE      98
#define TK_ASC      68
#define UNICODE_ESCAPE      99
#define TK_NVARCHAR      29
#define TK_WHILE      44
#define T__108      108
#define T__109      109
#define TK_FALSE      63
#define T__111      111
#define T__110      110
#define T__113      113
#define T__112      112
#define TK_FULL      79
#define TK_DOUBLE      25
#define TK_AND      46
#define TK_COALESCE      72
#define TK_AVG      69
#define TK_INNER      84
#define TK_INTEGER      24
#define TK_ALTER      66
#define TK_RAISERROR      23
#define TK_THEN      54
#define TK_PROCEDURE      16
#define HEX_DIGIT      101
#define TK_CROSS      74
#define DATETIME_LITERAL      6
#define TK_VARCHAR      28
#define TK_MIN      52
#define TK_INDEX      83
#define TK_RLIKE      49
#define WSTRING_LITERAL      61
#define TK_DATETIME      32
#define TK_RETURN      20
#define TK_ALL      65
#define TK_OUTER      91
#define TK_BIGINT      33
#define CASE_NO_ELSE      4
#define TK_DISTINCT      76
#define TK_SOME      94
#define TK_PRINT      41
#define TK_CONTINUE      22
#define TK_DECLARE      12
#define TK_BY      71
#define TK_OUTPUT      19
#define TK_DECIMAL      30
#define TK_SET      36
#define TK_ADD      64
#define TK_CASE      40
#ifdef	EOF
#undef	EOF
#define	EOF	ANTLR3_TOKEN_EOF
#endif

#ifndef TOKENSOURCE
#define TOKENSOURCE(lxr) lxr->pLexer->rec->state->tokSource
#endif

/* End of token definitions for IQLTypeCheck
 * =============================================================================
 */
/** \} */

#ifdef __cplusplus
}
#endif

#endif

/* END - Note:Keep extra line feed to satisfy UNIX systems */