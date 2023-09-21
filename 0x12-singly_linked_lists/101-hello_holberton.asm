section .data
    hello db "Hello, Holberton",10,0  ; The string to be printed with a newline character

section .text
    global main

    extern printf

main:
    ; Prepare the stack for the printf call
    sub rsp, 8

    ; Call printf
    mov rdi, hello
    call printf

    ; Restore the stack pointer
    add rsp, 8

    ; Exit the program
    mov rax, 60         ; syscall number for exit
    xor rdi, rdi        ; status: 0
    syscall
