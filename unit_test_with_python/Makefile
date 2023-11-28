ALL_FILES := *.c

test:
	@for file in $(ALL_FILES); do \
		echo ${"$$file"//.c}; \
	done
# cc -fPIC -shared -o my_function.so my_function.c

# TODO: remove the ".c" to compile each module separately