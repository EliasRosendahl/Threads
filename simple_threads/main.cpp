#include <iostream>
#include <pthread.h>
#include <unistd.h>


void* say_hello(void* threadid){
	while(1){
	std::cout << "Press Enter to terminate" << std::endl;
	sleep(1);
	}
}

int main(){
	int rc;
	pthread_t thid; //Thread id
	
	rc = pthread_create(&thid, NULL, say_hello, NULL);
	std::getchar();
}
