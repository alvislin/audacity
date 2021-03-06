/* seqext.h -- header for seq extensions for xlisp */


void seqext_init();
void seqext_symbols();
boolean seqp();

extern xtype_desc seq_desc;
extern LVAL s_seq;

#define cvptrbool(v) ((LVAL) ((v) ? s_true : NIL))
#define cvseq(v)  ((LVAL) ((v) ? cvextern(seq_desc, (void *)(v)) : NIL))
#define xlgaseq() (testarg(typearg(seqp)))
#define getseq(x) ((seq_type) getinst(x))
