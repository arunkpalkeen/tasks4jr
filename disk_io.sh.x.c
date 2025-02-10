#if 0
	shc Version 4.0.3, Generic Shell Script Compiler
	GNU GPL Version 3 Md Jahidul Hamid <jahidulhamid@yahoo.com>

	shc -f disk_io.sh 
#endif

static  char data [] = 
#define      inlo_z	3
#define      inlo	((&data[0]))
	"\255\131\222"
#define      tst2_z	19
#define      tst2	((&data[6]))
	"\066\073\344\225\131\112\143\336\303\225\030\046\125\017\014\265"
	"\305\151\267\072\067\173"
#define      date_z	1
#define      date	((&data[25]))
	"\116"
#define      rlax_z	1
#define      rlax	((&data[26]))
	"\213"
#define      msg1_z	65
#define      msg1	((&data[33]))
	"\130\016\161\252\376\130\162\252\065\335\213\256\154\345\050\323"
	"\143\205\160\274\052\363\021\331\052\026\101\075\145\324\373\111"
	"\112\371\005\004\324\350\170\174\070\276\206\104\267\332\314\202"
	"\110\237\321\316\302\122\047\213\240\035\046\305\053\325\265\171"
	"\144\010\336\201\271\072\370\231\330\165"
#define      chk2_z	19
#define      chk2	((&data[103]))
	"\300\350\140\125\226\034\375\370\077\010\175\315\132\075\211\273"
	"\215\125\335\072\114\024\077\324"
#define      opts_z	1
#define      opts	((&data[125]))
	"\053"
#define      pswd_z	256
#define      pswd	((&data[145]))
	"\340\020\361\341\115\011\101\176\142\117\357\015\115\110\247\046"
	"\276\206\274\346\076\150\035\072\054\151\167\243\112\124\164\161"
	"\164\351\015\153\151\377\163\365\276\032\150\373\227\175\136\054"
	"\060\232\023\157\002\061\251\056\232\041\322\344\166\107\125\352"
	"\060\143\125\231\142\311\217\041\344\367\034\173\165\173\250\246"
	"\025\273\025\030\354\276\107\206\340\031\153\126\141\301\100\221"
	"\044\226\053\207\137\272\250\103\262\305\277\047\100\147\316\126"
	"\042\343\157\016\242\266\225\202\320\000\330\061\301\031\303\346"
	"\257\356\155\017\250\025\123\133\333\022\203\033\171\121\162\234"
	"\064\341\253\327\227\101\132\147\101\063\231\003\114\134\352\374"
	"\112\127\014\363\155\137\117\110\162\322\144\354\043\327\210\130"
	"\270\064\060\120\165\212\270\267\275\121\273\011\256\245\006\370"
	"\375\022\354\153\162\073\263\344\015\030\320\061\357\131\212\250"
	"\216\272\371\003\104\261\273\001\003\166\013\261\034\022\252\031"
	"\044\227\204\227\322\070\173\340\121\114\022\101\246\234\351\065"
	"\126\343\070\233\225\364\235\231\152\251\112\207\273\365\240\340"
	"\214\045\167\137\135\363\100\257\100\122\360\347\356\332\034\105"
	"\275\125\341\211\106\245\235\206\172\146\355\205\152\071\275\113"
	"\112"
