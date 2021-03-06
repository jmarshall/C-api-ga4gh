/*
These structures file it supposed to be created 
automatically from schemas on the repository.
*/

typedef struct {
	char** alternateBases;
	//wrong type
	int calls;
	int created;
	long end;
	char * id;
	//wrong type
	char** info_key;
	char** info_value;
	char** names;
	char* referenceBases;
	char* referenceName;
	long start;
	int updated;
	char * variantSetId;
} Variant;

typedef struct {
    char* name;
	char* referenceName;
	long int start;
	long int end;
	int pageSize;
	char* pageToken;
	char** callSetIds;
	char** variantSetIds;
}search_variant_request;

typedef struct {
	char **variantSetIds;
	char* name;
	int pageSize;
	char* pageToken;
}search_callSets_request;


typedef struct {
	char** readGroupIds;
	char* referenceName;
	char* referenceId;
	long int start;
	long int end;
	int pageSize;
	char* pageToken;
}search_reads_request;