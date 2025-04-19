/* SPDX-License-Identifier: GPL-2.0 */
#ifndef _LINUX_SCHED_CPUFREQ_H
#define _LINUX_SCHED_CPUFREQ_H

#include <linux/types.h>

/*
 * Interface between cpufreq drivers and the scheduler:
 */


#ifdef CONFIG_AIGOV
#define SCHED_CPUFREQ_AIGOV (1U << 9)
#endif


#endif /* _LINUX_SCHED_CPUFREQ_H */
