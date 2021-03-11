section .data;.data starts here
msg db 10d,13d, "Hello, Holberton " ;String gets initialized
section .text;.text starts here
		global main;Moving to _start
main:;_start label
mov rax,1;Sys_Write Function
mov rdi,1;Std_Out File Descriptor
mov rsi,msg;Offset of msg
mov rdx, 17;Length Of msg
syscall	;Call the Kernel
mov rax,60;Sys_Exit Function
mov rdi, 1;Sucessful Termination
syscall	;Call The Kernel
