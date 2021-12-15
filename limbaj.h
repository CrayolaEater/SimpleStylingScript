typedef struct var_info {
	int scope;
	char* value;
	char* identifier;
	char* type;
	bool isArray;
	bool isConst;
} var_info;

typedef struct param
{
	char* type;
	char* identifier;
	struct param* nextParam;
}param;

typedef struct meth_info {
	char* type;
	char* identifier;
	param* parameters;
	int nrParametrii;
}meth_info;