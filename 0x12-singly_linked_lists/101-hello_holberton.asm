	global   main
	  extern    printf
main:
	  xor   eax, eax
	  mov   edi, format
	  call  printf
	  mov   eax, 0
	  ret
format: db `Hello, Holberton\n`,0
