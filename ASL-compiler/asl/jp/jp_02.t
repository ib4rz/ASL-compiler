function main
  vars
    n 1
    f 1
    aux 1
    end 1
  endvars

     readi n
     aux = n
     %1 = 0
     %2 = n < %1
     ifFalse %2 goto endif1
     %3 = 'n'
     writec %3
     %3 = ' '
     writec %3
     %3 = '>'
     writec %3
     %3 = '='
     writec %3
     %3 = ' '
     writec %3
     %3 = '0'
     writec %3
     %3 = '!'
     writec %3
     writeln
     %4 = 1
     end = %4
  label endif1 :
     %5 = 1
     f = %5
  label while1 :
     %6 = not end
     %7 = 1
     %9 = n <= %7
     %8 = not %9
     %10 = %6 and %8
     ifFalse %10 goto endWhile1
     %11 = f * n
     f = %11
     %12 = 1
     %13 = n - %12
     n = %13
     goto while1
  label endWhile1 :
     %14 = 0
     %15 = end == %14
     ifFalse %15 goto endif2
     writei aux
     %16 = '!'
     writec %16
     %16 = '='
     writec %16
     writei f
     writeln
  label endif2 :
     return
endfunction


