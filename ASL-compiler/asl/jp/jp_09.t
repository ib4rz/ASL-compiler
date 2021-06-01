function fact
  params
    _result
    n
  endparams

  vars
    f 1
  endvars

     %2 = 1
     f = %2
  label while1 :
     %3 = 1
     %5 = n <= %3
     %4 = not %5
     ifFalse %4 goto endWhile1
     %7 = f * n
     f = %7
     %9 = 1
     %10 = n - %9
     n = %10
     goto while1
  label endWhile1 :
     _result = f
     return
endfunction

function main
  vars
    max 1
    i 1
    f 1
    end 1
  endvars

     %2 = 1
     end = %2
     readi max
     %4 = i <= max
     ifFalse %4 goto else1
     %6 = 0
     end = %6
     goto endif1
  label else1 :
     %8 = 0
     i = %8
  label endif1 :
  label while1 :
     %9 = not end
     ifFalse %9 goto endWhile1
     writei i
     %10 = '!'
     writec %10
     %10 = '='
     writec %10
     pushparam 
     pushparam i
     call fact
     popparam 
     popparam %11
     writei %11
     writeln
     %13 = i == max
     ifFalse %13 goto else2
     %15 = 1
     end = %15
     goto endif2
  label else2 :
     %17 = 1
     %18 = i +. %17
     i = %18
  label endif2 :
     goto while1
  label endWhile1 :
     return
endfunction