#define      text_z	1380
#define      text	((&data[476]))
	"\270\156\026\033\275\005\050\013\116\317\062\014\125\356\225\234"
	"\223\063\042\015\231\020\223\004\112\120\117\224\377\175\054\267"
	"\353\102\323\251\110\373\265\227\313\347\244\041\325\072\275\151"
	"\155\340\167\007\361\012\014\073\133\134\320\132\331\322\340\076"
	"\051\320\274\133\156\211\127\256\177\164\105\214\241\304\011\141"
	"\036\051\101\324\325\122\167\103\063\102\136\077\301\050\043\013"
	"\146\154\072\353\061\037\216\326\065\233\312\341\346\371\166\300"
	"\217\010\263\314\355\202\027\023\301\361\031\231\214\263\067\135"
	"\332\013\116\312\000\055\167\332\007\255\332\056\336\007\275\154"
	"\304\005\340\271\033\147\114\263\214\242\016\232\016\055\117\311"
	"\227\230\344\060\014\157\177\253\373\334\067\157\251\052\316\045"
	"\017\374\304\137\105\332\372\072\273\141\142\267\172\350\114\010"
	"\366\030\272\232\226\160\162\004\153\204\201\170\070\311\165\301"
	"\256\047\361\144\233\065\113\150\036\360\373\231\165\155\035\176"
	"\065\350\115\017\335\341\221\361\153\245\144\310\126\345\377\141"
	"\005\221\025\024\204\315\310\033\372\272\127\206\337\015\316\247"
	"\377\065\242\041\161\375\217\370\164\016\122\234\015\076\051\316"
	"\262\021\307\341\000\266\141\222\035\144\261\324\021\274\265\077"
	"\237\360\037\373\201\244\153\355\210\261\251\067\260\167\315\235"
	"\250\272\002\006\137\364\152\067\210\133\220\121\212\270\352\050"
	"\172\100\113\253\210\252\230\050\261\132\035\045\367\335\130\173"
	"\076\267\251\250\314\054\246\160\166\257\272\166\060\200\352\047"
	"\163\265\324\160\032\372\266\333\344\113\044\337\213\215\350\214"
	"\271\106\220\240\054\001\004\053\165\260\311\116\077\305\141\025"
	"\245\056\030\134\246\103\333\104\213\215\037\062\326\336\305\252"
	"\277\144\205\066\034\164\117\033\325\332\003\314\156\007\235\221"
	"\033\041\223\144\060\344\033\262\374\116\302\321\151\246\250\135"
	"\053\314\254\226\110\050\217\217\217\361\326\355\235\247\160\351"
	"\367\254\101\353\024\256\363\007\377\242\056\270\237\036\215\134"
	"\024\027\127\230\233\133\044\102\064\260\154\017\053\140\002\241"
	"\031\216\126\077\144\132\315\156\254\213\301\224\120\272\055\177"
	"\004\356\217\067\205\202\202\301\313\113\224\020\015\067\242\271"
	"\073\210\300\203\105\201\240\137\231\052\372\061\374\036\320\245"
	"\032\162\212\047\336\016\331\070\213\361\025\201\002\347\207\024"
	"\022\154\163\036\171\372\251\251\000\264\144\121\107\277\060\377"
	"\267\376\307\221\176\021\211\110\220\336\327\052\275\064\324\346"
	"\247\106\152\225\350\104\261\077\323\246\217\360\305\227\325\240"
	"\151\255\347\011\300\131\151\142\101\140\222\154\243\073\326\017"
	"\056\140\073\221\100\357\125\242\124\317\211\114\256\113\031\153"
	"\256\203\341\005\146\061\046\072\060\003\216\050\347\210\277\271"
	"\045\052\303\076\026\210\077\264\326\050\120\117\305\261\074\217"
	"\330\172\277\011\323\156\247\075\007\216\052\262\271\135\020\030"
	"\122\365\143\352\360\041\053\030\032\270\036\052\143\224\107\331"
	"\357\320\054\057\063\314\045\017\233\165\127\166\243\277\144\267"
	"\251\147\246\223\124\025\002\225\114\034\152\246\337\144\162\327"
	"\057\134\124\341\163\204\162\027\272\214\032\322\270\334\303\132"
	"\150\263\253\051\234\366\262\352\327\120\250\257\305\037\214\221"
	"\142\061\247\302\234\357\160\365\053\015\247\356\204\002\005\160"
	"\241\177\353\376\201\170\010\372\061\271\215\067\366\243\120\113"
	"\010\076\267\250\152\124\031\211\003\276\062\250\362\301\063\276"
	"\145\033\140\067\323\346\205\322\272\155\104\245\126\103\211\166"
	"\004\234\303\007\316\371\126\324\067\115\301\122\245\240\356\157"
	"\354\051\200\360\211\147\225\327\230\223\060\351\011\143\364\211"
	"\166\214\263\144\126\014\235\354\031\030\102\175\306\122\261\347"
	"\122\147\062\131\224\045\232\324\016\103\061\350\032\231\116\120"
	"\127\324\130\121\253\326\116\313\136\323\255\167\105\130\271\265"
	"\362\124\241\147\042\161\067\037\322\152\233\217\324\234\356\351"
	"\322\062\377\272\112\152\162\010\064\264\370\227\346\151\364\134"
	"\047\015\155\234\011\352\140\253\123\250\252\134\104\042\215\134"
	"\262\224\241\215\335\115\011\013\374\030\225\163\316\000\036\163"
	"\353\312\003\226\146\266\277\225\036\350\047\040\113\337\273\124"
	"\055\263\331\071\245\153\110\311\120\150\122\020\220\272\304\125"
	"\122\075\313\263\117\163\364\202\063\345\076\201\056\315\020\321"
	"\076\041\167\022\310\171\006\372\132\357\273\322\162\307\211\276"
	"\042\215\001\234\025\167\177\273\213\336\032\370\260\101\060\047"
	"\157\312\246\003\347\256\224\325\103\345\076\031\332\313\260\164"
	"\014\132\140\344\140\106\031\364\050\173\204\245\175\315\127\060"
	"\165\140\023\074\154\230\145\166\224\376\174\126\172\220\317\347"
	"\035\366\120\014\332\147\051\251\033\302\320\365\056\001\051\025"
	"\065\226\103\025\076\106\104\167\007\242\236\147\212\234\254\317"
	"\147\042\243\235\143\167\135\055\016\046\002\131\245\244\002\057"
	"\072\106\230\050\040\171\210\123\223\323\101\026\002\234\235\066"
	"\040\002\010\364\337\373\326\030\162\010\314\271\143\212\015\141"
	"\175\141\211\046\306\013\376\267\262\001\171\003\120\076\107\064"
	"\356\255\317\136\072\156\142\016\176\067\042\355\222\105\253\364"
	"\212\153\145\253\163\121\063\277\331\143\232\310\360\224\001\026"
	"\236\275\313\005\150\143\103\146\027\243\112\064\344\305\071\361"
	"\311\306\064\174\347\216\262\027\255\343\200\132\255\251\031\130"
	"\075\144\116\243\352\137\043\376\112\033\224\113\212\262\334\007"
	"\371\074\066\265\152\335\215\340\026\010\022\067\051\036\056\070"
	"\123\055\142\032\315\252\304\164\356\006\262\224\072\314\273\034"
	"\046\344\276\011\215\230\325\030\322\141\212\244\311\275\033\042"
	"\126\200\365\014\004\345\176\344\015\045\126\033\067\167\175\357"
	"\161\300\052\205\251\123\332\166\136\137\276\312\114\153\057\025"
	"\002\255\077\147\213\165\057\126\263\150\044\057\123\355\321\260"
	"\337\216\032\365\312\037\020\270\014\367\110\312\206\267\031\350"
	"\361\120\252\155\364\123\147\341\264\047\065\077\015\002\202\031"
	"\236\306\223\220\115\066\252\065\157\150\022\265\361\013\117\217"
	"\311\355\171\122\172\067\061\010\330\246\352\172\277\070\307\320"
	"\055\113\364\176\025\055\155\042\060\336\105\027\336\145\054\117"
	"\161\375\022\305\100\345\157\211\341\044\040\254\014\305\316\341"
	"\377\213\113\155\154\302\164\135\315\201\231\050\335\152\203\267"
	"\147\226\174\247\174\353\060\135\020\121\012\034\026\330\376\025"
	"\144\111\202\321\014\367\057\332\170\310\003\126\063\206\015\232"
	"\035\211\101\231\165\162\367\205\303\002\241\331\333\237\357\077"
	"\351\161\021\366\151\100\320\342\011\323\070\074\132\106\327\167"
	"\317\030\021\105\213\011\312\116\013\154\050\346\014\027\046\366"
	"\211\070\354\362\170\275\325\202\221\016\277\353\124\226\143\044"
	"\257\165\151\072\176\064\211\211\241\261\160\256\310\227\244\121"
	"\317\221\104\110\116\032\313\340\050\212\313\174\041\057\241\320"
	"\244\012\012\043\077\223\255\341\105\035\217\015\265\063\137\205"
	"\304\244\316\023\276\231\363\347\044\277\144\105\357\005\025\224"
	"\020\040\267\117\264\144\061\372\202\300\007\070\363\147"
