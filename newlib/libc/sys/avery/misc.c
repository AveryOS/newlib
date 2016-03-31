#include <stdint.h>
#include <stdio.h>
#include <sys/errno.h>

void _exit(int status);

void _unsupported() {
  asm ("int $47;int $46" :: "a"("\nUnsupported operation"), "b"(sizeof("\nUnsupported operation")-1));
}

void
_Unwind_Resume(void *ptr)
{
  _unsupported ();
}

void
_Unwind_Backtrace()
{
  _unsupported ();
}

void
_Unwind_GetIPInfo()
{
  _unsupported ();
}

void
_Unwind_FindEnclosingFunction()
{
  _unsupported ();
}

void
_Unwind_GetLanguageSpecificData()
{
  _unsupported ();
}

void
_Unwind_GetIP()
{
  _unsupported ();
}

void
_Unwind_GetRegionStart()
{
  _unsupported ();
}

void
_Unwind_RaiseException()
{
  _unsupported ();
}

void
_Unwind_DeleteException()
{
  _unsupported ();
}

void
_Unwind_SetGR()
{
  _unsupported ();
}

void
_Unwind_SetIP()
{
  _unsupported ();
}

void
compilerrt_abort_impl()
{
  _unsupported ();
}

int
posix_memalign (void **memptr, size_t alignment, size_t size)
{
  _unsupported ();
  return ENOMEM;
}

int *
errno_location (void)
{
  return &errno;
}