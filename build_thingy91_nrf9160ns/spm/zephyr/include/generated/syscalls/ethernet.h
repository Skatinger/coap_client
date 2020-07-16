
/* auto-generated by gen_syscalls.py, don't edit */
#ifndef Z_INCLUDE_SYSCALLS_ETHERNET_H
#define Z_INCLUDE_SYSCALLS_ETHERNET_H


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

extern struct device * z_impl_net_eth_get_ptp_clock_by_index(int index);
static inline struct device * net_eth_get_ptp_clock_by_index(int index)
{
#ifdef CONFIG_USERSPACE
	if (z_syscall_trap()) {
		return (struct device *) arch_syscall_invoke1(*(uintptr_t *)&index, K_SYSCALL_NET_ETH_GET_PTP_CLOCK_BY_INDEX);
	}
#endif
	compiler_barrier();
	return z_impl_net_eth_get_ptp_clock_by_index(index);
}


#ifdef __cplusplus
}
#endif

#if __GNUC__ > 4 || (__GNUC__ == 4 && __GNUC_MINOR__ >= 6)
#pragma GCC diagnostic pop
#endif

#endif
#endif /* include guard */
