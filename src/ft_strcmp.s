global ft_strcmp

section .text

ft_strcmp:
    mov rax, 0

.loop:
    mov al, [rdi]
    cmp al, [rsi]
    jne .different
    cmp byte [rdi], 0
    je .end
    inc rdi
    inc rsi
    jmp .loop


.different:
    mov dl ,[rsi]
    movzx eax, al
    movzx edx, dl
    sub eax, edx 
    ret

.end:
    ret