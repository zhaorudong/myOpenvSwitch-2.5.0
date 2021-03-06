#include <linux/module.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

MODULE_INFO(vermagic, VERMAGIC_STRING);

__visible struct module __this_module
__attribute__((section(".gnu.linkonce.this_module"))) = {
	.name = KBUILD_MODNAME,
	.init = init_module,
#ifdef CONFIG_MODULE_UNLOAD
	.exit = cleanup_module,
#endif
	.arch = MODULE_ARCH_INIT,
};

static const struct modversion_info ____versions[]
__used
__attribute__((section("__versions"))) = {
	{ 0xb669ed0, __VMLINUX_SYMBOL_STR(module_layout) },
	{ 0xc294cb4, __VMLINUX_SYMBOL_STR(register_netdevice) },
	{ 0x609f1c7e, __VMLINUX_SYMBOL_STR(synchronize_net) },
	{ 0x2d3385d3, __VMLINUX_SYMBOL_STR(system_wq) },
	{ 0xcae56573, __VMLINUX_SYMBOL_STR(kmem_cache_destroy) },
	{ 0x7feb6f27, __VMLINUX_SYMBOL_STR(genlmsg_new_unicast) },
	{ 0x402b8281, __VMLINUX_SYMBOL_STR(__request_module) },
	{ 0x5069bf8c, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x367ba856, __VMLINUX_SYMBOL_STR(__crc32c_le_shift) },
	{ 0x12da5bb2, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0x180bef34, __VMLINUX_SYMBOL_STR(nf_conntrack_in) },
	{ 0x7415838e, __VMLINUX_SYMBOL_STR(register_pernet_device) },
	{ 0x4ef80d31, __VMLINUX_SYMBOL_STR(gro_find_receive_by_type) },
	{ 0x2ab9c2e2, __VMLINUX_SYMBOL_STR(inet_frag_kill) },
	{ 0x1d68896a, __VMLINUX_SYMBOL_STR(__skb_gso_segment) },
	{ 0x704a43c0, __VMLINUX_SYMBOL_STR(netlink_has_listeners) },
	{ 0xb8b6a76c, __VMLINUX_SYMBOL_STR(__percpu_counter_add) },
	{ 0x6bf1c17f, __VMLINUX_SYMBOL_STR(pv_lock_ops) },
	{ 0xd0d8621b, __VMLINUX_SYMBOL_STR(strlen) },
	{ 0x60a13e90, __VMLINUX_SYMBOL_STR(rcu_barrier) },
	{ 0xd0de1e09, __VMLINUX_SYMBOL_STR(ip_tunnel_get_stats64) },
	{ 0x901d861e, __VMLINUX_SYMBOL_STR(ip6_expire_frag_queue) },
	{ 0x43a53735, __VMLINUX_SYMBOL_STR(__alloc_workqueue_key) },
	{ 0xb88178c4, __VMLINUX_SYMBOL_STR(dev_disable_lro) },
	{ 0xf83a1c9a, __VMLINUX_SYMBOL_STR(genl_unregister_family) },
	{ 0x9469482, __VMLINUX_SYMBOL_STR(kfree_call_rcu) },
	{ 0x79aa04a2, __VMLINUX_SYMBOL_STR(get_random_bytes) },
	{ 0xfd99623a, __VMLINUX_SYMBOL_STR(ip_frag_ecn_table) },
	{ 0xbfb9fb75, __VMLINUX_SYMBOL_STR(ip_do_fragment) },
	{ 0xf9a0be90, __VMLINUX_SYMBOL_STR(netdev_rx_handler_register) },
	{ 0x4be942ba, __VMLINUX_SYMBOL_STR(nf_ct_get_tuplepr) },
	{ 0xc7a4fbed, __VMLINUX_SYMBOL_STR(rtnl_lock) },
	{ 0x96220bcf, __VMLINUX_SYMBOL_STR(sock_release) },
	{ 0x88739aba, __VMLINUX_SYMBOL_STR(dst_release) },
	{ 0xd9d3bcd3, __VMLINUX_SYMBOL_STR(_raw_spin_lock_bh) },
	{ 0xee09617e, __VMLINUX_SYMBOL_STR(udp_add_offload) },
	{ 0x6eb85693, __VMLINUX_SYMBOL_STR(nf_defrag_ipv6_enable) },
	{ 0x96520c28, __VMLINUX_SYMBOL_STR(skb_clone) },
	{ 0x1e816019, __VMLINUX_SYMBOL_STR(dev_get_by_name) },
	{ 0xc0a3d105, __VMLINUX_SYMBOL_STR(find_next_bit) },
	{ 0x6b06fdce, __VMLINUX_SYMBOL_STR(delayed_work_timer_fn) },
	{ 0x2124474, __VMLINUX_SYMBOL_STR(ip_send_check) },
	{ 0xd2da1048, __VMLINUX_SYMBOL_STR(register_netdevice_notifier) },
	{ 0x4205ad24, __VMLINUX_SYMBOL_STR(cancel_work_sync) },
	{ 0x97db2d1b, __VMLINUX_SYMBOL_STR(netdev_master_upper_dev_get) },
	{ 0x44b1d426, __VMLINUX_SYMBOL_STR(__dynamic_pr_debug) },
	{ 0x915883e2, __VMLINUX_SYMBOL_STR(nf_conntrack_helper_try_module_get) },
	{ 0xe2fae716, __VMLINUX_SYMBOL_STR(kmemdup) },
	{ 0xa3871703, __VMLINUX_SYMBOL_STR(skb_zerocopy) },
	{ 0x50c89f23, __VMLINUX_SYMBOL_STR(__alloc_percpu) },
	{ 0x6114c2f5, __VMLINUX_SYMBOL_STR(__dev_kfree_skb_any) },
	{ 0x96f79a50, __VMLINUX_SYMBOL_STR(inet_proto_csum_replace4) },
	{ 0x9580deb, __VMLINUX_SYMBOL_STR(init_timer_key) },
	{ 0xc226fd33, __VMLINUX_SYMBOL_STR(sock_create_kern) },
	{ 0x4c29dcbf, __VMLINUX_SYMBOL_STR(cancel_delayed_work_sync) },
	{ 0xffeee9bf, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x4e6e7bd0, __VMLINUX_SYMBOL_STR(__skb_checksum) },
	{ 0x6b95fbcd, __VMLINUX_SYMBOL_STR(__genl_register_family) },
	{ 0x2cd29492, __VMLINUX_SYMBOL_STR(nf_register_hook) },
	{ 0x4629334c, __VMLINUX_SYMBOL_STR(__preempt_count) },
	{ 0x7a2af7b4, __VMLINUX_SYMBOL_STR(cpu_number) },
	{ 0x7ad9c285, __VMLINUX_SYMBOL_STR(skb_tx_error) },
	{ 0x27000b29, __VMLINUX_SYMBOL_STR(crc32c) },
	{ 0xb2f381c, __VMLINUX_SYMBOL_STR(ipv6_find_hdr) },
	{ 0xd55267d, __VMLINUX_SYMBOL_STR(nf_ct_deliver_cached_events) },
	{ 0xb4ae5098, __VMLINUX_SYMBOL_STR(kfree_skb_list) },
	{ 0x89f70df5, __VMLINUX_SYMBOL_STR(skb_scrub_packet) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0xc9ec4e21, __VMLINUX_SYMBOL_STR(free_percpu) },
	{ 0xe57e89fa, __VMLINUX_SYMBOL_STR(__dynamic_netdev_dbg) },
	{ 0x9d0d6206, __VMLINUX_SYMBOL_STR(unregister_netdevice_notifier) },
	{ 0xedb458dc, __VMLINUX_SYMBOL_STR(skb_trim) },
	{ 0x3308ad16, __VMLINUX_SYMBOL_STR(inet_proto_csum_replace16) },
	{ 0xe2d5255a, __VMLINUX_SYMBOL_STR(strcmp) },
	{ 0x36064fb2, __VMLINUX_SYMBOL_STR(skb_zerocopy_headlen) },
	{ 0x26fd4d47, __VMLINUX_SYMBOL_STR(netdev_master_upper_dev_link) },
	{ 0x830cfcba, __VMLINUX_SYMBOL_STR(inet_frag_find) },
	{ 0x4239894a, __VMLINUX_SYMBOL_STR(__netdev_alloc_skb) },
	{ 0x48a60682, __VMLINUX_SYMBOL_STR(netif_rx) },
	{ 0x45193d85, __VMLINUX_SYMBOL_STR(skb_vlan_push) },
	{ 0xf6179f1a, __VMLINUX_SYMBOL_STR(__pskb_pull_tail) },
	{ 0xfe7c4287, __VMLINUX_SYMBOL_STR(nr_cpu_ids) },
	{ 0xf1db1704, __VMLINUX_SYMBOL_STR(nla_memcpy) },
	{ 0x706d051c, __VMLINUX_SYMBOL_STR(del_timer_sync) },
	{ 0xf628757, __VMLINUX_SYMBOL_STR(kfree_skb_partial) },
	{ 0x8bbdd038, __VMLINUX_SYMBOL_STR(ip_defrag) },
	{ 0x8329e6f0, __VMLINUX_SYMBOL_STR(memset) },
	{ 0x742c474b, __VMLINUX_SYMBOL_STR(__nf_ct_ext_add_length) },
	{ 0x6d2fc5a6, __VMLINUX_SYMBOL_STR(net_namespace_list) },
	{ 0x98b12ebd, __VMLINUX_SYMBOL_STR(skb_checksum) },
	{ 0xc359ecf0, __VMLINUX_SYMBOL_STR(kernel_connect) },
	{ 0xdcc11ba8, __VMLINUX_SYMBOL_STR(unregister_pernet_subsys) },
	{ 0x9fdecc31, __VMLINUX_SYMBOL_STR(unregister_netdevice_many) },
	{ 0xf6388c56, __VMLINUX_SYMBOL_STR(sysctl_ip_default_ttl) },
	{ 0x8bb7c873, __VMLINUX_SYMBOL_STR(__nf_ct_ext_destroy) },
	{ 0x37befc70, __VMLINUX_SYMBOL_STR(jiffies_to_msecs) },
	{ 0x15c8b02b, __VMLINUX_SYMBOL_STR(__nf_conntrack_confirm) },
	{ 0x50eedeb8, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x14d1d393, __VMLINUX_SYMBOL_STR(ethtool_op_get_link) },
	{ 0x3c3fce39, __VMLINUX_SYMBOL_STR(__local_bh_enable_ip) },
	{ 0xb6e41883, __VMLINUX_SYMBOL_STR(memcmp) },
	{ 0xaa5080a, __VMLINUX_SYMBOL_STR(unregister_pernet_device) },
	{ 0x9109d1f8, __VMLINUX_SYMBOL_STR(dst_discard_sk) },
	{ 0x99591a7a, __VMLINUX_SYMBOL_STR(ipv6_ext_hdr) },
	{ 0x59c2d375, __VMLINUX_SYMBOL_STR(__skb_warn_lro_forwarding) },
	{ 0xc2d61475, __VMLINUX_SYMBOL_STR(gre_cisco_unregister) },
	{ 0x69718f19, __VMLINUX_SYMBOL_STR(free_netdev) },
	{ 0x62589d5, __VMLINUX_SYMBOL_STR(skb_ensure_writable) },
	{ 0xb4390f9a, __VMLINUX_SYMBOL_STR(mcount) },
	{ 0xd25d0abf, __VMLINUX_SYMBOL_STR(nla_put) },
	{ 0x1a5fa8f, __VMLINUX_SYMBOL_STR(inet_frags_fini) },
	{ 0x95fc22f2, __VMLINUX_SYMBOL_STR(netdev_upper_dev_unlink) },
	{ 0x370b4fbd, __VMLINUX_SYMBOL_STR(inet_frags_exit_net) },
	{ 0x73e20c1c, __VMLINUX_SYMBOL_STR(strlcpy) },
	{ 0x90b61872, __VMLINUX_SYMBOL_STR(kmem_cache_free) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{  0xecf18, __VMLINUX_SYMBOL_STR(skb_push) },
	{ 0xadf69c37, __VMLINUX_SYMBOL_STR(iptunnel_xmit) },
	{ 0xc5df1364, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x8c03d20c, __VMLINUX_SYMBOL_STR(destroy_workqueue) },
	{ 0xa1ccadf0, __VMLINUX_SYMBOL_STR(ip6_local_out_sk) },
	{ 0xe83b7058, __VMLINUX_SYMBOL_STR(kernel_sock_shutdown) },
	{ 0xfcca4501, __VMLINUX_SYMBOL_STR(dev_get_by_index_rcu) },
	{ 0x99517682, __VMLINUX_SYMBOL_STR(udp_encap_enable) },
	{ 0x16e5c2a, __VMLINUX_SYMBOL_STR(mod_timer) },
	{ 0xe81f109f, __VMLINUX_SYMBOL_STR(netlink_unicast) },
	{ 0xa735db59, __VMLINUX_SYMBOL_STR(prandom_u32) },
	{ 0x3d1d611, __VMLINUX_SYMBOL_STR(gro_find_complete_by_type) },
	{ 0xc3fa6a59, __VMLINUX_SYMBOL_STR(memchr) },
	{ 0x2b5f0837, __VMLINUX_SYMBOL_STR(skb_pull) },
	{ 0xc8b7b72c, __VMLINUX_SYMBOL_STR(ipv6_stub) },
	{ 0x66eb6adf, __VMLINUX_SYMBOL_STR(__skb_get_hash) },
	{ 0x72f9934c, __VMLINUX_SYMBOL_STR(rtnl_link_unregister) },
	{ 0xa37e78b6, __VMLINUX_SYMBOL_STR(flex_array_get) },
	{ 0xd046f1ae, __VMLINUX_SYMBOL_STR(__dev_get_by_index) },
	{ 0x9b6eb137, __VMLINUX_SYMBOL_STR(ksize) },
	{ 0xc0053923, __VMLINUX_SYMBOL_STR(module_put) },
	{ 0x3fc7cd32, __VMLINUX_SYMBOL_STR(eth_gro_receive) },
	{ 0xb2aa7b20, __VMLINUX_SYMBOL_STR(__secpath_destroy) },
	{ 0xbf3ea613, __VMLINUX_SYMBOL_STR(skb_vlan_pop) },
	{ 0x37b43c2e, __VMLINUX_SYMBOL_STR(rtnl_set_sk_err) },
	{ 0x59607777, __VMLINUX_SYMBOL_STR(skb_try_coalesce) },
	{ 0xa642e80f, __VMLINUX_SYMBOL_STR(udp_del_offload) },
	{ 0x5bd3e562, __VMLINUX_SYMBOL_STR(kmem_cache_alloc) },
	{ 0xfd51ccc2, __VMLINUX_SYMBOL_STR(dev_queue_xmit_sk) },
	{ 0xd73683d3, __VMLINUX_SYMBOL_STR(eth_gro_complete) },
	{ 0x427e6d5f, __VMLINUX_SYMBOL_STR(__nf_ct_expect_find) },
	{ 0x3b3a0843, __VMLINUX_SYMBOL_STR(nf_ipv6_ops) },
	{ 0x39019ab8, __VMLINUX_SYMBOL_STR(__alloc_skb) },
	{ 0x853abc85, __VMLINUX_SYMBOL_STR(ipv6_skip_exthdr) },
	{ 0xa2929eef, __VMLINUX_SYMBOL_STR(netlink_broadcast) },
	{ 0xbba70a2d, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_bh) },
	{ 0x3f616ce2, __VMLINUX_SYMBOL_STR(queue_delayed_work_on) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x4f391d0e, __VMLINUX_SYMBOL_STR(nla_parse) },
	{ 0x579fbcd2, __VMLINUX_SYMBOL_STR(cpu_possible_mask) },
	{ 0x94f0b87e, __VMLINUX_SYMBOL_STR(netdev_rx_handler_unregister) },
	{ 0x55dd3a5f, __VMLINUX_SYMBOL_STR(skb_checksum_help) },
	{ 0x3a5702bb, __VMLINUX_SYMBOL_STR(inet_frag_maybe_warn_overflow) },
	{ 0x6ca5b0f8, __VMLINUX_SYMBOL_STR(__net_get_random_once) },
	{ 0x3578c6ff, __VMLINUX_SYMBOL_STR(kfree_skb) },
	{ 0x4dec4acb, __VMLINUX_SYMBOL_STR(gre_cisco_register) },
	{ 0x1acfb2e7, __VMLINUX_SYMBOL_STR(inet_frag_destroy) },
	{ 0xbc435770, __VMLINUX_SYMBOL_STR(dump_stack) },
	{ 0xd9a6f08e, __VMLINUX_SYMBOL_STR(alloc_netdev_mqs) },
	{ 0x82099221, __VMLINUX_SYMBOL_STR(eth_type_trans) },
	{ 0x78312973, __VMLINUX_SYMBOL_STR(nf_connlabels_replace) },
	{ 0xa271902c, __VMLINUX_SYMBOL_STR(register_pernet_subsys) },
	{ 0x64d0f439, __VMLINUX_SYMBOL_STR(pskb_expand_head) },
	{ 0x7e883cf6, __VMLINUX_SYMBOL_STR(ether_setup) },
	{ 0xe4bd73f1, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0xe259ae9e, __VMLINUX_SYMBOL_STR(_raw_spin_lock) },
	{ 0x449780c, __VMLINUX_SYMBOL_STR(iptunnel_handle_offloads) },
	{ 0x7ecb001b, __VMLINUX_SYMBOL_STR(__per_cpu_offset) },
	{ 0x2a18c74, __VMLINUX_SYMBOL_STR(nf_conntrack_destroy) },
	{ 0x468d8598, __VMLINUX_SYMBOL_STR(kmem_cache_create) },
	{ 0xf487f545, __VMLINUX_SYMBOL_STR(unregister_netdevice_queue) },
	{ 0xabc81ffc, __VMLINUX_SYMBOL_STR(ip_route_output_flow) },
	{ 0x85b141a7, __VMLINUX_SYMBOL_STR(rtnl_create_link) },
	{ 0xf6ebc03b, __VMLINUX_SYMBOL_STR(net_ratelimit) },
	{ 0xdb8379e7, __VMLINUX_SYMBOL_STR(netlink_set_err) },
	{ 0x7a4b576, __VMLINUX_SYMBOL_STR(flex_array_free) },
	{ 0x75372f55, __VMLINUX_SYMBOL_STR(nf_unregister_hook) },
	{ 0xfa7913e7, __VMLINUX_SYMBOL_STR(eth_validate_addr) },
	{ 0x1e047854, __VMLINUX_SYMBOL_STR(warn_slowpath_fmt) },
	{ 0xa7bc31de, __VMLINUX_SYMBOL_STR(dev_set_promiscuity) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x4a619f83, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x85b5d755, __VMLINUX_SYMBOL_STR(udp_set_csum) },
	{ 0xa75312bc, __VMLINUX_SYMBOL_STR(call_rcu_sched) },
	{ 0xef496e60, __VMLINUX_SYMBOL_STR(___pskb_trim) },
	{ 0x8cf4cf08, __VMLINUX_SYMBOL_STR(genlmsg_put) },
	{ 0xaf310cab, __VMLINUX_SYMBOL_STR(kernel_bind) },
	{ 0x94cbe3b9, __VMLINUX_SYMBOL_STR(rtnl_link_register) },
	{ 0x13315729, __VMLINUX_SYMBOL_STR(flex_array_alloc) },
	{ 0x53569707, __VMLINUX_SYMBOL_STR(this_cpu_off) },
	{ 0x720f80bb, __VMLINUX_SYMBOL_STR(iptunnel_pull_header) },
	{ 0x4497c407, __VMLINUX_SYMBOL_STR(nf_ct_helper_ext_add) },
	{ 0xb2d48a2e, __VMLINUX_SYMBOL_STR(queue_work_on) },
	{ 0xff447220, __VMLINUX_SYMBOL_STR(nla_reserve) },
	{ 0xfd571fab, __VMLINUX_SYMBOL_STR(inet_frags_init) },
	{ 0x8235805b, __VMLINUX_SYMBOL_STR(memmove) },
	{ 0x7d50a24, __VMLINUX_SYMBOL_STR(csum_partial) },
	{ 0x4665071f, __VMLINUX_SYMBOL_STR(consume_skb) },
	{ 0x21bda38a, __VMLINUX_SYMBOL_STR(param_ops_ushort) },
	{ 0xde32e965, __VMLINUX_SYMBOL_STR(ip6_dst_hoplimit) },
	{ 0x85670f1d, __VMLINUX_SYMBOL_STR(rtnl_is_locked) },
	{ 0x5e515be6, __VMLINUX_SYMBOL_STR(ktime_get_ts64) },
	{ 0x2a0c8657, __VMLINUX_SYMBOL_STR(genl_notify) },
	{ 0x600ef88d, __VMLINUX_SYMBOL_STR(skb_put) },
	{ 0x40ee9558, __VMLINUX_SYMBOL_STR(eth_mac_addr) },
	{ 0x9a1ea89c, __VMLINUX_SYMBOL_STR(skb_copy_bits) },
	{ 0x7d0b2496, __VMLINUX_SYMBOL_STR(skb_morph) },
	{ 0xe91a29f5, __VMLINUX_SYMBOL_STR(inet_get_local_port_range) },
	{ 0x6e720ff2, __VMLINUX_SYMBOL_STR(rtnl_unlock) },
	{ 0x1fc7f17a, __VMLINUX_SYMBOL_STR(try_module_get) },
	{ 0x8928b90, __VMLINUX_SYMBOL_STR(__nla_put) },
	{ 0x23452213, __VMLINUX_SYMBOL_STR(dev_get_stats) },
	{ 0x9fd7cda1, __VMLINUX_SYMBOL_STR(flex_array_prealloc) },
	{ 0x54ccc40b, __VMLINUX_SYMBOL_STR(__skb_checksum_complete) },
	{ 0xe914e41e, __VMLINUX_SYMBOL_STR(strcpy) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=nf_conntrack,nf_defrag_ipv6,libcrc32c,gre";


MODULE_INFO(srcversion, "627A2D70EF7366B1B7874E5");
