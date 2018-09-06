com = gcc
src = testing_c.c
mac = testing_c.o
out = output

output:$(mac)
	$(com) $(mac) -lm -o $(out)
	
$(mac):$(src)
	$(com) -c $(src)
	
clean:
	rm *.o $(out)
	