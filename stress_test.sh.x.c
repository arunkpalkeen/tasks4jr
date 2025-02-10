#if 0
	shc Version 4.0.3, Generic Shell Script Compiler
	GNU GPL Version 3 Md Jahidul Hamid <jahidulhamid@yahoo.com>

	shc -f stress_test.sh 
#endif

static  char data [] = 
#define      shll_z	10
#define      shll	((&data[2]))
	"\273\172\172\141\351\011\376\037\211\376\027\353\111\070"
#define      inlo_z	3
#define      inlo	((&data[14]))
	"\100\154\222"
#define      tst2_z	19
#define      tst2	((&data[21]))
	"\164\226\216\237\342\371\005\200\077\147\067\122\306\330\312\050"
	"\227\376\251\062\137\372\073\155"
#define      xecc_z	15
#define      xecc	((&data[44]))
	"\146\371\376\262\016\006\001\007\322\304\244\267\360\375\013\310"
	"\276\025"
#define      opts_z	1
#define      opts	((&data[59]))
	"\201"
#define      msg2_z	19
#define      msg2	((&data[61]))
	"\101\324\303\041\344\053\216\211\267\153\324\023\115\125\112\046"
	"\251\305\035\133\157\137\026"
#define      date_z	1
#define      date	((&data[83]))
	"\210"
#define      lsto_z	1
#define      lsto	((&data[84]))
	"\176"
#define      pswd_z	256
#define      pswd	((&data[85]))
	"\114\166\034\062\365\151\337\257\125\060\327\310\273\147\362\361"
	"\165\216\306\356\100\005\134\373\015\353\032\031\154\277\316\270"
	"\065\353\352\053\124\312\333\252\373\262\162\266\032\145\250\220"
	"\363\157\176\063\164\333\057\202\307\111\233\063\011\152\353\077"
	"\125\325\152\252\237\105\124\233\370\307\121\022\055\372\243\041"
	"\151\041\125\336\375\204\140\304\316\374\367\330\147\343\027\274"
	"\271\202\147\130\310\274\364\300\204\105\323\261\077\166\323\251"
	"\230\050\207\226\255\347\133\174\344\123\124\113\066\153\010\357"
	"\355\157\110\266\054\074\166\260\202\112\141\302\301\065\153\132"
	"\135\362\360\012\332\113\207\276\237\333\012\325\107\022\305\064"
	"\202\016\353\257\112\142\137\315\254\301\217\156\366\372\310\123"
	"\354\270\136\306\004\345\205\243\301\217\171\010\242\076\075\045"
	"\114\050\324\227\212\063\144\067\365\363\245\353\355\155\077\332"
	"\045\236\241\052\203\046\315\104\266\107\115\131\205\212\177\322"
	"\262\123\151\075\207\315\164\174\301\031\150\257\206\247\211\254"
	"\105\052\326\311\121\244\016\010\353\133\141\161\345\340\103\230"
	"\116\167\105\335\027\262\065\010\305\233\001\303\136\134\062\006"
	"\227\345\107\007\105\136\062\037\277\226\066\203\233\071\061\352"
	"\260\166\307\307\051\374\317\356\230\321\261\366"
#define      tst1_z	22
#define      tst1	((&data[390]))
	"\305\311\105\315\016\206\200\117\144\054\217\237\367\373\315\351"
	"\152\021\144\104\203\061\224\344\040\044\055\243\377\056\142\225"
#define      chk1_z	22
#define      chk1	((&data[422]))
	"\236\027\033\116\216\275\024\336\106\030\065\105\240\161\206\377"
	"\277\304\100\150\064\151\330\140\213\357\100\342"
#define      msg1_z	65
#define      msg1	((&data[457]))
	"\346\246\167\270\130\156\346\074\153\254\005\260\322\030\177\271"
	"\366\313\377\264\263\326\013\153\161\224\261\110\107\361\120\050"
	"\031\202\361\367\345\343\312\354\074\054\366\254\067\045\063\347"
	"\072\177\103\077\153\245\175\232\047\042\026\111\332\055\363\145"
	"\123\057\070\302\067\027\027\167\066\144\316\223\052\171\023\124"
	"\170\102\267\016\247\235\077\105\265\133\224"
#define      rlax_z	1
#define      rlax	((&data[536]))
	"\162"
#define      chk2_z	19
#define      chk2	((&data[537]))
	"\106\021\226\114\302\256\242\111\154\172\005\300\270\337\134\037"
	"\345\241\172\242\224"
