#ifndef __VMLINUX_H__
#define __VMLINUX_H__

#define __percpu __attribute__((btf_type_tag("percpu")))

typedef int s32;

struct sock {
	s32 a;
	s32 __percpu *counters;
};

#endif /* __VMLINUX_H__ */
