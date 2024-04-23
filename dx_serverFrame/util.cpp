#include "util.h"
#include <execinfo.h>
#include <sys/time.h>
#include <dirent.h>
#include <unistd.h>
#include <string.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <arpa/inet.h>
#include <ifaddrs.h>
//#include <google/protobuf/unknown_field_set.h>

namespace dxspace{

pid_t GetThreadId()
{
    // return syscall(SYS_gettid);
}

uint32_t GetFiberId()
{
    return 0;
}


}