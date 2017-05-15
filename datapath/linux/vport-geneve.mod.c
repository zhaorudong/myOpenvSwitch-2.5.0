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
	{ 0xc6a80444, __VMLINUX_SYMBOL_STR(rpl_geneve_xmit) },
	{ 0x384eca7, __VMLINUX_SYMBOL_STR(ovs_netdev_tunnel_destroy) },
	{ 0x88d1d60, __VMLINUX_SYMBOL_STR(ovs_vport_ops_unregister) },
	{ 0xffbce0aa, __VMLINUX_SYMBOL_STR(__ovs_vport_ops_register) },
	{ 0x66eb6adf, __VMLINUX_SYMBOL_STR(__skb_get_hash) },
	{ 0xcea13b44, __VMLINUX_SYMBOL_STR(ovs_tunnel_get_egress_info) },
	{ 0xb0740be3, __VMLINUX_SYMBOL_STR(ovs_vport_free) },
	{ 0x1bb02336, __VMLINUX_SYMBOL_STR(ovs_netdev_link) },
	{ 0x6e720ff2, __VMLINUX_SYMBOL_STR(rtnl_unlock) },
	{ 0xaa06e53, __VMLINUX_SYMBOL_STR(dev_change_flags) },
	{ 0xc755407, __VMLINUX_SYMBOL_STR(rpl_geneve_dev_create_fb) },
	{ 0xc7a4fbed, __VMLINUX_SYMBOL_STR(rtnl_lock) },
	{ 0x735a410e, __VMLINUX_SYMBOL_STR(ovs_vport_alloc) },
	{ 0xcd279169, __VMLINUX_SYMBOL_STR(nla_find) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0xd25d0abf, __VMLINUX_SYMBOL_STR(nla_put) },
	{ 0xb4390f9a, __VMLINUX_SYMBOL_STR(mcount) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=openvswitch";


MODULE_INFO(srcversion, "A2B6A68A7D261A7091C3886");
