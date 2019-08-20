# NOTE: Assertions have been autogenerated by utils/update_mca_test_checks.py
# RUN: llvm-mca -mtriple=x86_64-unknown-unknown  -mcpu=haswell -iterations=1 -resource-pressure=false -instruction-info=false -timeline < %s | FileCheck %s -check-prefix=ALL -check-prefix=HASWELL

# RUN: llvm-mca -mtriple=x86_64-unknown-unknown -mcpu=broadwell -iterations=1 -resource-pressure=false -instruction-info=false -timeline < %s | FileCheck %s -check-prefix=ALL -check-prefix=BDWELL

# RUN: llvm-mca -mtriple=x86_64-unknown-unknown -mcpu=skylake -iterations=1 -resource-pressure=false -instruction-info=false -timeline < %s | FileCheck %s -check-prefix=ALL -check-prefix=SKYLAKE

# RUN: llvm-mca -mtriple=x86_64-unknown-unknown -mcpu=znver1 -iterations=1 -resource-pressure=false -instruction-info=false -timeline < %s | FileCheck %s -check-prefix=ALL -check-prefix=ZNVER1

vaddps %xmm0, %xmm0, %xmm2
vfmadd213ps (%rdi), %xmm1, %xmm2

# ALL:          Iterations:        1
# ALL-NEXT:     Instructions:      2

# BDWELL-NEXT:  Total Cycles:      13
# BDWELL-NEXT:  Total uOps:        3

# HASWELL-NEXT: Total Cycles:      14
# HASWELL-NEXT: Total uOps:        3

# SKYLAKE-NEXT: Total Cycles:      13
# SKYLAKE-NEXT: Total uOps:        3

# ZNVER1-NEXT:  Total Cycles:      15
# ZNVER1-NEXT:  Total uOps:        2

# BDWELL:       Dispatch Width:    4
# BDWELL-NEXT:  uOps Per Cycle:    0.23
# BDWELL-NEXT:  IPC:               0.15
# BDWELL-NEXT:  Block RThroughput: 1.0

# HASWELL:      Dispatch Width:    4
# HASWELL-NEXT: uOps Per Cycle:    0.21
# HASWELL-NEXT: IPC:               0.14
# HASWELL-NEXT: Block RThroughput: 1.0

# SKYLAKE:      Dispatch Width:    6
# SKYLAKE-NEXT: uOps Per Cycle:    0.23
# SKYLAKE-NEXT: IPC:               0.15
# SKYLAKE-NEXT: Block RThroughput: 1.0

# ZNVER1:       Dispatch Width:    4
# ZNVER1-NEXT:  uOps Per Cycle:    0.13
# ZNVER1-NEXT:  IPC:               0.13
# ZNVER1-NEXT:  Block RThroughput: 1.0

# ALL:          Timeline view:

# BDWELL-NEXT:                      012
# HASWELL-NEXT:                     0123
# SKYLAKE-NEXT:                     012
# ZNVER1-NEXT:                      01234

# ALL-NEXT:     Index     0123456789

# BDWELL:       [0,0]     DeeeER    . .   vaddps	%xmm0, %xmm0, %xmm2
# BDWELL-NEXT:  [0,1]     DeeeeeeeeeeER   vfmadd213ps	(%rdi), %xmm1, %xmm2

# HASWELL:      [0,0]     DeeeER    .  .   vaddps	%xmm0, %xmm0, %xmm2
# HASWELL-NEXT: [0,1]     DeeeeeeeeeeeER   vfmadd213ps	(%rdi), %xmm1, %xmm2

# SKYLAKE:      [0,0]     DeeeeER   . .   vaddps	%xmm0, %xmm0, %xmm2
# SKYLAKE-NEXT: [0,1]     DeeeeeeeeeeER   vfmadd213ps	(%rdi), %xmm1, %xmm2

# ZNVER1:       [0,0]     DeeeER    .   .   vaddps	%xmm0, %xmm0, %xmm2
# ZNVER1-NEXT:  [0,1]     DeeeeeeeeeeeeER   vfmadd213ps	(%rdi), %xmm1, %xmm2

# ALL:          Average Wait times (based on the timeline view):
# ALL-NEXT:     [0]: Executions
# ALL-NEXT:     [1]: Average time spent waiting in a scheduler's queue
# ALL-NEXT:     [2]: Average time spent waiting in a scheduler's queue while ready
# ALL-NEXT:     [3]: Average time elapsed from WB until retire stage

# ALL:                [0]    [1]    [2]    [3]
# ALL-NEXT:     0.     1     1.0    1.0    0.0       vaddps	%xmm0, %xmm0, %xmm2
# ALL-NEXT:     1.     1     1.0    0.0    0.0       vfmadd213ps	(%rdi), %xmm1, %xmm2