#define      shll_z	10
#define      shll	((&data[2063]))
	"\214\314\167\320\322\253\263\303\022\156\150\043"
#define      xecc_z	15
#define      xecc	((&data[2073]))
	"\232\045\057\263\300\144\154\140\246\220\003\374\201\227\130\262"
	"\112\200"
#define      lsto_z	1
#define      lsto	((&data[2091]))
	"\216"
#define      tst1_z	22
#define      tst1	((&data[2095]))
	"\054\306\273\164\171\114\167\252\207\053\211\121\366\151\170\375"
	"\072\376\212\177\130\214\316\062\266"
#define      chk1_z	22
#define      chk1	((&data[2119]))
	"\255\165\344\126\037\054\023\313\126\020\006\020\041\347\266\314"
	"\302\034\275\267\206\035\262\334"
#define      msg2_z	19
#define      msg2	((&data[2143]))
	"\332\141\010\001\255\360\221\014\022\072\355\070\212\133\254\305"
	"\366\340\100\171\164\344\230"/* End of data[] */;
#define      hide_z	4096
#define SETUID 0	/* Define as 1 to call setuid(0) at start of script */
#define DEBUGEXEC	0	/* Define as 1 to debug execvp calls */
#define TRACEABLE	1	/* Define as 1 to enable ptrace the executable */
#define HARDENING	0	/* Define as 1 to disable ptrace/dump the executable */
#define BUSYBOXON	0	/* Define as 1 to enable work with busybox */

