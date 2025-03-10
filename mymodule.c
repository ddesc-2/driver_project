#include <linux/module.h>
#include <linux/kernel.h>


static int __init hello_init(void)
{
    printk(KERN_INFO "Hello, QEMU!\n");
    return 0;
}

static void __exit hello_exit(void)
{
    printk(KERN_INFO "Goodbye, QEMU!\n");
}

module_init(hello_init);
module_exit(hello_exit);

MODULE_LICENSE("GPL");
MODULE_AUTHOR("YourName");
MODULE_DESCRIPTION("A simple test module for QEMU");

