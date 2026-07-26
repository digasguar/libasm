global ft_strcpy

section .text

ft_strcpy:
    mov   rax, rdi

.loop:
    mov dl, [rsi]
    mov [rdi], dl

    cmp dl, 0
    je .end
    inc rsi
    inc rdi
    jmp .loop
.end:
    ret
