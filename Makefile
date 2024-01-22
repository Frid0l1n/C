run:
	@gcc -o ${file} ${file}.c
	@./${file}
	@rm ${file}