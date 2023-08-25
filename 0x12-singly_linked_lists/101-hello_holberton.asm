section .text
	global main
section .data
	message: db "Hello, Holberton", 0
	format: db "%s", 10, 0
extern printf
main:
	mov esi, message
	mov edi, format
	mov eax, 0
	call printf

	mov eax, 0
	ret
