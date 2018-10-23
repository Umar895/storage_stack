#include<linux/init.h>
#include<linux/module.h>


static void blockdev_req_init(){



}


static void blockdev_preset(){



}

static void blockdev_sysfs_stats_exit(){



}



static void blockdev_sysfs_stats_init(){




}


/* initialization functio of the blockdevice 
 * functionality:
 *	* allocate memory to the device
 *	* configuring the device
 *	* init core components
 */
static void blockdev_init(struct gendisk *sdisk){

	



}


/* deallocating all the memory 
 * destorying the runnign config
 * 
 */
static void blockdev_exit(void){



}



/* The initialization of the block device in static struct */
static struct register_device targ_dev = {
	.name		= "super_ssd",
	.version 	= {1,0,0},
	
	.req_init	= blockdev_req_init,
	.preset		= blockdev_preset,

	.init		= blockdev_init,
	.exit		= blockdev_exit,

	.sysfs_init	= blockdev_sysfs_stats_init,
	.sysfs_exit	= blockdev_sysfs_stats_exit,

	.owner		= THIS_MODULE,


};

/* registering the ssd device module */
static int blockdev_module_init(void){


	int ret;

	ret = register_device(&targ_dev);

	return ret;
	
}

static void blockdev_module_exit(void){


}

module_init(blockdev_module_init);
module_exit(blockdev_module_exit);
