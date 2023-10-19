global main
	extern printf
main
 mov edi,fmt
   mov esi,msg
   mov eax,0
   call printf
fmt db "Hello, Holberton", 0
