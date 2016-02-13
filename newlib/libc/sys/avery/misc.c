#include <stdint.h>
#include <sys/errno.h>

void
_Unwind_Resume(void *ptr)
{
  __builtin_unreachable ();
}

void
_Unwind_Backtrace()
{
  __builtin_unreachable ();
}

void
_Unwind_GetIPInfo()
{
  __builtin_unreachable ();
}

void
_Unwind_FindEnclosingFunction()
{
  __builtin_unreachable ();
}

void
_Unwind_GetLanguageSpecificData()
{
  __builtin_unreachable ();
}

void
_Unwind_GetIP()
{
  __builtin_unreachable ();
}

void
_Unwind_GetRegionStart()
{
  __builtin_unreachable ();
}

void
_Unwind_RaiseException()
{
  __builtin_unreachable ();
}

void
_Unwind_DeleteException()
{
  __builtin_unreachable ();
}

void
_Unwind_SetGR()
{
  __builtin_unreachable ();
}

void
_Unwind_SetIP()
{
  __builtin_unreachable ();
}

void
compilerrt_abort_impl()
{
  __builtin_unreachable ();
}

int
posix_memalign (void **memptr, size_t alignment, size_t size)
{
  __builtin_unreachable ();
  return ENOMEM;
}

int *
errno_location (void)
{
  return &errno;
}