#include <pthread.h>

int
pthread_create (pthread_t *thread, const pthread_attr_t *attr,
		void *(*start_routine) (void *), void *arg)
{
  return -1;
}

int
pthread_once (pthread_once_t * once_control, void (*init_routine) (void))
{
  return -1;
}

int
pthread_atfork (void (*prepare)(void), void (*parent)(void), void (*child)(void))
{
  return -1;
}

void
pthread_exit (void *value_ptr)
{
  __builtin_unreachable ();
}

int
pthread_join (pthread_t thread, void **return_val)
{
  return -1;
}

int
pthread_detach (pthread_t thread)
{
  return -1;
}

pthread_t pthread_self ()
{
  return 1;
}

int
pthread_mutex_init (pthread_mutex_t * mutex, const pthread_mutexattr_t * attr)
{
  return -1;
}

int
pthread_spin_init (pthread_spinlock_t *spinlock, int pshared)
{
  return -1;
}

int
pthread_cond_init (pthread_cond_t * cond, const pthread_condattr_t * attr)
{
  return -1;
}

int
pthread_rwlock_init (pthread_rwlock_t *rwlock, const pthread_rwlockattr_t *attr)
{
  return -1;
}

int
pthread_cancel (pthread_t thread)
{
  return -1;
}

int
pthread_setcancelstate (int state, int *oldstate)
{
  return -1;
}

int
pthread_setcanceltype (int type, int *oldtype)
{
  return -1;
}

void
pthread_testcancel ()
{
  return -1;
}

void
_pthread_cleanup_push (__pthread_cleanup_handler *handler)
{
  return -1;
}

void
_pthread_cleanup_pop (int execute)
{
  return -1;
}

int
sem_init (sem_t * sem, int pshared, unsigned int value)
{
  return -1;
}

int
sem_destroy (sem_t * sem)
{
  return -1;
}

int
sem_wait (sem_t * sem)
{
  return -1;
}

int
sem_trywait (sem_t * sem)
{
  return -1;
}

int
sem_timedwait (sem_t * sem, const struct timespec *abstime)
{
  return -1;
}

int
sem_post (sem_t *sem)
{
  return -1;
}

int
sem_getvalue (sem_t * sem, int *sval)
{
  return -1;
}
