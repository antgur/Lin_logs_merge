#if !defined(MAIN1_H)
#define MAIN1_H

#include <stdio.h>
#include <stdlib.h>
#include <errno.h>
#include <unistd.h>
#include <sys/types.h>
#include <string.h>
#include <signal.h>
#include <sys/un.h>
#include <pigpio.h>

#include "utils/srvlog.h"
#include "utils/ipcr.h"
// program as system service
int pagr();


#endif