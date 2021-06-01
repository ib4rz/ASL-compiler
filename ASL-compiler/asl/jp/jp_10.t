function prod_escalar
  params
    _result
    a1
    a2
  endparams

  vars
    i 1
    s 1
  endvars

     %2 = 0
     s = %2
  label while1 :
     %3 = 10
     %4 = i < %3
     ifFalse %4 goto endWhile1
     %7 = 1
     %7 =  * %7
     %8 = a1
     %6 = %8[%7]
     %10 = 1
     %10 =  * %10
     %11 = a2
     %9 = %11[%10]
     %12 = %6 * %9
     %13 = s + %12
     s = %13
     %15 = 1
     %16 = i + %15
     i = %16
     goto while1
  label endWhile1 :
     _result = s
     return
endfunction

function main
  vars
    i 1
    v1 10
    v2 10
  endvars

     %2 = 0
     i = %2
  label while1 :
     %3 = 10
     %4 = i < %3
     ifFalse %4 goto endWhile1
     %5 = 1
     %5 =  * %5
     %6 = - i
     v1[%5] = %6
     %7 = 1
     %7 =  * %7
     %8 = i * i
     v2[%7] = %8
     %10 = 1
     %11 = i + %10
     i = %11
     goto while1
  label endWhile1 :
     pushparam 
     %13 = &v1
     pushparam %13
     %14 = &v2
     pushparam %14
     call prod_escalar
     popparam 
     popparam 
     popparam %12
     writei %12
     writeln
     return
endfunction


