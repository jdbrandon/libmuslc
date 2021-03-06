/* @LICENSE(MUSLC_MIT) */

#include <signal.h>
#include <stddef.h>

int sigwait(const sigset_t *mask, int *sig)
{
	siginfo_t si;
	if (sigtimedwait(mask, &si, NULL) < 0)
		return -1;
	*sig = si.si_signo;
	return 0;
}
