
int wo_mount(char* file_name, void* mem_addr);
int wo_unmount(void* mem_addr);

int wo_open(char* file_name, int flags);
int wo_open(char* file_name, int flags, int mode);

int wo_read(int fd, void* buff, int bytes);
int wo_write(int fd, void* buff, int bytes);
int wo_close(int fd);