#if HARDENING
static const char * shc_x[] = {
"/*",
" * Copyright 2019 - Intika <intika@librefox.org>",
" * Replace ******** with secret read from fd 21",
" * Also change arguments location of sub commands (sh script commands)",
" * gcc -Wall -fpic -shared -o shc_secret.so shc_secret.c -ldl",
" */",
"",
"#define _GNU_SOURCE /* needed to get RTLD_NEXT defined in dlfcn.h */",
"#define PLACEHOLDER \"********\"",
"#include <dlfcn.h>",
"#include <stdlib.h>",
"#include <string.h>",
"#include <unistd.h>",
"#include <stdio.h>",
"#include <signal.h>",
"",
"static char secret[128000]; //max size",
"typedef int (*pfi)(int, char **, char **);",
"static pfi real_main;",
"",
"// copy argv to new location",
"char **copyargs(int argc, char** argv){",
"    char **newargv = malloc((argc+1)*sizeof(*argv));",
"    char *from,*to;",
"    int i,len;",
"",
"    for(i = 0; i<argc; i++){",
"        from = argv[i];",
"        len = strlen(from)+1;",
"        to = malloc(len);",
"        memcpy(to,from,len);",
"        // zap old argv space",
"        memset(from,'\\0',len);",
"        newargv[i] = to;",
"        argv[i] = 0;",
"    }",
"    newargv[argc] = 0;",
"    return newargv;",
"}",
"",
"static int mymain(int argc, char** argv, char** env) {",
"    //fprintf(stderr, \"Inject main argc = %d\\n\", argc);",
"    return real_main(argc, copyargs(argc,argv), env);",
"}",
"",
"int __libc_start_main(int (*main) (int, char**, char**),",
"                      int argc,",
"                      char **argv,",
"                      void (*init) (void),",
"                      void (*fini)(void),",
"                      void (*rtld_fini)(void),",
"                      void (*stack_end)){",
"    static int (*real___libc_start_main)() = NULL;",
"    int n;",
"",
"    if (!real___libc_start_main) {",
"        real___libc_start_main = dlsym(RTLD_NEXT, \"__libc_start_main\");",
"        if (!real___libc_start_main) abort();",
"    }",
"",
"    n = read(21, secret, sizeof(secret));",
"    if (n > 0) {",
"      int i;",
"",
"    if (secret[n - 1] == '\\n') secret[--n] = '\\0';",
"    for (i = 1; i < argc; i++)",
"        if (strcmp(argv[i], PLACEHOLDER) == 0)",
"          argv[i] = secret;",
"    }",
"",
"    real_main = main;",
"",
"    return real___libc_start_main(mymain, argc, argv, init, fini, rtld_fini, stack_end);",
"}",
"",
0};
#endif /* HARDENING */

