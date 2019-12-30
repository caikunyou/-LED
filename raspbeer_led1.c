#include <linux/module.h>
MODULE_AUTHOR("CAI KUNYOU ");
MODULE_DESCRIPTION("driver for LED control");
MODULE_LICENSE("GPL");
MODULE_VERSION("0.1");

static int __init init_mod(void) //カーネルモジュールの初期化
{
    int retval;
    retval =  alloc_chrdev_region(&dev, 0, 1, "myled");
    if(retval < 0){
        printk(KERN_ERR "alloc_chrdev_region failed.\n");
        return retval;
    }
     
     printk(KERN_INFO "%s is loaded.\n",__FILE__);       
     return 0;
}

static void __exit cleanup_mod(void) //後始末
{
     unregister_chrdev_region(dev, 1);     
     printk(KERN_INFO "%s is unloaded.\n",__FILE__);
}

module_init(init_mod);     // マクロで関数を登録
module_exit(cleanup_mod);  // 同上