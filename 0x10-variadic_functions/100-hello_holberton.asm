section .data
msg db "Hello, Holberton ",10
section .text
global main
main:
		mov rax, 1;Sys_Write Function
		mov rdi, 1;Std_Out File Descriptor
		mov rsi, msg;Offset of msg
		mov rdx, 17;Length Of msg
		syscall	;Call the Kernel

