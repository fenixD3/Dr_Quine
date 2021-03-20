; This program print itself

global _main
extern _printf

section .data
source_code db "; This program print itself%1$c%1$cglobal _main%1$cextern _printf%1$c%1$csection .data%1$csource_code db %4$c%3$s%4$c, 0%1$c%1$csection .text%1$c_main:%1$c%4$cpush rbx%1$c%4$clea rdi, [rel source_code]%1$c%4$cmov rsi, 10%1$c%4$cmov rdx, 34%1$c%4$clea rcx, [rel source_code]%1$c%4$cmov rbp, 9%1$c%4$c; I get my code here%1$c%4$ccall _printf%1$c%4$cpop rbx%1$c%4$ccall return%1$c%1$creturn:%1$c%4$cret%1$c", 0

section .text
_main:
    push rbx
    lea rdi, [rel source_code]
    mov rsi, 10
    mov rdx, 34
    lea rcx, [rel source_code]
    mov rbp, 9
    ; I get my code here
    call _printf
    pop rbx
    call return

return:
    ret
