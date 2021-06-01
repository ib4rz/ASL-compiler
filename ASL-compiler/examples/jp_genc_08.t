function x2
  params
    _result
    a
  endparams

  vars
    i 1
    n 1
  endvars

     %1 = 0
     n = %1
     %2 = 0
     i = %2
  label while1 :
     %3 = 10
     %4 = i < %3
     ifFalse %4 goto endWhile1
     %6 = 1
     %6 = i * %6
     %7 = a
     %5 = %7[%6]
     %8 = 0
     %9 = %5 == %8
     ifFalse %9 goto endif1
     %10 = 1
     %11 = n + %10
     n = %11
  label endif1 :
     %13 = a
     %12 = 1
     %12 = i * %12
     %15 = 1
     %15 = i * %15
     %16 = a
     %14 = %16[%15]
     %17 = 2
     %18 = %14 * %17
     %13[%12] = %18
     %20 = 1
     %20 = i * %20
     %21 = a
     %19 = %21[%20]
     writei %19
     writeln
     %23 = 1
     %24 = i + %23
     i = %24
     goto while1
  label endWhile1 :
     _result = n
     return
endfunction

function main
  vars
    x 10
    i 1
    z 1
  endvars

     %1 = 0
     i = %1
  label while1 :
     %2 = 10
     %3 = i < %2
     ifFalse %3 goto endWhile1
     %4 = 1
     %4 = i * %4
     x[%4] = i
     %5 = 1
     %6 = i + %5
     i = %6
     goto while1
  label endWhile1 :
     %7 = 0
     i = %7
  label while2 :
     %8 = 10
     %9 = i < %8
     ifFalse %9 goto endWhile2
     %11 = 1
     %11 = i * %11
     %10 = x[%11]
     writei %10
     writeln
     %13 = 1
     %14 = i + %13
     i = %14
     goto while2
  label endWhile2 :
     pushparam 
     %16 = &x
     pushparam %16
     call x2
     popparam 
     popparam %15
     z = %15
     %17 = 'z'
     writec %17
     %17 = ':'
     writec %17
     writei z
     writeln
     %19 = 0
     i = %19
  label while3 :
     %20 = 10
     %21 = i < %20
     ifFalse %21 goto endWhile3
     %22 = 'x'
     writec %22
     %22 = '['
     writec %22
     writei i
     %23 = ']'
     writec %23
     %23 = '='
     writec %23
     %25 = 1
     %25 = i * %25
     %24 = x[%25]
     writei %24
     writeln
     %27 = 1
     %28 = i + %27
     i = %28
     goto while3
  label endWhile3 :
     return
endfunction


