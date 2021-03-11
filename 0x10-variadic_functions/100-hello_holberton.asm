section .data
msg db "Hello, Holberton ",10 ;String gets initialized
section .text;.text starts here
global main;Moving to main
main:;_start label
mov rax,1;Sys_Write Function
mov rdi,1;Std_Out File Descriptor
mov rsi,msg;Offset of msg
mov rdx, 17;Length Of msg
syscall	;Call the Kernel

