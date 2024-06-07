#ifndef __VMLINUX_H__
#define __VMLINUX_H__

typedef int s32;

struct inode;

struct address_space {
	struct inode *host;
};

struct dst_entry;

struct dst_ops;

struct dst_entry {
	struct dst_ops *ops;
};

struct page_frag {
	struct page *page;
};

struct address_space;

struct page {
	struct address_space *mapping;
};

struct sock {
	struct dst_entry __attribute__((btf_type_tag("rcu"))) *sk_rx_dst;
	struct page_frag sk_frag;
};

struct fprop_local_percpu {
	s32 __attribute__((btf_type_tag("percpu"))) *counters;
};

struct bdi_writeback {
	struct backing_dev_info *bdi;
	struct fprop_local_percpu completions;
};

struct inode {
	struct bdi_writeback *i_wb;
};

struct backing_dev_info {
	struct device *dev;
};

struct dev_pm_info {
	void (*set_latency_tolerance)(struct device *, s32);
};

struct device {
	struct dev_pm_info power;
};

#endif /* __VMLINUX_H__ */
