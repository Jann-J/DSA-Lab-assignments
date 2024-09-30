#include"post-in-fix-header.h"
#include<stdio.h>
#define OPERNAD 100
#define OPERATOR 200
#define INVALID 300

/*pre-conditions:
*	infix[] is array of chars
*	int limit is size of array infix[]
*post-conditions:
*	infix expression is input in infix[]
*	length of the expression string is returned
*/
int readline(char infix[], int limit){
	int len = 0;
	while((ch = getchar()) != '\n' && len < limit - 1)
		infix[len++] = ch;
	infix[len] = '\0';
	return len;
}

char tokenise(char infix[], int length){
	
}

int is_whitespace(char ch){
	return (ch == ' ' || ch == '\n' || ch == '\t');
}

int is_operator(char ch){
	return (ch == '+' || ch == '-' || ch == '*' || ch == '/' || ch == '(' || ch == ')');
}

//check for character input like a
token getnext(char infix[]){
	token t;
	while(*infix){
		if(is_whitespace(*infix))//skips whitespace
			infix++;
		else{
			if(is_operator(*infix)){//returns operator
				t->data->op = *infix;
				t->type = OPERATOR;
				return t;
			}
			
		}
	}
}

postfix(char infix[], int length){
	token t;
	int operands[32];
	while(){
		t = getnext(infix);
		if(t.type == OPERAND){
			operands[i++] = t.data.num;
		}
	}
}


