/* SPDX-License-Identifier: GPL-2.0 */
#ifndef _LINUX_SCHED_STAT_H
#define _LINUX_SCHED_STAT_H

#include <linux/percpu.h>

/*
 * Various counters maintained by the scheduler and fork(),
 * exposed via /proc, sys.c or used by drivers via these APIs.
 *
 * ( Note that all these values are aquired without locking,
 *   so they can only be relied on in narrow circumstances. )
 */

#ifdef CONFIG_CONTROL_CENTER
extern u64 sched_lpm_disallowed_time(int cpu);
#endif

#endif /* _LINUX_SCHED_STAT_H */
