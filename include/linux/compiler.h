/****************************************************************************
 ****************************************************************************
 ***
 ***   This header was automatically generated from a Linux kernel header
 ***   of the same name, to make information necessary for userspace to
 ***   call into the kernel available to libc.  It contains only constants,
 ***   structures, and macros generated from the original header, and thus,
 ***   contains no copyrightable information.
 ***
 ***   To edit the content of this header, modify the corresponding
 ***   source file (e.g. under external/kernel-headers/original/) then
 ***   run bionic/libc/kernel/tools/update_all.py
 ***
 ***   Any manual change here will be lost the next time this script will
 ***   be run. You've been warned!
 ***
 ****************************************************************************
 ****************************************************************************/
#ifndef __LINUX_COMPILER_H
#define __LINUX_COMPILER_H
#ifndef __ASSEMBLY__
#define __user
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define __kernel
#define __safe
#define __force
#define __nocast
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define __iomem
#define __chk_user_ptr(x) (void)0
#define __chk_io_ptr(x) (void)0
#define __builtin_warning(x, y...) (1)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define __acquires(x)
#define __releases(x)
#define __acquire(x) (void)0
#define __release(x) (void)0
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define __cond_lock(x,c) (c)
#define __percpu
#define __rcu
#endif
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#ifndef __attribute_const__
#define __attribute_const__  
#endif
#ifndef __cold
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define __cold
#endif
#ifndef __section
#define __section(S) __attribute__ ((__section__(#S)))
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#endif
#ifndef __same_type
#define __same_type(a, b) __builtin_types_compatible_p(typeof(a), typeof(b))
#endif
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#ifndef __compiletime_object_size
#define __compiletime_object_size(obj) -1
#endif
#ifndef __compiletime_warning
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define __compiletime_warning(message)
#endif
#ifndef __compiletime_error
#define __compiletime_error(message)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#endif
#define ACCESS_ONCE(x) (*(volatile typeof(x) *)&(x))
#endif

