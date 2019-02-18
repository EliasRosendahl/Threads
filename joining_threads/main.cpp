#include <pthread.h>
#include <unistd.h>
#include <iostream>

// Take note of the order of the print statements


void* delay(void* threadid){
	std::cout << "Entering thread" << std::endl;
	sleep(1);
	std::cout << "Exiting thread" << std::endl;
	pthread_exit(NULL);
}

int main(){
	int errno;
	pthread_t thid; //Thread id
	if(pthread_create(&thid, NULL, delay, NULL)){
		std::cout << "Could not create thread" << std::endl;
	}

	std::cout << "Joining thread" << std::endl;	
	void* ret;
	errno = pthread_join(thid, &ret);
	
	if(errno){
		// A return value of three means
		//that the thread we are trying to
		// join does not exist
		std::cout << "Could not join threads, errno: " << errno << std::endl;
	}

	return 0;
}


