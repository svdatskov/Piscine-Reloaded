find . -type f -name '*.sh'\
	-execdir sh -c 'echo "${1%.sh}"' sh {} \;
