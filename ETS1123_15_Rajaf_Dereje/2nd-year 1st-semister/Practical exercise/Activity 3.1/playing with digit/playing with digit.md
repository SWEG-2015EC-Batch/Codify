
for a, b , c and d
High level analysis :
       input: a number
       output: the reverse of the number, the digit number, the sum of the digits and product of the digits
       process: divide each digit of the number
                add the digits
                multiply the digits
                print the digits in reverse

psudocode:
step 1:start
step 1:read num
step 3: compute mod=num%10
        count++
        compute num = num/10
        compute reverse=reverse*10 + mod  
        compute product *=mod
        compute sum+=mod until num become 0
step 4: print reverse, sum, product
step 5:end

psudocode: for d, e ,f
step 1:start
step 1:read num
step 3: compute last=num%10
        first = num/pow(10,count - 1)
        sum = first + last
        num=num/10
        middle= num%pow(10,count - 2)
        new = last*pow(10,count - 1) + middle*10 + first
       
step 4: print first and last, sum,new
step 5:end

