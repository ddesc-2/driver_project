obj-m := mymodule.o

all:
	make -C /home/ddesc/linux-6.6.5/buildroot/output/build/linux-6.6.32 M=$(PWD) modules

clean:
	make -C /home/ddesc/linux-6.6.5/buildroot/output/build/linux-6.6.32 M=$(PWD) clean