#define      text_z	744
#define      text	((&data[741]))
	"\060\066\155\334\074\036\125\120\162\316\222\051\334\071\306\033"
	"\177\173\167\024\277\264\300\273\321\121\136\145\233\130\147\313"
	"\217\324\247\314\363\375\034\145\313\256\216\247\350\124\303\150"
	"\320\072\175\220\357\075\113\301\216\251\046\052\002\215\365\222"
	"\142\235\137\125\232\173\273\146\052\111\015\023\236\321\173\157"
	"\014\370\377\373\065\113\274\304\364\343\357\367\161\344\212\324"
	"\202\351\052\034\145\345\202\217\056\220\242\315\142\036\074\156"
	"\027\073\152\114\206\047\021\173\012\001\163\174\345\376\120\147"
	"\347\172\204\115\137\007\335\216\227\177\133\371\236\230\150\265"
	"\323\322\002\132\371\024\325\004\025\111\200\372\107\321\142\057"
	"\113\347\174\253\356\131\072\206\331\226\177\167\056\350\055\002"
	"\272\057\134\264\103\062\271\115\013\130\000\366\320\274\306\270"
	"\150\052\114\320\105\124\122\265\273\040\071\341\244\017\314\201"
	"\023\152\336\133\037\357\271\177\304\367\133\077\371\344\036\071"
	"\320\317\106\212\346\145\114\324\102\174\110\312\230\137\231\030"
	"\113\012\314\356\102\101\353\374\312\260\316\334\031\064\054\054"
	"\333\344\217\072\353\111\151\063\263\125\276\216\226\355\205\077"
	"\016\045\150\066\344\177\263\377\117\033\165\046\274\131\056\300"
	"\144\314\165\031\370\031\335\313\035\340\352\356\154\061\220\363"
	"\020\226\100\010\051\003\076\263\365\011\271\350\134\130\273\133"
	"\122\074\271\374\346\125\362\266\114\230\351\320\105\052\154\313"
	"\066\213\276\251\144\253\276\310\070\140\123\207\315\145\355\035"
	"\012\156\010\174\200\216\341\061\256\042\355\045\314\101\174\153"
	"\250\020\364\353\000\344\332\257\310\046\136\063\213\102\064\153"
	"\222\154\167\116\177\041\333\234\246\131\065\072\374\311\006\162"
	"\147\036\011\316\311\060\017\363\042\035\062\245\102\301\347\270"
	"\363\257\050\311\301\166\322\302\252\111\074\275\304\214\300\134"
	"\261\253\200\277\156\005\257\214\031\216\274\000\210\333\142\132"
	"\007\276\027\351\144\337\231\047\065\246\126\226\100\142\271\267"
	"\175\075\063\317\217\032\100\072\325\355\101\051\203\334\014\051"
	"\144\160\160\245\263\305\146\310\271\254\213\372\212\006\253\142"
	"\057\024\137\110\211\374\303\061\311\175\305\253\036\046\305\177"
	"\315\274\103\324\162\254\046\203\026\177\211\065\105\335\123\276"
	"\227\126\126\136\070\227\242\223\213\221\163\351\024\053\274\171"
	"\135\120\251\235\154\174\275\325\176\335\040\025\060\071\117\141"
	"\070\051\027\130\230\122\106\026\045\275\113\275\175\344\165\274"
	"\036\030\101\311\070\123\242\125\326\043\147\260\312\366\335\364"
	"\211\342\372\231\323\254\054\310\266\032\004\045\240\137\353\353"
	"\272\214\042\223\224\171\112\174\322\150\351\115\325\040\042\023"
	"\062\253\356\341\302\272\001\371\326\257\203\030\254\372\370\150"
	"\166\271\250\320\300\275\006\321\312\243\041\204\212\117\354\117"
	"\250\233\062\214\245\332\134\075\245\106\103\267\001\063\221\062"
	"\274\140\144\147\030\140\134\006\377\236\235\337\016\373\005\157"
	"\142\021\021\241\103\133\010\210\033\154\100\347\264\130\130\266"
	"\210\367\210\176\245\262\025\077\222\347\252\226\217\004\337\203"
	"\374\272\065\075\177\110\000\312\233\161\014\237\326\223\124\007"
	"\210\214\344\075\277\014\163\326\077\220\000\371\231\330\222\010"
	"\314\353\362\107\037\363\142\016\057\166\073\145\002\207\102\212"
	"\135\271\064\127\221\205\361\035\107\115\017\355\365\117\254\260"
	"\044\110\147\241\141\075\172\357\016\166\367\223\013\074\340\277"
	"\061\000\025\242\236\107\332\136\307\167\157\145\323\151\224\370"
	"\035\202\070\025\255\174\327\204\363\161\024\177\011\130\310\032"
	"\043\206\040\375\020\101\166\031\113\345\265\372\073\205\274\036"
	"\162\257\360\114\171\066\351\034\062\154\130\076\355\047\070\317"
	"\037\033\243\255\342\047\264\157\250\260\367\071\310\374\214\045"
	"\131\270\313\070\277\267\352\172\327\110\332\315\361\113\064\360"
	"\003\022\104\013\311\351\363\112\060\247\130\254\017\372\115\031"
	"\303\022\361\206\170\135\113\036\335\047\111\301\202\122\374\130"/* End of data[] */;
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
