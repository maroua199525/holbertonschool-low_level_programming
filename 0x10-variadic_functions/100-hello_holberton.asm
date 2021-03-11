section .data;.data starts here
msg db "Hello, Holberton " ;String gets initialized
section .text;.text starts here
		global _start;Moving to _start
_start:;_start label
		mov rax,1;Sys_Write Function
		mov rdi,1;Std_Out File Descriptor
		mov rsi,msg;Offset of msg
		mov rdx,17;Length Of msg
		syscall	;Call the Kernel

		mov rax,60;Sys_Exit Function
		mov rdi,0;Sucessful Termination
		syscall	;Call The Kernel
end:;end Label
