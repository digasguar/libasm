global ft_read

extern __errno_location

section .text

ft_read:
    mov rax, 0
    syscall
    cmp rax, 0
    jl .error
    ret
.error:
    neg rax
    mov edx, eax

    call __errno_location wrt ..plt

    mov [rax], edx
    mov rax, -1
    ret