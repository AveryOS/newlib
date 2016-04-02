#include <sys/stat.h>
#include <sys/types.h>
#include <sys/fcntl.h>
#include <sys/times.h>
#include <sys/errno.h>
#include <sys/time.h>
#include <stdio.h>
#include <pthread.h>
#include <_syslist.h>

// Bochs magic breakpoint
// asm volatile("xchgw %bx, %bx");

static inline void print_val(intptr_t val)
{
	asm ("int $45" :: "a"(val));
}

int open(const char *file, int flags, ...)
{
	print_val(0xDEADDEAD);
  errno = ENOSYS;
  return -1;
}

int isatty(int file) {
	print_val(0xDEADAAAAA);
  return 1;
}

static const intptr_t size = 0xF0000;
static char mem[size];
static char *ptr = mem;
static char *ptr_end = mem + size;

void *
sbrk (intptr_t incr)
{
	if (ptr + incr <= ptr_end) {
		char *r = ptr;
		ptr += incr;
		return r;
	} else {
		errno = ENOMEM;
		return (void *)-1;
	}
}

void _exit(int status)
{
	asm ("int $46");
}

int write(int fd, const void *buff, size_t bytes) {
	if (fd == 1 || fd == 2) {
		asm ("int $47" :: "a"(buff), "b"(bytes));
		return bytes;
	}
	errno = ENOSYS;
	return -1;
}

off_t lseek(int fd, off_t offset, int dir) {
	print_val(0xADADAD);
	printf("seeking in %d\n", fd);
	errno = ENOSYS;
	return -1;
}

 /*
int close(int file);
char **environ; // pointer to array of char * strings that define the current environment variables
int execve(char *name, char **argv, char **env);
int fork();
int fstat(int file, struct stat *st);
int getpid();
int isatty(int file);
int kill(int pid, int sig);
int link(char *old, char *new);
int lseek(int file, int ptr, int dir);
int open(const char *name, int flags, ...);
int read(int file, char *ptr, int len);
caddr_t sbrk(int incr);
int stat(const char *file, struct stat *st);
clock_t times(struct tms *buf);
int unlink(char *name);
int wait(int *status);
int write(int file, char *ptr, int len);
int gettimeofday(struct timeval *p, struct timezone *z);*/
