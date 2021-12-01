#include <fcntl.h>
#include <iostream>
#include <string>
#include <unistd.h>
#include <stdlib.h>
#include <thread>

int i = 0;

void foo(){
		char buf[1000000];
		std::cout << i++ << std::endl;
}

int main (void){	 

	int a, b, c, d, i, f;

	int *a1 = new int (0), 
	*b1 = new int (0), 
	*c1 = new int (0),
	*cb = new int (0); 

	printf("%u\n", a1);
	printf("%u\n", b1);
	printf("%u\n", c1);
	printf("%u\n", cb);


	// printf("%u\n", &a);
	// printf("%u\n", &b);
	// printf("%u\n", &c);
	// printf("%u\n", &d);
	// printf("%u\n", &i);
	// int i  = -1;
	// fcntl(0, F_SETFL, O_NONBLOCK );

	// while(true){
	// i = read(0, buf, 999);
	// std::cout << i << std::endl;
	// buf[i] = 0;
	// std::cout << "инавернавывестиi!!!" << std::endl;
	// if (i > -1){
	// 	std::cout << buf << std::endl;
	// }
	// }
	return (0);
}