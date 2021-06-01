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

     %1 = 0
     s = %1
  label while1 :
     %2 = 10
     %3 = i < %2
     ifFalse %3 goto endWhile1
     %5 = 1
     %5 = i * %5
     %6 = a1
     %4 = %6[%5]
     %8 = 1
     %8 = i * %8
     %9 = a2
     %7 = %9[%8]
     %10 = %4 * %7
     %11 = s + %10
     s = %11
     %12 = 1
     %13 = i + %12
     i = %13
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

     %1 = 0
     i = %1
  label while1 :
     %2 = 10
     %3 = i < %2
     ifFalse %3 goto endWhile1
     %4 = 1
     %4 = i * %4
     %5 = - i
     v1[%4] = %5
     %6 = 1
     %6 = i * %6
     %7 = i * i
     v2[%6] = %7
     %8 = 1
     %9 = i + %8
     i = %9
     goto while1
  label endWhile1 :
     pushparam 
     %11 = &v1
     pushparam %11
     %12 = &v2
     pushparam %12
     call prod_escalar
     popparam 
     popparam 
     popparam %10
     writei %10
     writeln
     return
endfunction


