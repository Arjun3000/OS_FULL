📘 Day 2: Process Management – Notes
🔹 1. Process Life Cycle
State	Description
New	Process is being created.
Ready	Waiting for CPU to run.
Running	Currently being executed by the CPU.
Waiting	Waiting for I/O or a resource.
Terminated	Process has completed or was stopped.

⏩ Transition flow:
New ➡ Ready ➡ Running ➡ (Waiting/Ready) ➡ Running ➡ Terminated

🔹 2. PCB (Process Control Block)
A data structure maintained by the OS for every process.
Stores:

PID (Process ID)

Process State

Program Counter

CPU Registers

Memory Limits

I/O Info

Priority / Scheduling info

🧠 Think of PCB as the process's report card.

🔹 3. Context Switching
CPU switches from one process to another.

OS saves the current state in PCB and loads the new process’s state.

Too many switches = overhead.

🧠 Like switching apps while remembering exactly where you left off.

🔹 4. Scheduling Algorithms
Algorithm	Type	Description
FCFS	Non-preemptive	First come, first served.
SJF	Non-preemptive / Preemptive	Shortest job runs first (can cause starvation).
Round Robin	Preemptive	Each process gets fixed time (time quantum).
Priority	Both	Based on priority level. May cause starvation.

🔹 5. Key Points Recap
A process must go from waiting ➡ ready ➡ running (not directly waiting ➡ running).

SJF may starve long processes.

If context switch is faulty, the process can crash or behave incorrectly.

In Round Robin:

Too small time → too much context switching.

Too big time → feels like FCFS.

PCB is always used, not just during running.