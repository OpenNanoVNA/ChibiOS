/*
    ChibiOS/RT - Copyright (C) 2006-2007 Giovanni Di Sirio.

    This file is part of ChibiOS/RT.

    ChibiOS/RT is free software; you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation; either version 3 of the License, or
    (at your option) any later version.

    ChibiOS/RT is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

/**
 * @addtogroup Core
 * @{
 */

#include <ch.h>

/*
 * This file is just a template, it contains the function prototypes and the
 * doxigen documentation. The implementation of the following functions is
 * architecture/compiler specific.
 */

/**
 * This function implements the idle thread infinite loop. The function should
 * put the processor in the lowest power mode capable to serve interrupts.
 * The priority is internally set to the minimum system value so that this
 * thread is executed only if there are no other ready threads in the system.
 */
void _IdleThread(void *p) {

  while (TRUE)
    ;
}

/**
 * Abonormal system termination handler. Invoked by the ChibiOS/RT when an
 * abnormal unrecoverable condition is met.
 */
void chSysHalt(void) {

  chSysLock();

  while (TRUE)
    ;
}

/**
 * Enters the ChibiOS/RT system mutual exclusion zone. The implementation is
 * architecture dependent, on single core systems usually this function usually
 * just disables the interrupts.
 * @note The code in the system mutual exclusion zone must be as light and
 *       fast as possible, the system performance is affected by this.
 * @note The use of system mutual exclusion zones are not recommended in
 *       the user code, it is a better idea to use the Semaphores instead.
 */
void chSysLock(void) {
}

/**
 * Leaves the ChibiOS/RT system mutual exclusion zone. The implementation is
 * architecture dependent, on single core systems usually this function usually
 * just enables the interrupts.
 * @note The code in the system mutual exclusion zone must be as light and
 *       fast as possible, the system performance is affected by this.
 * @note The use of system mutual exclusion zones are not recommended in
 *       the user code, it is a better idea to use the Semaphores instead.
 */
void chSysUnlock(void) {
}

/**
 * Context switch.
 */
void chSysSwitchI(Thread *otp, Thread *ntp) {}

/**
 * Prints a message on the system console (if any).
 */
void chSysPuts(char *msg) {
}

/** @} */
