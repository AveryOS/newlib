#include <pthread.h>
#include <errno.h>
#include <stdlib.h>

void _unsupported();

typedef int sem_t;

int
pthread_create (pthread_t *thread, const pthread_attr_t *attr,
		void *(*start_routine) (void *), void *arg)
{
  _unsupported ();
  return -1;
}

int
pthread_once (pthread_once_t * once_control, void (*init_routine) (void))
{
  _unsupported ();
  return -1;
}

int
pthread_atfork (void (*prepare)(void), void (*parent)(void), void (*child)(void))
{
  _unsupported ();
  return -1;
}

void
pthread_exit (void *value_ptr)
{
  _unsupported ();
}

int
pthread_join (pthread_t thread, void **return_val)
{
  _unsupported ();
  return -1;
}

int
pthread_detach (pthread_t thread)
{
  _unsupported ();
  return -1;
}

pthread_t pthread_self ()
{
  return 1;
}

struct pthread_key {
  void *value;
  void (*destructor)( void * );
};

int
pthread_key_create (pthread_key_t *__key, void (*__destructor)( void * ))
{
  struct pthread_key *k = malloc(sizeof(struct pthread_key));
  if(!k)
    return ENOMEM;
  k->value = NULL;
  k->destructor = __destructor;
  *__key = (pthread_key_t)k;
  return 0;
}

int
pthread_key_delete (pthread_key_t __key)
{
  free((void *)__key);
  return 0;
}

int
pthread_setspecific (pthread_key_t __key, _CONST void *__value)
{
  ((struct pthread_key *)__key)->value = (void *)__value;
  return 0;
}

void *
pthread_getspecific (pthread_key_t __key)
{
  return ((struct pthread_key *)__key)->value;
}

int
pthread_mutex_init (pthread_mutex_t * mutex, const pthread_mutexattr_t * attr)
{
  return 0;
}

int
pthread_mutex_lock (pthread_mutex_t * mutex)
{
  return 0;
}

int
pthread_mutex_trylock (pthread_mutex_t * mutex)
{
  return 0;
}

int
pthread_mutex_unlock (pthread_mutex_t * mutex)
{
  return 0;
}

int
pthread_mutex_destroy (pthread_mutex_t * mutex)
{
  return 0;
}

int
pthread_mutexattr_init (pthread_mutexattr_t *__attr)
{
  return 0;
}

int
pthread_mutexattr_settype (pthread_mutexattr_t *__attr, int __kind)
{
  return 0;
}

int
pthread_mutexattr_destroy (pthread_mutexattr_t *__attr)
{
  return 0;
}

int
pthread_spin_init (pthread_spinlock_t *spinlock, int pshared)
{
  _unsupported ();
  return -1;
}

int
pthread_cond_init (pthread_cond_t * cond, const pthread_condattr_t * attr)
{
  _unsupported ();
  return -1;
}

int
pthread_cond_signal (pthread_cond_t * cond)
{
  _unsupported ();
  return -1;
}

int
pthread_cond_wait (pthread_cond_t * cond, pthread_mutex_t *mutex)
{
  _unsupported ();
  return -1;
}

int
pthread_cond_destroy (pthread_cond_t * cond)
{
  _unsupported ();
  return -1;
}

int
pthread_rwlock_init (pthread_rwlock_t *rwlock, const pthread_rwlockattr_t *attr)
{
  return 0;
}

int
pthread_rwlock_rdlock (pthread_rwlock_t *rwlock)
{
  return 0;
}

int
pthread_rwlock_unlock (pthread_rwlock_t *rwlock)
{
  return 0;
}

int
pthread_rwlock_destroy (pthread_rwlock_t *rwlock)
{
  return 0;
}

int
pthread_cancel (pthread_t thread)
{
  _unsupported ();
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
  _unsupported ();
}

void
_pthread_cleanup_push (struct _pthread_cleanup_context *_context, void (*_routine)(void *), void *_arg)
{
  _unsupported ();
}

void
_pthread_cleanup_pop (struct _pthread_cleanup_context *_context, int _execute)
{
  _unsupported ();
}

int
sem_init (sem_t * sem, int pshared, unsigned int value)
{
  _unsupported ();
  return -1;
}

int
sem_destroy (sem_t * sem)
{
  _unsupported ();
  return -1;
}

int
sem_wait (sem_t * sem)
{
  _unsupported ();
  return -1;
}

int
sem_trywait (sem_t * sem)
{
  _unsupported ();
  return -1;
}

int
sem_timedwait (sem_t * sem, const struct timespec *abstime)
{
  _unsupported ();
  return -1;
}

int
sem_post (sem_t *sem)
{
  _unsupported ();
  return -1;
}

int
sem_getvalue (sem_t * sem, int *sval)
{
  _unsupported ();
  return -1;
}
