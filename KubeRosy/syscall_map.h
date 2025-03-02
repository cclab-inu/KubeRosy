#ifndef SYSCALL_MAP_H
#define SYSCALL_MAP_H

enum
{
    TASK_ALLOC = 1,
    BPRM_CHECK_SECURITY,
    PTRACE_ACCESS_CHECK,
    PATH_CHMOD,
    FILE_MPROTECT,
    TASK_FIX_SETGID,
    TASK_FIX_SETUID,
    SOCKET_ACCEPT,
    SOCKET_BIND,
    SOCKET_CONNECT,
    SOCKET_LISTEN,
    SOCKET_RECVMSG,
    SOCKET_CREATE,
    SOCKET_GETPEERNAME,
    SOCKET_SENDMSG,
    SOCKET_SETSOCKOPT,
    SOCKET_SHUTDOWN,
    FILE_PERMISSION,
    CAPABLE,
    CAPGET,
    CAPSET,
    QUOTACTL,
    SYSLOG,
    SETTIME,
    SB_FREE_MNT_OPTS,
    SB_STATFS,
    SB_PIVOTROOT,
    MOVE_MOUNT,
    PATH_NOTIFY,
    PATH_MKDIR,
    PATH_RMDIR,
    PATH_UNLINK,
    PATH_SYMLINK,
    PATH_LINK,
    PATH_RENAME,
    PATH_TRUNCATE,
    PATH_CHOWN,
    PATH_CHROOT,
    MMAP_FILE,
    MMAP_ADDR,
    FILE_FCNTL,
    TASK_SETPGID,
    TASK_GETPGID,
    TASK_GETSID
};

u32 syscall_map[548] = {
    [0] = FILE_PERMISSION,
    [1] = FILE_PERMISSION,
    [2] = CAPABLE,
    [9] = MMAP_FILE,
    [10] = FILE_MPROTECT,
    [17] = FILE_PERMISSION,
    [18] = FILE_PERMISSION,
    [19] = FILE_PERMISSION,
    [20] = FILE_PERMISSION,
    [30] = MMAP_FILE,
    [40] = FILE_PERMISSION,
    [41] = SOCKET_CREATE,
    [42] = SOCKET_CONNECT,
    [43] = SOCKET_ACCEPT,
    [44] = SOCKET_SENDMSG,
    [45] = SOCKET_RECVMSG,
    [46] = SOCKET_SENDMSG,
    [47] = SOCKET_RECVMSG,
    [48] = SOCKET_SHUTDOWN,
    [49] = SOCKET_BIND,
    [50] = SOCKET_LISTEN,
    [52] = SOCKET_GETPEERNAME,
    [53] = SOCKET_CREATE,
    [54] = SOCKET_SETSOCKOPT,
    [56] = TASK_ALLOC,
    [57] = TASK_ALLOC,
    [58] = TASK_ALLOC,
    [59] = BPRM_CHECK_SECURITY,
    [72] = FILE_FCNTL,
    [77] = PATH_TRUNCATE,
    [82] = PATH_RENAME,
    [83] = PATH_MKDIR,
    [84] = PATH_RMDIR,
    [85] = CAPABLE,
    [86] = PATH_LINK,
    [87] = PATH_UNLINK,
    [88] = PATH_SYMLINK,
    [90] = PATH_CHMOD,
    [91] = PATH_CHMOD,
    [92] = PATH_CHOWN,
    [93] = PATH_CHOWN,
    [94] = PATH_CHOWN,
    [101] = PTRACE_ACCESS_CHECK,
    [103] = SYSLOG,
    [105] = TASK_FIX_SETUID,
    [106] = TASK_FIX_SETGID,
    [109] = TASK_SETPGID,
    [111] = TASK_GETPGID,
    [121] = TASK_GETPGID,
    [113] = TASK_FIX_SETUID,
    [114] = TASK_FIX_SETGID,
    [116] = CAPABLE,
    [117] = TASK_FIX_SETUID,
    [119] = TASK_FIX_SETGID,
    [124] = TASK_GETSID,
    [125] = CAPGET,
    [126] = CAPSET,
    [133] = CAPABLE,
    [134] = CAPABLE,
    [136] = SB_STATFS,
    [137] = SB_STATFS,
    [138] = SB_STATFS,
    [155] = SB_PIVOTROOT,
    [161] = PATH_CHROOT,
    [164] = SETTIME,
    [167] = CAPABLE,
    [168] = CAPABLE,
    [163] = CAPABLE,
    [179] = QUOTACTL,
    [206] = MMAP_ADDR,
    [216] = MMAP_ADDR,
    [227] = SETTIME,
    [254] = PATH_NOTIFY,
    [257] = CAPABLE,
    [258] = PATH_MKDIR,
    [260] = PATH_CHOWN,
    [264] = PATH_RENAME,
    [265] = PATH_LINK,
    [266] = PATH_SYMLINK,
    [268] = PATH_CHMOD,
    [272] = SB_PIVOTROOT,
    [285] = FILE_PERMISSION,
    [288] = SOCKET_ACCEPT,
    [295] = FILE_PERMISSION,
    [296] = FILE_PERMISSION,
    [299] = SOCKET_RECVMSG,
    [301] = PATH_NOTIFY,
    [304] = CAPABLE,
    [307] = SOCKET_SENDMSG,
    [308] = SB_PIVOTROOT,
    [316] = PATH_RENAME,
    [322] = BPRM_CHECK_SECURITY,
    [326] = FILE_PERMISSION,
    [327] = FILE_PERMISSION,
    [328] = FILE_PERMISSION,
    [329] = FILE_MPROTECT,
    [425] = SB_PIVOTROOT,
    [429] = MOVE_MOUNT,
    [431] = SB_FREE_MNT_OPTS,
    [432] = SB_FREE_MNT_OPTS,
    [437] = CAPABLE,
    [440] = PTRACE_ACCESS_CHECK,
    [443] = QUOTACTL
};

#endif 