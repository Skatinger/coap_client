/* auto-generated by gen_syscalls.py, don't edit */
#if __GNUC__ > 4 || (__GNUC__ == 4 && __GNUC_MINOR__ >= 6)
#pragma GCC diagnostic push
#endif
#ifdef __GNUC__
#pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif
#include <syscalls/spi.h>

extern int z_vrfy_spi_transceive(struct device * dev, const struct spi_config * config, const struct spi_buf_set * tx_bufs, const struct spi_buf_set * rx_bufs);
uintptr_t z_mrsh_spi_transceive(uintptr_t arg0, uintptr_t arg1, uintptr_t arg2,
		uintptr_t arg3, uintptr_t arg4, uintptr_t arg5, void *ssf)
{
	_current->syscall_frame = ssf;
	(void) arg4;	/* unused */
	(void) arg5;	/* unused */
	int ret = z_vrfy_spi_transceive(*(struct device **)&arg0, *(const struct spi_config **)&arg1, *(const struct spi_buf_set **)&arg2, *(const struct spi_buf_set **)&arg3)
;
	return (uintptr_t) ret;
}

#if __GNUC__ > 4 || (__GNUC__ == 4 && __GNUC_MINOR__ >= 6)
#pragma GCC diagnostic pop
#endif
