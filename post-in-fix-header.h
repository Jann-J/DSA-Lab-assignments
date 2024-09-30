typedef struct token{
	unsigned int type; //int->1 ; operator->0
	typedef union data{
		int num;
		char op;
	}data;
}token;
