#ifndef TOKEN_H
#define TOKEN_H

/**	
 * 	Enum token_type
 *
 *	-- estrutura dos tokens --
 *
 *	<id>	   ::= <letra> { <letra> | <digito> }*
 *	<integer>  ::= <digito>+
 *	<real>     ::= <integer>.<integer>
 *	<string>   ::= <id>
 *	<op_rel>   ::= < | > | <= | >= | = | <> 
 *	<op_bool>  ::= + | - | * | /
 *	<special>  ::= . | , | ; | ) | ( | :=
 *	<res_word> ::= begin | end | if | then | else | while | do |until | repeat | integer | real | all | and | or  | string | Programa
 **/

enum token_type 
{
	ID,
	INTEGER,
	REAL,
	STRING,
	OP_REL,
	OP_BOOL,
	SPECIAL,
	RES_WORD
};

/**
 *	Estrutura token
 *
 *	id   : identificador do tipo de token
 *	lexem: lexema associado, se existente
 *	value: valor associado, se existente
 *	r    : linha
 *	c    : coluna
 **/
 
typedef struct token
{
	int id;

	string lexem,
	       value;

	int r, 
	    c;
} token;

#endif
