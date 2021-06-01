function f
  params
    v
  endparams

  vars
    c 10
    i 1
  endvars

     %2 = v
     %3 = 0
     %9 = 1
     %4 = 10
     %5 = 1
  label while1 :
     %7 = %3 < %4
     ifFalse %7 goto endwhile1
     %8 = %5 * %3
     %6 = %2[%8]
     c[%8] = %6
     %3 = %3 + %9
     goto while1
  label endwhile1 :
     c = v
     %10 = 'e'
     writec %10
     %10 = 'n'
     writec %10
     %10 = ' '
     writec %10
     %10 = 'f'
     writec %10
     %10 = '.'
     writec %10
     %10 = ' '
     writec %10
     %10 = 'c'
     writec %10
     %10 = ':'
     writec %10
     %10 = ' '
     writec %10
     %11 = 0
     i = %11
  label while2 :
     %12 = 10
     %13 = i < %12
     ifFalse %13 goto endWhile2
     %15 = 1
     %15 = i * %15
     %14 = c[%15]
     writei %14
     %16 = ' '
     writec %16
     %17 = 1
     %18 = i + %17
     i = %18
     goto while2
  label endWhile2 :
     %19 = '\n'
     writec %19
     return
endfunction

function g
  params
    v
  endparams

  vars
    d 10
    i 1
  endvars

     %1 = 0
     i = %1
  label while1 :
     %2 = 10
     %3 = i < %2
     ifFalse %3 goto endWhile1
     %4 = 1
     %4 = i * %4
     %5 = 1
     %6 = - %5
     d[%4] = %6
     %7 = 1
     %8 = i + %7
     i = %8
     goto while1
  label endWhile1 :
     %9 = v
     %11 = 0
     %17 = 1
     %12 = 10
     %13 = 1
  label while2 :
     %15 = %11 < %12
     ifFalse %15 goto endwhile2
     %16 = %13 * %11
     %14 = d[%16]
     %9[%16] = %14
     %11 = %11 + %17
     goto while2
  label endwhile2 :
     v = d
     return
endfunction

function main
  vars
    a 10
    b 10
    i 1
    j 1
  endvars

     %1 = 0
     i = %1
  label while1 :
     %2 = 10
     %3 = i < %2
     ifFalse %3 goto endWhile1
     %4 = 1
     %4 = i * %4
     a[%4] = i
     %5 = 1
     %5 = i * %5
     %6 = 0
     b[%5] = %6
     %7 = 1
     %8 = i + %7
     i = %8
     goto while1
  label endWhile1 :
     %11 = 0
     %17 = 1
     %12 = 10
     %13 = 1
  label while2 :
     %15 = %11 < %12
     ifFalse %15 goto endwhile2
     %16 = %13 * %11
     %14 = a[%16]
     b[%16] = %14
     %11 = %11 + %17
     goto while2
  label endwhile2 :
     b = a
     %18 = 'd'
     writec %18
     %18 = 'e'
     writec %18
     %18 = 's'
     writec %18
     %18 = 'p'
     writec %18
     %18 = 'r'
     writec %18
     %18 = 'e'
     writec %18
     %18 = 's'
     writec %18
     %18 = ' '
     writec %18
     %18 = 'd'
     writec %18
     %18 = 'e'
     writec %18
     %18 = ' '
     writec %18
     %18 = 'b'
     writec %18
     %18 = '='
     writec %18
     %18 = 'a'
     writec %18
     %18 = '.'
     writec %18
     %18 = ' '
     writec %18
     %18 = 'b'
     writec %18
     %18 = ':'
     writec %18
     %18 = ' '
     writec %18
     %19 = 0
     i = %19
  label while3 :
     %20 = 10
     %21 = i < %20
     ifFalse %21 goto endWhile3
     %23 = 1
     %23 = i * %23
     %22 = b[%23]
     writei %22
     %24 = ' '
     writec %24
     %25 = 1
     %26 = i + %25
     i = %26
     goto while3
  label endWhile3 :
     %27 = '\n'
     writec %27
     %28 = 'd'
     writec %28
     %28 = 'e'
     writec %28
     %28 = 's'
     writec %28
     %28 = 'p'
     writec %28
     %28 = 'r'
     writec %28
     %28 = 'e'
     writec %28
     %28 = 's'
     writec %28
     %28 = ' '
     writec %28
     %28 = 'd'
     writec %28
     %28 = 'e'
     writec %28
     %28 = ' '
     writec %28
     %28 = 'b'
     writec %28
     %28 = '='
     writec %28
     %28 = 'a'
     writec %28
     %28 = '.'
     writec %28
     %28 = ' '
     writec %28
     %28 = 'a'
     writec %28
     %28 = ':'
     writec %28
     %28 = ' '
     writec %28
     %29 = 0
     i = %29
  label while4 :
     %30 = 10
     %31 = i < %30
     ifFalse %31 goto endWhile4
     %33 = 1
     %33 = i * %33
     %32 = a[%33]
     writei %32
     %34 = ' '
     writec %34
     %35 = 1
     %36 = i + %35
     i = %36
     goto while4
  label endWhile4 :
     %37 = '\n'
     writec %37
     %38 = &a
     pushparam %38
     call f
     popparam 
     %39 = 'd'
     writec %39
     %39 = 'e'
     writec %39
     %39 = 's'
     writec %39
     %39 = 'p'
     writec %39
     %39 = 'r'
     writec %39
     %39 = 'e'
     writec %39
     %39 = 's'
     writec %39
     %39 = ' '
     writec %39
     %39 = 'd'
     writec %39
     %39 = 'e'
     writec %39
     %39 = ' '
     writec %39
     %39 = 'f'
     writec %39
     %39 = '('
     writec %39
     %39 = 'a'
     writec %39
     %39 = ')'
     writec %39
     %39 = '.'
     writec %39
     %39 = ' '
     writec %39
     %39 = 'a'
     writec %39
     %39 = ':'
     writec %39
     %39 = ' '
     writec %39
     %40 = 0
     i = %40
  label while5 :
     %41 = 10
     %42 = i < %41
     ifFalse %42 goto endWhile5
     %44 = 1
     %44 = i * %44
     %43 = a[%44]
     writei %43
     %45 = ' '
     writec %45
     %46 = 1
     %47 = i + %46
     i = %47
     goto while5
  label endWhile5 :
     %48 = '\n'
     writec %48
     %49 = &a
     pushparam %49
     call g
     popparam 
     %50 = 'd'
     writec %50
     %50 = 'e'
     writec %50
     %50 = 's'
     writec %50
     %50 = 'p'
     writec %50
     %50 = 'r'
     writec %50
     %50 = 'e'
     writec %50
     %50 = 's'
     writec %50
     %50 = ' '
     writec %50
     %50 = 'd'
     writec %50
     %50 = 'e'
     writec %50
     %50 = ' '
     writec %50
     %50 = 'g'
     writec %50
     %50 = '('
     writec %50
     %50 = 'a'
     writec %50
     %50 = ')'
     writec %50
     %50 = '.'
     writec %50
     %50 = ' '
     writec %50
     %50 = 'a'
     writec %50
     %50 = ':'
     writec %50
     %50 = ' '
     writec %50
     %51 = 0
     i = %51
  label while6 :
     %52 = 10
     %53 = i < %52
     ifFalse %53 goto endWhile6
     %55 = 1
     %55 = i * %55
     %54 = a[%55]
     writei %54
     %56 = ' '
     writec %56
     %57 = 1
     %58 = i + %57
     i = %58
     goto while6
  label endWhile6 :
     %59 = '\n'
     writec %59
     return
endfunction


