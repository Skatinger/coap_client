
/* auto-generated by gen_syscalls.py, don't edit */
#ifndef Z_INCLUDE_SYSCALLS_ERRNO_PRIVATE_H
#define Z_INCLUDE_SYSCALLS_ERRNO_PRIVATE_H


#ifndef _ASMLANGUAGE

#include <syscall_list.h>
#include <syscall.h>

#if __GNUC__ > 4 || (__GNUC__ == 4 && __GNUC_MINOR__ >= 6)
#pragma GCC diagnostic push
#endif

#ifdef __GNUC__
#pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif

#ifdef __cplusplus
extern "C" {
#endif

extern int * z_impl_z_errno();
static inline int * z_errno()
{
#ifdef CONFIG_USERSPACE
	if (z_syscall_trap()) {
		return (int *) arch_syscall_invoke0(K_SYSCALL_Z_ERRNO);
	}
#endif
	compiler_barrier();
	return z_impl_z_errno();
}


#ifdef __cplusplus
}
#endif

#if __GNUC__ > 4 || (__GNUC__ == 4 && __GNUC_MINOR__ >= 6)
#pragma GCC diagnostic pop
#endif

#endif
#endif /* include guard */