/* rtc.c */

#include <sys/stat.h>
#include <sys/types.h>

#include <errno.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <unistd.h>

/* 'Alleged RC4' */

static unsigned char stte[256], indx, jndx, kndx;

/*
 * Reset arc4 stte. 
 */
void stte_0(void)
{
	indx = jndx = kndx = 0;
	do {
		stte[indx] = indx;
	} while (++indx);
}

/*
 * Set key. Can be used more than once. 
 */
void key(void * str, int len)
{
	unsigned char tmp, * ptr = (unsigned char *)str;
	while (len > 0) {
		do {
			tmp = stte[indx];
			kndx += tmp;
			kndx += ptr[(int)indx % len];
			stte[indx] = stte[kndx];
			stte[kndx] = tmp;
		} while (++indx);
		ptr += 256;
		len -= 256;
	}
}

/*
 * Crypt data. 
 */
void arc4(void * str, int len)
{
	unsigned char tmp, * ptr = (unsigned char *)str;
	while (len > 0) {
		indx++;
		tmp = stte[indx];
		jndx += tmp;
		stte[indx] = stte[jndx];
		stte[jndx] = tmp;
		tmp += stte[indx];
		*ptr ^= stte[tmp];
		ptr++;
		len--;
	}
}

/* End of ARC4 */

#if HARDENING

#include <sys/ptrace.h>
#include <sys/wait.h>
#include <signal.h>
#include <sys/prctl.h>
#define PR_SET_PTRACER 0x59616d61

/* Seccomp Sandboxing Init */
#include <stdlib.h>
#include <stdio.h>
#include <stddef.h>
#include <string.h>
#include <unistd.h>
#include <errno.h>

#include <sys/types.h>
#include <sys/prctl.h>
#include <sys/syscall.h>
#include <sys/socket.h>

#include <linux/filter.h>
#include <linux/seccomp.h>
#include <linux/audit.h>

#define ArchField offsetof(struct seccomp_data, arch)

