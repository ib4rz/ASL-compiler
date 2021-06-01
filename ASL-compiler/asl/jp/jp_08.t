function x2
  params
    _result
    a
  endparams

  vars
    i 1
    n 1
  endvars

     %2 = 0
     n = %2
     %4 = 0
     i = %4
  label while1 :
     %5 = 10
     %6 = i < %5
     ifFalse %6 goto endWhile1
     %8 = 1
     %8 =  * %8
     %9 = a
     %7 = %9[%8]
     %10 = 0
     %11 = %7 == %10
     ifFalse %11 goto endif1
     %13 = 1
     %14 = n + %13
     n = %14
  label endif1 :
     %16 = a
     %15 = 1
     %15 =  * %15
     %18 = 1
     %18 =  * %18
     %19 = a
     %17 = %19[%18]
     %20 = 2
     %21 = %17 * %20
     %16[%15] = %21
     %23 = 1
     %23 =  * %23
     %24 = a
     %22 = %24[%23]
     writei %22
     writeln
     %27 = 1
     %28 = i + %27
     i = %28
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

     %2 = 0
     i = %2
  label while1 :
     %3 = 10
     %4 = i < %3
     ifFalse %4 goto endWhile1
     %5 = 1
     %5 =  * %5
     x[%5] = i
     %7 = 1
     %8 = i + %7
     i = %8
     goto while1
  label endWhile1 :
     %10 = 0
     i = %10
  label while2 :
     %11 = 10
     %12 = i < %11
     ifFalse %12 goto endWhile2
     %14 = 1
     %14 =  * %14
     %13 = x[%14]
     writei %13
     writeln
     %17 = 1
     %18 = i + %17
     i = %18
     goto while2
  label endWhile2 :
     pushparam 
     %21 = &x
     pushparam %21
     call x2
     popparam 
     popparam %20
     z = %20
     %22 = 'z'
     writec %22
     %22 = ':'
     writec %22
     writei z
     writeln
     %25 = 0
     i = %25
  label while3 :
     %26 = 10
     %27 = i < %26
     ifFalse %27 goto endWhile3
     %28 = 'x'
     writec %28
     %28 = '['
     writec %28
     writei i
     %29 = ']'
     writec %29
     %29 = '='
     writec %29
     %31 = 1
     %31 =  * %31
     %30 = x[%31]
     writei %30
     writeln
     %34 = 1
     %35 = i + %34
     i = %35
     goto while3
  label endWhile3 :
     return
endfunction


