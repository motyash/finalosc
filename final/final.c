#include <linux/init.h>
#include <linux/kernel.h>
#include <linux/module.h>


MODULE_LICENSE("GPL");
MODULE_AUTHOR("AY, YA, KA, SD");
MODULE_DESCRIPTION(" iou");

static int __init ye_init(void)
{
      printk(KERN_INFO "uay\n");
      return 0;
}

static void __exit ye_exit(void)
{
printk(KERN_INFO "goodbye\n");
}

module_init(ye_init);
module_exit(ye_exit);      
      
