function mul
  params
    _result
    a
    b
  endparams

   %1 = a * b
   _result = %1
   return
endfunction

function main
  vars
    x 1
    y 1
  endvars

   readi x
   readi y
   %1 = 'x'
   writec %1
   %1 = '*'
   writec %1
   %1 = 'y'
   writec %1
   %1 = '*'
   writec %1
   %1 = '2'
   writec %1
   %1 = '='
   writec %1
   pushparam 
   pushparam x
   pushparam y
   call mul
   popparam 
   popparam 
   popparam %3
   %4 = 2
   %5 = %3 * %4
   writei %5
   %6 = '.'
   writec %6
   writeln
   return
endfunction


