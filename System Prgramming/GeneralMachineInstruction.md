# General Machine Instruction
<img src="https://data.crazyengineers.com/old-attachments/0/621-general-machine-structure.png"></img>

1. `Location Counter`(LC): Stores Every Instruction address 
1. `Instruction Register`(IR): It is a register which is going to store information
1. `Instruction Interpreter`: It just decode the information
1. `General Registers`(R0-R15): They are used by programmers as storage location for special functions.
    - There are 16 register R0-R15 32bit each
1. `Working Register`(Scratch Pad): They are the memory devices that serves as scracth pad as instruction for the interpreter
1. `Memory Adress Register`(MAR): contain the adress of the memory that is to read from or store 
1. `Memory Buffer Register`(MBR): It contains the copy of the content of the memory location whoes adress is stored in `MAR`. The primary interface b/w the memory and the cpu is through memory buffer register
1. `Memory Controller`: It is a hardware device whoes work is to transfer the content of `MBR` to core memory location whose adress is stored in `MAR`
1. `I/O CHannel`: It is used for inputting/outputting info from the memory