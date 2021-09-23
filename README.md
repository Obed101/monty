<h1>The Monty language</h1>

Monty 0.98 is a scripting language that is first compiled into Monty byte codes (Just like Python). It relies on a unique stack, with specific instructions to manipulate it. The goal of this project is to create an interpreter for Monty ByteCodes files.

Monty byte code files

Files containing Monty byte codes usually have the .m extension. Most of the industry uses this standard but it is not required by the specification of the language. There is not more than one instruction per line. There can be any number of spaces before or after the opcode and its argument:

...
yourprompt@ubuntu:~/monty$ cat bytecodes/06.m
push 1
pint
push 2
pint
push 3
pint
yourprompt@ubuntu:~/monty$ ./monty bytecodes/006.m
1
2
3
yourprompt@ubuntu:~/monty$
```
-Available Operation Codes:
push pall pint pop swap add nop sub div mul mod # pchar stack pstr queue rotl rotr 
