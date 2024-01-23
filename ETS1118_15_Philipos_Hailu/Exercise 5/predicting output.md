Output#1
Assume the address of V is ‘oxc00000’  

 0 oxc00000
 oxc00000 oxc000008
 0 oxc0000c

outcome #2
58 58 58

outcome #3
k=4
x=950
y=3000
k=14
k=28

output #4
line   i   j   ptr   pptr
4      5   10  &i    dangling
5      5   10  &i    &ptr
6      3   10  &i    &ptr
7      7   10  &i    &ptr
8      7   10  &j    &ptr
9      7    9  &j    &ptr
10     7    9  &i    &ptr
11    -2    9  &i    &ptr

output #5
assume the addres of i is ‘oxc00000’  
5 oxc00004
10 oxc00008

output #6
a[0] = 6
a[1] = 5
a[2] = 6
a[3] = 7
a[4] = 9.8

output #7
a[0] = 6
a[1] = 5
a[2] = 6
a[3] = 7
a[4] = 9.8

output #8




