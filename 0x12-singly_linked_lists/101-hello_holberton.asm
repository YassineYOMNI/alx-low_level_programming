; File: 101-hello_holberton.asm
; Auth: Mohammed Aitouaaziz
; Desc: 64-bit assembly program that prints
;	Hello, Holberton followed by a new line.

extern printf

section .data
db "Hello, Holberton, 0
db "%s", 10, 0

section .text

global main

push rbp

mov rdi,format
mov rsi,message
mov rax,0
call printf

pop rbp

mov rax,0
ret
