#define N_SCALAR(cast,type,parser) 
#define N_FIELD(name,inner)
#define N_CONSTANT(inner)
#define N_ARRAY(inner,combinator)
#define NX_LENGTHVALUE_HACK(lengthp,elemp)
#define N_STRUCT(inner) 
#define N_OPTIONAL(inner)
#define N_DEFPARSER(name,inner) struct name; HParser *hammer_##name(); void print_ ## name(const struct name *val, FILE *out,int indent);
#define N_PARSER(name)
#define N_REF(name) *
#define N_CHOICE(inner) 
#define N_OPTION(name,inner) 