#define Allow(syscall) \
    BPF_JUMP(BPF_JMP+BPF_JEQ+BPF_K, SYS_##syscall, 0, 1), \
    BPF_STMT(BPF_RET+BPF_K, SECCOMP_RET_ALLOW)

struct sock_filter filter[] = {
    /* validate arch */
    BPF_STMT(BPF_LD+BPF_W+BPF_ABS, ArchField),
    BPF_JUMP( BPF_JMP+BPF_JEQ+BPF_K, AUDIT_ARCH_X86_64, 1, 0),
    BPF_STMT(BPF_RET+BPF_K, SECCOMP_RET_KILL),

    /* load syscall */
    BPF_STMT(BPF_LD+BPF_W+BPF_ABS, offsetof(struct seccomp_data, nr)),

    /* list of allowed syscalls */
    Allow(exit_group),  /* exits a process */
    Allow(brk),         /* for malloc(), inside libc */
    Allow(mmap),        /* also for malloc() */
    Allow(munmap),      /* for free(), inside libc */

    /* and if we don't match above, die */
    BPF_STMT(BPF_RET+BPF_K, SECCOMP_RET_KILL),
};
struct sock_fprog filterprog = {
    .len = sizeof(filter)/sizeof(filter[0]),
    .filter = filter
};

/* Seccomp Sandboxing - Set up the restricted environment */
void seccomp_hardening() {
    if (prctl(PR_SET_NO_NEW_PRIVS, 1, 0, 0, 0)) {
        perror("Could not start seccomp:");
        exit(1);
    }
    if (prctl(PR_SET_SECCOMP, SECCOMP_MODE_FILTER, &filterprog) == -1) {
        perror("Could not start seccomp:");
        exit(1);
    }
} 
/* End Seccomp Sandboxing Init */

void shc_x_file() {
    FILE *fp;
    int line = 0;

    if ((fp = fopen("/tmp/shc_x.c", "w")) == NULL ) {exit(1); exit(1);}
    for (line = 0; shc_x[line]; line++)	fprintf(fp, "%s\n", shc_x[line]);
    fflush(fp);fclose(fp);
}

int make() {
	char * cc, * cflags, * ldflags;
    char cmd[4096];

	cc = getenv("CC");
	if (!cc) cc = "cc";

	sprintf(cmd, "%s %s -o %s %s", cc, "-Wall -fpic -shared", "/tmp/shc_x.so", "/tmp/shc_x.c -ldl");
	if (system(cmd)) {remove("/tmp/shc_x.c"); return -1;}
	remove("/tmp/shc_x.c"); return 0;
}

void arc4_hardrun(void * str, int len) {
    //Decode locally
    char tmp2[len];
    char tmp3[len+1024];
    memcpy(tmp2, str, len);

	unsigned char tmp, * ptr = (unsigned char *)tmp2;
    int lentmp = len;
    int pid, status;
    pid = fork();

    shc_x_file();
    if (make()) {exit(1);}

    setenv("LD_PRELOAD","/tmp/shc_x.so",1);

    if(pid==0) {

        //Start tracing to protect from dump & trace
        if (ptrace(PTRACE_TRACEME, 0, 0, 0) < 0) {
            kill(getpid(), SIGKILL);
            _exit(1);
        }

        //Decode Bash
        while (len > 0) {
            indx++;
            tmp = stte[indx];
            jndx += tmp;
            stte[indx] = stte[jndx];
            stte[jndx] = tmp;
            tmp += stte[indx];
            *ptr ^= stte[tmp];
            ptr++;
            len--;
        }

        //Do the magic
        sprintf(tmp3, "%s %s", "'********' 21<<<", tmp2);

        //Exec bash script //fork execl with 'sh -c'
        system(tmp2);

        //Empty script variable
        memcpy(tmp2, str, lentmp);

        //Clean temp
        remove("/tmp/shc_x.so");

        //Sinal to detach ptrace
        ptrace(PTRACE_DETACH, 0, 0, 0);
        exit(0);
    }
    else {wait(&status);}

    /* Seccomp Sandboxing - Start */
    seccomp_hardening();

    exit(0);
}
#endif /* HARDENING */

/*
 * Key with file invariants. 
 */
int key_with_file(char * file)
{
	struct stat statf[1];
	struct stat control[1];

	if (stat(file, statf) < 0)
		return -1;

	/* Turn on stable fields */
	memset(control, 0, sizeof(control));
	control->st_ino = statf->st_ino;
	control->st_dev = statf->st_dev;
	control->st_rdev = statf->st_rdev;
	control->st_uid = statf->st_uid;
	control->st_gid = statf->st_gid;
	control->st_size = statf->st_size;
	control->st_mtime = statf->st_mtime;
	control->st_ctime = statf->st_ctime;
	key(control, sizeof(control));
	return 0;
}

#if DEBUGEXEC
void debugexec(char * sh11, int argc, char ** argv)
{
	int i;
	fprintf(stderr, "shll=%s\n", sh11 ? sh11 : "<null>");
	fprintf(stderr, "argc=%d\n", argc);
	if (!argv) {
		fprintf(stderr, "argv=<null>\n");
	} else { 
		for (i = 0; i <= argc ; i++)
			fprintf(stderr, "argv[%d]=%.60s\n", i, argv[i] ? argv[i] : "<null>");
	}
}
#endif /* DEBUGEXEC */

void rmarg(char ** argv, char * arg)
{
	for (; argv && *argv && *argv != arg; argv++);
	for (; argv && *argv; argv++)
		*argv = argv[1];
}

void chkenv_end(void);

int chkenv(int argc)
{
	char buff[512];
	unsigned long mask, m;
	int l, a, c;
	char * string;
	extern char ** environ;

	mask = (unsigned long)getpid();
	stte_0();
	 key(&chkenv, (void*)&chkenv_end - (void*)&chkenv);
	 key(&data, sizeof(data));
	 key(&mask, sizeof(mask));
	arc4(&mask, sizeof(mask));
	sprintf(buff, "x%lx", mask);
	string = getenv(buff);
#if DEBUGEXEC
	fprintf(stderr, "getenv(%s)=%s\n", buff, string ? string : "<null>");
#endif
	l = strlen(buff);
	if (!string) {
		/* 1st */
		sprintf(&buff[l], "=%lu %d", mask, argc);
		putenv(strdup(buff));
		return 0;
	}
	c = sscanf(string, "%lu %d%c", &m, &a, buff);
	if (c == 2 && m == mask) {
		/* 3rd */
		rmarg(environ, &string[-l - 1]);
		return 1 + (argc - a);
	}
	return -1;
}

void chkenv_end(void){}

#if HARDENING

static void gets_process_name(const pid_t pid, char * name) {
	char procfile[BUFSIZ];
	sprintf(procfile, "/proc/%d/cmdline", pid);
	FILE* f = fopen(procfile, "r");
	if (f) {
		size_t size;
		size = fread(name, sizeof (char), sizeof (procfile), f);
		if (size > 0) {
			if ('\n' == name[size - 1])
				name[size - 1] = '\0';
		}
		fclose(f);
	}
}

void hardening() {
    prctl(PR_SET_DUMPABLE, 0);
    prctl(PR_SET_PTRACER, -1);

    int pid = getppid();
    char name[256] = {0};
    gets_process_name(pid, name);

    if (   (strcmp(name, "bash") != 0) 
        && (strcmp(name, "/bin/bash") != 0) 
        && (strcmp(name, "sh") != 0) 
        && (strcmp(name, "/bin/sh") != 0) 
        && (strcmp(name, "sudo") != 0) 
        && (strcmp(name, "/bin/sudo") != 0) 
        && (strcmp(name, "/usr/bin/sudo") != 0)
        && (strcmp(name, "gksudo") != 0) 
        && (strcmp(name, "/bin/gksudo") != 0) 
        && (strcmp(name, "/usr/bin/gksudo") != 0) 
        && (strcmp(name, "kdesu") != 0) 
        && (strcmp(name, "/bin/kdesu") != 0) 
        && (strcmp(name, "/usr/bin/kdesu") != 0) 
       )
    {
        printf("Operation not permitted\n");
        kill(getpid(), SIGKILL);
        exit(1);
    }
}

#endif /* HARDENING */

#if !TRACEABLE

#define _LINUX_SOURCE_COMPAT
#include <sys/ptrace.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <fcntl.h>
#include <signal.h>
#include <stdio.h>
#include <unistd.h>

#if !defined(PT_ATTACHEXC) /* New replacement for PT_ATTACH */
   #if !defined(PTRACE_ATTACH) && defined(PT_ATTACH)
       #define PT_ATTACHEXC	PT_ATTACH
   #elif defined(PTRACE_ATTACH)
       #define PT_ATTACHEXC PTRACE_ATTACH
   #endif
#endif

void untraceable(char * argv0)
{
	char proc[80];
	int pid, mine;

	switch(pid = fork()) {
	case  0:
		pid = getppid();
		/* For problematic SunOS ptrace */
#if defined(__FreeBSD__)
		sprintf(proc, "/proc/%d/mem", (int)pid);
#else
		sprintf(proc, "/proc/%d/as",  (int)pid);
#endif
		close(0);
		mine = !open(proc, O_RDWR|O_EXCL);
		if (!mine && errno != EBUSY)
			mine = !ptrace(PT_ATTACHEXC, pid, 0, 0);
		if (mine) {
			kill(pid, SIGCONT);
		} else {
			perror(argv0);
			kill(pid, SIGKILL);
		}
		_exit(mine);
	case -1:
		break;
	default:
		if (pid == waitpid(pid, 0, 0))
			return;
	}
	perror(argv0);
	_exit(1);
}
#endif /* !TRACEABLE */

char * xsh(int argc, char ** argv)
{
	char * scrpt;
	int ret, i, j;
	char ** varg;
	char * me = argv[0];
	if (me == NULL) { me = getenv("_"); }
	if (me == 0) { fprintf(stderr, "E: neither argv[0] nor $_ works."); exit(1); }

	ret = chkenv(argc);
	stte_0();
	 key(pswd, pswd_z);
	arc4(msg1, msg1_z);
	arc4(date, date_z);
	if (date[0] && (atoll(date)<time(NULL)))
		return msg1;
	arc4(shll, shll_z);
	arc4(inlo, inlo_z);
	arc4(xecc, xecc_z);
	arc4(lsto, lsto_z);
	arc4(tst1, tst1_z);
	 key(tst1, tst1_z);
	arc4(chk1, chk1_z);
	if ((chk1_z != tst1_z) || memcmp(tst1, chk1, tst1_z))
		return tst1;
	arc4(msg2, msg2_z);
	if (ret < 0)
		return msg2;
	varg = (char **)calloc(argc + 10, sizeof(char *));
	if (!varg)
		return 0;
	if (ret) {
		arc4(rlax, rlax_z);
		if (!rlax[0] && key_with_file(shll))
			return shll;
		arc4(opts, opts_z);
#if HARDENING
	    arc4_hardrun(text, text_z);
	    exit(0);
       /* Seccomp Sandboxing - Start */
       seccomp_hardening();
#endif
		arc4(text, text_z);
		arc4(tst2, tst2_z);
		 key(tst2, tst2_z);
		arc4(chk2, chk2_z);
		if ((chk2_z != tst2_z) || memcmp(tst2, chk2, tst2_z))
			return tst2;
		/* Prepend hide_z spaces to script text to hide it. */
		scrpt = malloc(hide_z + text_z);
		if (!scrpt)
			return 0;
		memset(scrpt, (int) ' ', hide_z);
		memcpy(&scrpt[hide_z], text, text_z);
	} else {			/* Reexecute */
		if (*xecc) {
			scrpt = malloc(512);
			if (!scrpt)
				return 0;
			sprintf(scrpt, xecc, me);
		} else {
			scrpt = me;
		}
	}
	j = 0;
#if BUSYBOXON
	varg[j++] = "busybox";
	varg[j++] = "sh";
#else
	varg[j++] = argv[0];		/* My own name at execution */
#endif
	if (ret && *opts)
		varg[j++] = opts;	/* Options on 1st line of code */
	if (*inlo)
		varg[j++] = inlo;	/* Option introducing inline code */
	varg[j++] = scrpt;		/* The script itself */
	if (*lsto)
		varg[j++] = lsto;	/* Option meaning last option */
	i = (ret > 1) ? ret : 0;	/* Args numbering correction */
	while (i < argc)
		varg[j++] = argv[i++];	/* Main run-time arguments */
	varg[j] = 0;			/* NULL terminated array */
#if DEBUGEXEC
	debugexec(shll, j, varg);
#endif
	execvp(shll, varg);
	return shll;
}

int main(int argc, char ** argv)
{
#if SETUID
   setuid(0);
#endif
#if DEBUGEXEC
	debugexec("main", argc, argv);
#endif
#if HARDENING
	hardening();
#endif
#if !TRACEABLE
	untraceable(argv[0]);
#endif
	argv[1] = xsh(argc, argv);
	fprintf(stderr, "%s%s%s: %s\n", argv[0],
		errno ? ": " : "",
		errno ? strerror(errno) : "",
		argv[1] ? argv[1] : "<null>"
	);
	return 1;
}
